/**
 *
 * 🎯 GOAL
 * ---------------------------------------------------------------
 * We already built:
 * ✔ Chatbot (LangGraph)
 * ✔ Streaming responses
 * ✔ Basic UI (Streamlit)
 * ✔ Resume Chat (thread_id concept)
 * 
 * 👉 Now we will:
 * Build a FULL UI SYSTEM to manage multiple conversations
 * like ChatGPT (sidebar + chat switching)
 * 
 * 
 * 
 * 
 * ===============================================================
 * 🧩 BREAKDOWN OF TASKS (STEP-BY-STEP)
 * ===============================================================
 * 
 * ---------------------------------------------------------------
 * 🔹 STEP 1: SIDEBAR SETUP
 * ---------------------------------------------------------------
 * 
 * 👉 Add Sidebar Components:
 * 
 * ✔ Title → "Agentic AI Chatbot"
 * ✔ Button → "Start Chat"
 * ✔ Section Title → "My Conversations"
 * 
 * 👉 Purpose:
 * - Navigation system for chats
 * - Entry point for new chats
 * 
 * Example:
 * 
 *     st.sidebar.title("Agentic AI Chatbot")
 *     st.sidebar.button("Start Chat")
 *     st.sidebar.markdown("### My Conversations")
 * 
 * ---------------------------------------------------------------
 * 🔹 STEP 2: THREAD ID GENERATION
 * ---------------------------------------------------------------
 * 
 * 👉 What we do:
 * - Generate a unique thread_id for each chat
 * - Store it in session_state
 * 
 * 👉 Why?
 * - Identifies each conversation uniquely
 * 
 * Example:
 * 
 *     import uuid
 * 
 *     if "thread_id" not in st.session_state:
 *         st.session_state.thread_id = str(uuid.uuid4())
 * 
 * 👉 Also display thread_id in sidebar:
 * 
 *     st.sidebar.write("Current Chat ID:")
 *     st.sidebar.write(st.session_state.thread_id)
 * 
 * ---------------------------------------------------------------
 * 🔹 STEP 3: NEW CHAT FUNCTIONALITY
 * ---------------------------------------------------------------
 * 
 * 👉 Add Button:
 * 
 *     st.sidebar.button("New Chat")
 * 
 * 👉 On Click:
 * 
 * ✔ Generate NEW thread_id
 * ✔ Save in session_state
 * ✔ Reset message history
 * 
 * Example Logic:
 * 
 *     if st.sidebar.button("New Chat"):
 *         st.session_state.thread_id = str(uuid.uuid4())
 *         st.session_state.messages = []
 * 
 * 👉 Result:
 * - Fresh chat window
 * - No previous messages
 * 
 * ---------------------------------------------------------------
 * 🔹 STEP 4: STORE ALL CONVERSATIONS
 * ---------------------------------------------------------------
 * 
 * 👉 Create a list to store all thread_ids
 * 
 *     if "all_threads" not in st.session_state:
 *         st.session_state.all_threads = []
 * 
 * 👉 Add new thread_id:
 * 
 *     if st.session_state.thread_id not in st.session_state.all_threads:
 *         st.session_state.all_threads.append(st.session_state.thread_id)
 * 
 * 👉 Purpose:
 * - Maintain history of all chats
 * 
 * ---------------------------------------------------------------
 * 🔹 STEP 5: DISPLAY ALL THREADS IN SIDEBAR
 * ---------------------------------------------------------------
 * 
 * 👉 Loop through all thread_ids:
 * 
 *     for thread in st.session_state.all_threads:
 *         st.sidebar.write(thread)
 * 
 * 👉 Problem:
 * - Not clickable ❌
 * 
 * ---------------------------------------------------------------
 * 🔹 STEP 6: MAKE THREADS CLICKABLE
 * ---------------------------------------------------------------
 * 
 * 👉 Convert thread IDs into buttons:
 * 
 *     for thread in st.session_state.all_threads:
 *         if st.sidebar.button(thread):
 *             st.session_state.thread_id = thread
 * 
 * 👉 Result:
 * - Click → Switch conversation
 * 
 * ---------------------------------------------------------------
 * 🔹 STEP 7: LOAD SELECTED CONVERSATION
 * ---------------------------------------------------------------
 * 
 * 👉 On click of thread_id:
 * 
 * ✔ Set current thread_id
 * ✔ Load messages from checkpointer
 * ✔ Display them in chat UI
 * 
 * 👉 Important:
 * LangGraph automatically loads state using:
 * 
 *     config = {
 *         "configurable": {
 *             "thread_id": st.session_state.thread_id
 *         }
 *     }
 * 
 * 👉 So no manual DB fetch needed (if checkpointer used)
 * 
 * ---------------------------------------------------------------
 * 🔹 STEP 8: UI + EXISTING GRAPH INTEGRATION
 * ---------------------------------------------------------------
 * 
 * 👉 We are NOT rebuilding everything ❌
 * 👉 We are EXTENDING existing chatbot ✔
 * 
 * ✔ Same graph
 * ✔ Same LLM
 * ✔ Same streaming logic
 * 
 * 👉 Only adding:
 * - Sidebar
 * - Thread switching
 * - Session handling
 * 
 * ---------------------------------------------------------------
 * 🧠 IMPORTANT CONCEPTS
 * ---------------------------------------------------------------
 * 
 * ✔ session_state → temporary frontend memory
 * ✔ thread_id → backend conversation identity
 * ✔ checkpointer → persistent state manager
 * ✔ sidebar → UI navigation system
 * 
 * ---------------------------------------------------------------
 * ⚠️ COMMON MISTAKES
 * ---------------------------------------------------------------
 * 
 * ❌ Not storing thread_id in session
 * ❌ Resetting messages incorrectly
 * ❌ Not appending new thread to list
 * ❌ Using same thread_id for all chats
 * 
 * ---------------------------------------------------------------
 * 🎯 FINAL FLOW (END-TO-END)
 * ---------------------------------------------------------------
 * 
 * 1. User opens app
 * 2. thread_id generated
 * 3. Chat starts
 * 4. User clicks "New Chat"
 * 5. New thread_id generated
 * 6. Old chats stored in list
 * 7. Sidebar shows all chats
 * 8. User clicks any chat
 * 9. That conversation resumes
 * 
 * ---------------------------------------------------------------
 * 🏁 FINAL SUMMARY
 * ---------------------------------------------------------------
 * 
 * ✔ Sidebar = Navigation system
 * ✔ thread_id = Conversation identity
 * ✔ session_state = UI memory
 * ✔ all_threads = chat history list
 * ✔ buttons = chat switch mechanism
 * ✔ checkpointer = backend memory
 * 
 * 👉 This is exactly how ChatGPT-like UI works 🚀
 * 
 * ===============================================================
 * 
 * 
 * 
 */