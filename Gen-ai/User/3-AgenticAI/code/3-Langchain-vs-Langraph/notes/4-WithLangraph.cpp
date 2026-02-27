/**
 *
 * ---------------------------------------------------------------
 * ! Building the Workflow using LangGraph
 * ---------------------------------------------------------------
 *
 * Let's see how we build the hiring workflow using LangGraph.
 *
 * In LangGraph we represent everything using a GRAPH structure.
 *
 * A graph mainly contains:
 *
 * • Nodes
 * • Edges
 *
 * Nodes represent steps of the workflow.
 * Edges represent the transitions between those steps.
 *
 *
 * Example:
 *
 * HiringRequest  →  CreateJD  →  CheckApproval  →  PostJD
 *
 * Because a graph is NON-LINEAR, we can easily represent
 * complex workflows with loops and conditional branches.
 *
 * This makes LangGraph very suitable for real world workflows.
 *
 *
 * ---------------------------------------------------------------
 * ! LangGraph Example Code
 * ---------------------------------------------------------------
 *
 * from typing import TypedDict
 * from langgraph.graph import StateGraph, END
 * from langchain_openai import ChatOpenAI
 *
 * ------------------------------------------------------------
 * Step 0: Define State
 * ------------------------------------------------------------
 *
 * class JDState(TypedDict):
 *     jd: str
 *     approved: bool
 *
 *
 * ------------------------------------------------------------
 * Step 1: LLM
 * ------------------------------------------------------------
 *
 * llm = ChatOpenAI(model="gpt-4", temperature=0)
 *
 *
 * ------------------------------------------------------------
 * Step 2: Nodes
 * ------------------------------------------------------------
 *
 * def hiring_request(_: JDState) -> JDState:
 *     return {
 *         "jd": "We need to hire a Software Engineer for our backend team.",
 *         "approved": False
 *     }
 *
 *
 * def create_jd(state: JDState) -> JDState:
 *     response = llm.invoke(
 *         f"Create a job description based on this request:\n{state['jd']}"
 *     )
 *     return {
 *         "jd": response.content,
 *         "approved": False
 *     }
 *
 *
 * def check_approval(state: JDState) -> JDState:
 *     jd_text = state["jd"]
 *
 *     approved = "engineer" in jd_text.lower() and len(jd_text) > 100
 *
 *     return {
 *         "jd": jd_text,
 *         "approved": approved
 *     }
 *
 *
 * def post_jd(state: JDState) -> JDState:
 *     print("\n Final Approved JD:\n")
 *     print(state["jd"])
 *     return state
 *
 *
 * ------------------------------------------------------------
 * Step 3: Approval Router
 * ------------------------------------------------------------
 *
 * def approval_router(state: JDState) -> str:
 *
 *     if state["approved"]:
 *         return "approved"
 *
 *     return "not_approved"
 *
 *
 * ------------------------------------------------------------
 * Step 4: Build Graph
 * ------------------------------------------------------------
 *
 * graph = StateGraph(JDState)
 *
 * graph.add_node("HiringRequest", hiring_request)
 * graph.add_node("CreateJD", create_jd)
 * graph.add_node("CheckApproval", check_approval)
 * graph.add_node("PostJD", post_jd)
 *
 * graph.add_edge("HiringRequest", "CreateJD")
 * graph.add_edge("CreateJD", "CheckApproval")
 *
 * graph.add_conditional_edges(
 *     "CheckApproval",
 *     approval_router,
 *     {
 *         "approved": "PostJD",
 *         "not_approved": "CreateJD"     # loop back
 *     }
 * )
 *
 * graph.add_edge("PostJD", END)
 *
 * graph.set_entry_point("HiringRequest")
 *
 *
 * ------------------------------------------------------------
 * Step 5: Compile and Run
 * ------------------------------------------------------------
 *
 * app = graph.compile()
 * app.invoke({})
 *
 *
 * ---------------------------------------------------------------
 * ! Observation from this Demo
 * ---------------------------------------------------------------
 *
 * Notice something important here.
 *
 * We implemented:
 *
 * • Loop logic
 * • Conditional branching
 * • Workflow routing
 * • State updates
 *
 * ALL inside the graph itself.
 *
 * We did NOT need to write external glue code.
 *
 * LangGraph handles workflow execution internally.
 *
 *
 * ---------------------------------------------------------------
 * ! How LangGraph Solves the Previous Problems
 * ---------------------------------------------------------------
 *
 *
 * ---------------------------------------------------------------
 * ! 1️⃣ Control Flow Problem
 * ---------------------------------------------------------------
 *
 * LangGraph allows:
 *
 * • Graph edges
 * • Conditional edges
 * • Loop edges
 *
 * Because of this, complex workflows can easily be modeled.
 *
 *
 * ---------------------------------------------------------------
 * ! 2️⃣ State Handling Problem
 * ---------------------------------------------------------------
 *
 * In LangGraph we define a STATE OBJECT.
 *
 * Example:
 *
 * class JDState(TypedDict):
 *     jd: str
 *     approved: bool
 *
 *
 * Every node in the graph can:
 *
 * • Read the state
 * • Modify the state
 * • Return the updated state
 *
 * During execution, LangGraph automatically propagates
 * the updated state across nodes.
 *
 * This makes the system STATEFUL.
 *
 * Because of this, LangGraph is much better suited for
 * complex AI workflows.
 *
 *
 * ---------------------------------------------------------------
 * ! 3️⃣ Event Driven Execution Problem
 * ---------------------------------------------------------------
 *
 * LangGraph supports event driven workflows using:
 *
 * • Checkpoints
 * • State storage
 * • External triggers
 *
 * The workflow can pause and resume when a trigger occurs.
 *
 * Example:
 *
 * Job Posted
 *       ↓
 * Wait for 7 days
 *       ↓
 * Resume workflow
 *
 *
 * ---------------------------------------------------------------
 * ! 4️⃣ Fault Tolerance
 * ---------------------------------------------------------------
 *
 * LangGraph provides built-in fault tolerance.
 *
 * If a step fails:
 *
 * • Errors can be caught
 * • The node can retry execution
 *
 *
 * Example problems:
 *
 * • API failure
 * • LLM timeout
 * • network error
 *
 *
 * ---------------------------------------------------------------
 * ! Failure Recovery
 * ---------------------------------------------------------------
 *
 * In extreme cases like:
 *
 * • Server crash
 * • System shutdown
 *
 * LangGraph uses CHECKPOINTING.
 *
 * The workflow state is stored.
 *
 * When the system restarts, execution resumes
 * from the last checkpoint instead of restarting
 * the entire workflow.
 *
 *
 * ---------------------------------------------------------------
 * ! 5️⃣ Human in the Loop
 * ---------------------------------------------------------------
 *
 * Human-in-the-loop is a FIRST CLASS CITIZEN in LangGraph.
 *
 * This means the framework is designed from the beginning
 * to support workflows where human approval is required.
 *
 * A workflow can pause and wait for human input.
 *
 * Once the human decision is received,
 * the workflow resumes from the same step.
 *
 * This is similar to a video game checkpoint:
 *
 * If you stop playing today and resume tomorrow,
 * the game continues from where you left off.
 *
 *
 * ---------------------------------------------------------------
 * ! 6️⃣ Nested Workflows
 * ---------------------------------------------------------------
 *
 * LangGraph supports nested workflows using SUBGRAPHS.
 *
 * A subgraph is a graph used as a node inside another graph.
 *
 * This allows:
 *
 * • modular design
 * • reusable workflows
 * • multi-agent architectures
 *
 * Example:
 *
 * Hiring Workflow
 *        ↓
 * Approval Subgraph
 *
 *
 * The same approval workflow can be reused
 * in many different systems.
 *
 *
 * ---------------------------------------------------------------
 * ! 7️⃣ Observability
 * ---------------------------------------------------------------
 *
 * Observability refers to how easily we can monitor
 * and debug workflow execution.
 *
 * LangGraph integrates well with tools like LangSmith.
 *
 * Since the entire workflow is represented as a graph,
 * it becomes easier to visualize:
 *
 * • node execution
 * • state transitions
 * • workflow progress
 *
 * This provides better debugging and monitoring
 * compared to manually written glue code.
 *
 *
 * ---------------------------------------------------------------
 * ! Conclusion
 * ---------------------------------------------------------------
 *
 * LangGraph is designed specifically for:
 *
 * • Stateful workflows
 * • Non-linear execution
 * • Event driven systems
 * • Long running agents
 *
 * Which makes it ideal for building Agentic AI systems.
 *
 *
 * ===============================================================
 */