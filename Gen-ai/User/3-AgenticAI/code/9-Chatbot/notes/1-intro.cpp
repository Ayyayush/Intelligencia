/***
 *   ===============================================================
 * 📘 Playlist: Agentic AI with LangGraph
 * 🎓 Instructor: CampusX (Nitish Sir)
 * 🎥 Lecture-9 | Video-10
 * 📌 Topic: Chatbot using LangGraph
 * ===============================================================
 * 
 * ! OVERVIEW
 * ---------------------------------------------------------------
 * 👉 Aaj hum ek advanced chatbot build karenge using LangGraph
 * 👉 Ye simple chatbot nahi hoga — isme multiple features honge
 * 
 * 
 * ! FEATURES WE WILL ADD
 * ---------------------------------------------------------------
 * 👉 1. Normal Chatting
 *    - User ke questions ka answer dena
 * 
 * 👉 2. RAG (Retrieval Augmented Generation)
 *    - External knowledge use karke better answers dena
 * 
 * 👉 3. Tools Integration
 *    - Chatbot actions le sake (API calls, calculations, etc.)
 * 
 * 👉 4. UI (User Interface)
 *    - Chatbot ko frontend dena (Streamlit / Web UI)
 * 
 * 👉 5. LangSmith Integration
 *    - Debugging + monitoring + tracing
 * 
 * 
 * ! ADVANCED CONCEPTS COVERED
 * ---------------------------------------------------------------
 * 👉 1. Persistence
 *    - Chat history save karna (memory maintain karna)
 * 
 * 👉 2. HITL (Human-In-The-Loop)
 *    - Human intervention jab needed ho
 * 
 * 
 * ! WORKFLOW STRUCTURE
 * ---------------------------------------------------------------
 * 👉 Basic flow:
 * 
 * START → Chat Node → END
 * 
 * 👉 Chat Node:
 * - User input leta hai
 * - LLM ko bhejta hai
 * - Response generate karta hai
 * 
 * 
 * ! STATE DESIGN
 * ---------------------------------------------------------------
 * 👉 State mein ek important field hoga:
 * 
 * messages → list of messages
 * 
 * 👉 Ye list store karegi:
 * - user messages
 * - AI responses
 * 
 * 👉 Isse conversation history maintain hoti hai
 * 
 * 
 * ! MESSAGE FLOW
 * ---------------------------------------------------------------
 * 👉 Example:
 * 
 * [
 *   HumanMessage("Hi"),
 *   AIMessage("Hello!"),
 *   HumanMessage("What is AI?")
 * ]
 * 
 * 👉 Ye pura history LLM ko diya jata hai
 * 
 * 
 * ! WHY IMPORTANT ?
 * ---------------------------------------------------------------
 * 👉 Real-world chatbot systems isi pattern pe bante hain
 * 👉 Memory + tools + RAG = powerful AI agents
 * 
 * 
 * ! FINAL ONE-LINE SUMMARY
 * ---------------------------------------------------------------
 * 👉 Chatbot = State (messages) + Chat Node (LLM) + Features (RAG + Tools)
 * 
 * ===============================================================
 */