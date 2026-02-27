from typing import TypedDict
from langgraph.graph import StateGraph, END
from langchain_openai import ChatOpenAI

# ------------------------------------------------------------
# Step 0: Define State
# ------------------------------------------------------------
class JDState(TypedDict):
    jd: str
    approved: bool

# ------------------------------------------------------------
# Step 1: LLM
# ------------------------------------------------------------
llm = ChatOpenAI(model="gpt-4", temperature=0)

# ------------------------------------------------------------
# Step 2: Nodes
# ------------------------------------------------------------
def hiring_request(_: JDState) -> JDState:
    return {
        "jd": "We need to hire a Software Engineer for our backend team.",
        "approved": False
    }


def create_jd(state: JDState) -> JDState:
    response = llm.invoke(
        f"Create a job description based on this request:\n{state['jd']}"
    )
    return {
        "jd": response.content,
        "approved": False
    }


def check_approval(state: JDState) -> JDState:
    jd_text = state["jd"]
    approved = "engineer" in jd_text.lower() and len(jd_text) > 100
    return {
        "jd": jd_text,
        "approved": approved
    }


def post_jd(state: JDState) -> JDState:
    print("\n✅ Final Approved JD:\n")
    print(state["jd"])
    return state

# ------------------------------------------------------------
# Step 3: Approval Router
# ------------------------------------------------------------
def approval_router(state: JDState) -> str:
    if state["approved"]:
        return "approved"
    return "not_approved"

# ------------------------------------------------------------
# Step 4: Build Graph
# ------------------------------------------------------------
graph = StateGraph(JDState)

graph.add_node("HiringRequest", hiring_request)
graph.add_node("CreateJD", create_jd)
graph.add_node("CheckApproval", check_approval)
graph.add_node("PostJD", post_jd)

graph.add_edge("HiringRequest", "CreateJD")
graph.add_edge("CreateJD", "CheckApproval")

graph.add_conditional_edges(
    "CheckApproval",
    approval_router,
    {
        "approved": "PostJD",
        "not_approved": "CreateJD",  # 🔁 loop back
    }
)

graph.add_edge("PostJD", END)

graph.set_entry_point("HiringRequest")

# ------------------------------------------------------------
# Step 5: Compile & Run
# ------------------------------------------------------------
app = graph.compile()
app.invoke({})