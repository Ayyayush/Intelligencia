/**
 *   ===============================================================
 * 📘 Playlist: Agentic AI with LangGraph
 * 🎓 Instructor: CampusX (Nitish Sir)
 * 🎥 Lecture-13 | Video-14
 * 📌 Topic: Resume (Pause) Chat in LangGraph Chatbot
 * ===============================================================
 * 
 * 🔁 RECAP (What we built till now)
 * ---------------------------------------------------------------
 * 1. Built a basic Agentic AI chatbot using LangGraph
 * 2. Integrated LLM (Groq / OpenAI etc.)
 * 3. Added memory (chat history handling)
 * 4. Created UI using Streamlit
 * 5. Implemented Streaming (token-by-token response)
 * 
 * 👉 Problem:
 * If user refreshes / closes app → chat history lost ❌
 * → No way to resume previous conversation
 * 
 * ---------------------------------------------------------------
 * 🧠 WHAT IS "RESUME CHAT" (Pause/Continue Chat)?
 * ---------------------------------------------------------------
 * Resume Chat = Ability to continue conversation
 * from where user left earlier.
 * 
 * 👉 Real-world Example:
 * - ChatGPT remembers your chats
 * - WhatsApp chats persist
 * 
 * 👉 In our chatbot:
 * - User leaves app
 * - Comes back later
 * - Conversation should still exist
 * 
 * ---------------------------------------------------------------
 * ❗ WHY WE NEED THIS?
 * ---------------------------------------------------------------
 * 1. Better User Experience (UX)
 * 2. Long conversations require continuity
 * 3. Important for production-level apps
 * 4. Required for real AI agents (context aware)
 * 
 * ---------------------------------------------------------------
 * ⚙️ CORE CONCEPT: CHECKPOINTING
 * ---------------------------------------------------------------
 * 
 * 💡 Definition:
 * Checkpointing = Saving the state of the graph
 * so it can be restored later.
 * 
 * 👉 In LangGraph:
 * - Graph state = messages (chat history)
 * - Stored using a "checkpointer"
 * 
 * ---------------------------------------------------------------
 * 🧩 TYPES OF CHECKPOINTERS
 * ---------------------------------------------------------------
 * 
 * 1. InMemorySaver
 *    - Stores data in RAM
 *    - Temporary (lost after restart)
 *    - Good for testing
 * 
 * 2. Persistent Storage (Production)
 *    - Database (PostgreSQL, MongoDB)
 *    - Redis
 *    - File system
 * 
 * ---------------------------------------------------------------
 * 🏗️ HOW RESUME CHAT WORKS (FLOW)
 * ---------------------------------------------------------------
 * 
 * Step 1: User sends message
 * Step 2: Graph processes it
 * Step 3: State (messages) gets saved
 * Step 4: A unique "thread_id" is assigned
 * Step 5: When user returns → same thread_id used
 * Step 6: Previous state is loaded automatically
 * 
 * 👉 KEY IDEA:
 * thread_id = identity of conversation
 * 
 * ---------------------------------------------------------------
 * 🔑 IMPORTANT COMPONENTS
 * ---------------------------------------------------------------
 * 
 * 1. State
 *    - Stores messages
 * 
 * 2. Checkpointer
 *    - Saves and loads state
 * 
 * 3. thread_id
 *    - Unique chat session identifier
 * 
 * ---------------------------------------------------------------
 * 🧪 BASIC IMPLEMENTATION IDEA
 * ---------------------------------------------------------------
 * 
 * 👉 Step 1: Add checkpointer
 * 
 *     checkpointer = InMemorySaver()
 * 
 * 👉 Step 2: Compile graph with checkpointer
 * 
 *     graph = builder.compile(checkpointer=checkpointer)
 * 
 * 👉 Step 3: Pass thread_id while invoking
 * 
 *     config = {
 *         "configurable": {
 *             "thread_id": "user_1"
 *         }
 *     }
 * 
 * 👉 Step 4: Call graph
 * 
 *     graph.invoke(
 *         {"messages": [HumanMessage(content="Hello")]},
 *         config=config
 *     )
 * 
 * ---------------------------------------------------------------
 * 🔁 RESUME CHAT BEHAVIOR
 * ---------------------------------------------------------------
 * 
 * 👉 First time:
 * thread_id = "user_1"
 * → New chat starts
 * 
 * 👉 Next time:
 * same thread_id = "user_1"
 * → Old chat resumes
 * 
 * ---------------------------------------------------------------
 * 🎯 STREAMLIT INTEGRATION
 * ---------------------------------------------------------------
 * 
 * 👉 Problem:
 * Streamlit refresh resets session
 * 
 * 👉 Solution:
 * - Store thread_id in session_state
 * 
 * Example:
 * 
 *     if "thread_id" not in st.session_state:
 *         st.session_state.thread_id = str(uuid.uuid4())
 * 
 * 👉 Use this thread_id in graph config
 * 
 * ---------------------------------------------------------------
 * ⚠️ LIMITATIONS OF InMemorySaver
 * ---------------------------------------------------------------
 * 
 * 1. Data lost after server restart
 * 2. Not scalable
 * 3. Not suitable for production
 * 
 * 👉 Use database for real apps
 * 
 * ---------------------------------------------------------------
 * 🚀 PRODUCTION APPROACH
 * ---------------------------------------------------------------
 * 
 * Instead of InMemorySaver:
 * 
 * ✔ Redis (fast, real-time)
 * ✔ PostgreSQL (structured storage)
 * ✔ MongoDB (flexible JSON storage)
 * 
 * 
 * ---------------------------------------------------------------
 * 🧠 INTERVIEW POINTS
 * ---------------------------------------------------------------
 * 
 * Q: What is resume chat?
 * → Continuing conversation using saved state
 * 
 * Q: How LangGraph handles it?
 * → Using checkpointer + thread_id
 * 
 * Q: What is thread_id?
 * → Unique identifier for a conversation
 * 
 * Q: Why checkpointing needed?
 * → To persist state across sessions
 * 
 * ---------------------------------------------------------------
 * 🏁 FINAL SUMMARY
 * ---------------------------------------------------------------
 * 
 * ✔ Resume chat = persistent conversation
 * ✔ Achieved using checkpointing
 * ✔ thread_id is the key
 * ✔ InMemorySaver for testing
 * ✔ DB/Redis for production
 * ✔ Essential for real-world AI apps
 * 
 * ===============================================================
 */