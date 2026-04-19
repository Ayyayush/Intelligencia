# =========================================================
# FINAL STREAMLIT FRONTEND (MODERN UI + CURRENT CHAT)
# =========================================================

import streamlit as st
from langgraph_database_backend import chatbot, retrieve_all_threads
from langchain_core.messages import HumanMessage
import uuid

# =========================================================
# PAGE CONFIG (MODERN LOOK)
# =========================================================
st.set_page_config(
    page_title="Agentic AI Chat",
    page_icon="🤖",
    layout="wide"
)

# =========================================================
# UTILITY FUNCTIONS
# =========================================================

def generate_thread_id():
    return str(uuid.uuid4())

def add_thread(thread_id):
    if thread_id not in st.session_state['chat_threads']:
        st.session_state['chat_threads'].append(thread_id)

def reset_chat():
    new_id = generate_thread_id()
    st.session_state['thread_id'] = new_id
    st.session_state['message_history'] = []
    add_thread(new_id)
    st.rerun()

def load_conversation(thread_id):
    state = chatbot.get_state(
        config={"configurable": {"thread_id": thread_id}}
    )

    if not state:
        return []

    messages = state.values.get("messages", [])

    temp = []
    for msg in messages:
        role = "user" if msg.type == "human" else "assistant"
        temp.append({
            "role": role,
            "content": msg.content
        })

    return temp

# =========================================================
# SESSION SETUP
# =========================================================

if "message_history" not in st.session_state:
    st.session_state["message_history"] = []

if "thread_id" not in st.session_state:
    st.session_state["thread_id"] = generate_thread_id()

if "chat_threads" not in st.session_state:
    st.session_state["chat_threads"] = retrieve_all_threads()

add_thread(st.session_state["thread_id"])

# =========================================================
# SIDEBAR (MODERN)
# =========================================================

st.sidebar.markdown("## 🤖 Agentic AI")
st.sidebar.caption("Your personal AI assistant")

# New Chat Button
if st.sidebar.button("➕ New Chat", key="new_chat_btn", use_container_width=True):
    reset_chat()

st.sidebar.divider()
st.sidebar.markdown("### 💬 Conversations")

# Chat list (with current highlight)
for i, thread_id in enumerate(st.session_state["chat_threads"][::-1]):

    is_current = thread_id == st.session_state["thread_id"]

    # Highlight current chat
    label = f"🟢 {thread_id[:8]}..." if is_current else f"⚪ {thread_id[:8]}..."

    if st.sidebar.button(
        label,
        key=f"thread_{i}_{thread_id}",
        use_container_width=True
    ):
        st.session_state["thread_id"] = thread_id
        st.session_state["message_history"] = load_conversation(thread_id)
        st.rerun()

# =========================================================
# MAIN UI (MODERN)
# =========================================================


st.markdown(f"""
<div style="
    padding: 15px;
    border-radius: 12px;
    background: linear-gradient(135deg, #0f172a, #1e293b);
    box-shadow: 0 0 20px rgba(0,0,0,0.4);
    text-align: center;
">
    <h1 style="
        font-size: 38px;
        margin-bottom: 5px;
        background: linear-gradient(90deg, #38bdf8, #6366f1);
        -webkit-background-clip: text;
        -webkit-text-fill-color: transparent;
    ">
        🤖 IntelliChat
    </h1>

  

  
</div>
""", unsafe_allow_html=True)


# Current chat indicator
# st.caption(f"Active Chat ID: `{st.session_state['thread_id'][:12]}...`")

# Chat container
chat_container = st.container()

with chat_container:
    for message in st.session_state["message_history"]:
        with st.chat_message(message["role"]):
            st.markdown(message["content"])

# =========================================================
# INPUT + STREAMING
# =========================================================

user_input = st.chat_input("Ask anything...", key="main_chat_input")

if user_input:

    # USER MESSAGE
    st.session_state["message_history"].append({
        "role": "user",
        "content": user_input
    })

    with st.chat_message("user"):
        st.markdown(user_input)

    CONFIG = {
        "configurable": {
            "thread_id": st.session_state["thread_id"]
        }
    }

    # AI STREAMING
    full_response = ""

    with st.chat_message("assistant"):
        placeholder = st.empty()

        for chunk, _ in chatbot.stream(
            {"messages": [HumanMessage(content=user_input)]},
            config=CONFIG,
            stream_mode="messages"
        ):
            if chunk.content:
                full_response += chunk.content
                placeholder.markdown(full_response)

    st.session_state["message_history"].append({
        "role": "assistant",
        "content": full_response
    })