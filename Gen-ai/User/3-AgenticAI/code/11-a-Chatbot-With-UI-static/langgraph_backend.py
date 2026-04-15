"""
 * Agentic AI Chatbot using LangGraph + Groq LLM
"""

# =========================
# 📦 IMPORTS
# =========================
from langgraph.graph import StateGraph, START, END
from typing import TypedDict, Annotated
from langchain_core.messages import BaseMessage, HumanMessage
from langchain_groq import ChatGroq
from dotenv import load_dotenv
from langgraph.checkpoint.memory import InMemorySaver
from langgraph.graph.message import add_messages

# =========================
# 🔐 LOAD ENV VARIABLES
# =========================
load_dotenv()

# =========================
# 🤖 INITIALIZE LLM
# =========================
llm = ChatGroq(
    model="llama-3.1-8b-instant",   # fast model
    temperature=0
)

# =========================
# 🧠 DEFINE STATE
# =========================
class ChatState(TypedDict):
    """
    ! messages list me pura conversation store hoga
    ! add_messages automatically append karega
    """
    messages: Annotated[list[BaseMessage], add_messages]

# =========================
# ⚙️ NODE FUNCTION
# =========================
def chat_node(state: ChatState):

    messages = state["messages"]        # state se messages lo

    response = llm.invoke(messages)     # LLM call

    return {"messages": [response]}     # list me return karna zaroori

# =========================
# 💾 MEMORY
# =========================
checkpointer = InMemorySaver()

# =========================
# 🔗 BUILD GRAPH
# =========================
graph = StateGraph(ChatState)

graph.add_node("chat_node", chat_node)

graph.add_edge(START, "chat_node")
graph.add_edge("chat_node", END)

# =========================
# 🚀 COMPILE GRAPH
# =========================
chatbot = graph.compile(checkpointer=checkpointer)

# =========================
# 🧪 RUN CHAT LOOP
# =========================
if __name__ == "__main__":

    print("🤖 Chatbot started! Type 'exit' to quit.\n")