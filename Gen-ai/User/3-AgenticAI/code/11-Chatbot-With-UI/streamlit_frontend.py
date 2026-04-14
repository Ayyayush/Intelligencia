"""
 * Streamlit UI for LangGraph Chatbot
 *
 * Features:
 * - Chat UI (like ChatGPT)
 * - Session-based memory
 * - LangGraph backend integration
 *
 * Run:
 * streamlit run app.py
"""

# =========================
# 📦 IMPORTS
# =========================
import streamlit as st
from langgraph_backend import chatbot   # ✅ correct import
from langchain_core.messages import HumanMessage

# =========================
# ⚙️ CONFIG (Memory Thread)
# =========================
CONFIG = {
    "configurable": {
        "thread_id": "thread-1"   # same id = same memory
    }
}

# =========================
# 🧠 SESSION STATE INIT
# =========================
if "message_history" not in st.session_state:
    
    #  * message_history ka structure:
    #  * [
    #  *   {"role": "user", "content": "..."},
    #  *   {"role": "assistant", "content": "..."}
    #  * ]

    
    st.session_state["message_history"] = []

# =========================
# 🔁 LOAD OLD MESSAGES
# =========================
for message in st.session_state["message_history"]:
    with st.chat_message(message["role"]):
        st.markdown(message["content"])   # better than st.text

# =========================
# 💬 USER INPUT
# =========================
user_input = st.chat_input("Type your message...")

if user_input:

    # =========================
    # 🧑 ADD USER MESSAGE
    # =========================
    st.session_state["message_history"].append({
        "role": "user",
        "content": user_input
    })

    with st.chat_message("user"):
        st.markdown(user_input)

    # =========================
    # 🤖 CALL LANGGRAPH BOT
    # =========================
    response = chatbot.invoke(
        {"messages": [HumanMessage(content=user_input)]},
        config=CONFIG
    )

    ai_message = response["messages"][-1].content

    # =========================
    # 🤖 ADD AI MESSAGE
    # =========================
    st.session_state["message_history"].append({
        "role": "assistant",
        "content": ai_message
    })

    with st.chat_message("assistant"):
        st.markdown(ai_message)