# =========================================================
# FINAL BACKEND (LANGGRAPH + GROQ + SQLITE)
# =========================================================

from langgraph.graph import StateGraph, START, END
from typing import TypedDict, Annotated
from langchain_core.messages import BaseMessage
from langchain_groq import ChatGroq   # ✅ FIX: use Groq (not OpenAI)
from langgraph.checkpoint.sqlite import SqliteSaver
from langgraph.graph.message import add_messages
from dotenv import load_dotenv
import sqlite3

# =========================================================
# LOAD ENV
# =========================================================
load_dotenv()

# =========================================================
# LLM (GROQ)
# =========================================================
llm = ChatGroq(
    model="llama-3.1-8b-instant",   # fast + good
    temperature=0
)

# =========================================================
# STATE
# =========================================================
class ChatState(TypedDict):
    messages: Annotated[list[BaseMessage], add_messages]

# =========================================================
# NODE
# =========================================================
def chat_node(state: ChatState):
    messages = state["messages"]
    response = llm.invoke(messages)
    return {"messages": [response]}

# =========================================================
# SQLITE CHECKPOINTER
# =========================================================
conn = sqlite3.connect("chatbot.db", check_same_thread=False)
checkpointer = SqliteSaver(conn=conn)

# =========================================================
# GRAPH
# =========================================================
graph = StateGraph(ChatState)

graph.add_node("chat_node", chat_node)
graph.add_edge(START, "chat_node")
graph.add_edge("chat_node", END)

chatbot = graph.compile(checkpointer=checkpointer)

# =========================================================
# RETRIEVE THREADS (FIXED)
# =========================================================
def retrieve_all_threads():
    threads = set()

    try:
        checkpoints = checkpointer.list(None)   # ✅ FIX: NOT {}
    except Exception:
        return []

    for checkpoint in checkpoints:
        config = getattr(checkpoint, "config", None)

        # ✅ FIX: safe access (avoid KeyError)
        if config and "configurable" in config:
            thread_id = config["configurable"].get("thread_id")

            if thread_id:
                threads.add(thread_id)

    return sorted(list(threads))