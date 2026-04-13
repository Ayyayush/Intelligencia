/**
 *   ===============================================================
 * 📘 Playlist: Agentic AI with LangGraph
 * 🎓 Instructor: CampusX (Nitish Sir)
 * 🎥 Lecture-10 | Video-11
 * 📌 Topic: Persistence in LangGraph
 * ===============================================================
 * 
 * ! WHAT IS PERSISTENCE ?
 * ---------------------------------------------------------------
 * 👉 Persistence ka matlab hota hai:
 * 👉 Workflow ke state ko save karna aur baad mein restore karna
 * 
 * 👉 In LangGraph:
 * Persistence = ability to store and reuse state over time
 * 
 * 👉 Example:
 * - Chatbot conversation memory
 * - Multi-step workflows resume karna
 * 
 * 
 * ! KEY CONCEPTS
 * ---------------------------------------------------------------
 * 👉 1. Graph
 *    - Workflow structure (nodes + edges)
 * 
 * 👉 2. State
 *    - Data jo nodes ke beech pass hota hai
 * 
 * 👉 👉 Graph + State = Complete workflow system
 * 
 * 
 * ! CHATBOT EXAMPLE
 * ---------------------------------------------------------------
 * 👉 State:
 * - messages (list of conversation)
 * 
 * 👉 Invoke:
 * - Har baar chatbot.invoke() call hota hai
 * 
 * 👉 Execution Driver:
 * - LangGraph internally workflow run karta hai
 * 
 * 
 * ! DIAGRAM FLOW
 * ---------------------------------------------------------------
 * 
 * Input State (dict)
 *      ↓
 *    START
 *      ↓
 *    NODE 1
 *      ↓
 *    NODE 2
 *      ↓
 *    END → Final State return
 * 
 * 
 * ! HOW STATE WORKS
 * ---------------------------------------------------------------
 * 👉 State ek dictionary hota hai
 * 👉 Har node:
 *    - state read karta hai
 *    - state update karta hai
 * 
 * 👉 Data flow:
 * Input → Nodes → Updated State → Output
 * 
 * 
 * ! IMPORTANT PROPERTIES
 * ---------------------------------------------------------------
 * 👉 State:
 * - Read / Update hota hai
 * - Persist ho sakta hai
 * 
 * 👉 Graph:
 * - Dynamic ho sakta hai
 * - Execution path change ho sakta hai
 * 
 * 
 * ! CHECKPOINTERS (CORE OF PERSISTENCE)
 * ---------------------------------------------------------------
 * 👉 Checkpointer ek system hota hai jo:
 * - State ko store karta hai
 * - Different execution points pe save karta hai
 * 
 * 👉 Basically:
 * "Checkpoint = saved state snapshot"
 * 
 * 
 * ! HOW CHECKPOINTER WORKS
 * ---------------------------------------------------------------
 * 👉 Jab graph execute hota hai:
 * 
 * START
 *   ↓
 * NODE 1  → checkpoint save
 *   ↓
 * NODE 2  → checkpoint save
 *   ↓
 * NODE 3  → checkpoint save
 *   ↓
 * END
 * 
 * 👉 Har step pe state save hota rehta hai
 * 
 * 
 * ! ADVANTAGES OF CHECKPOINTER
 * ---------------------------------------------------------------
 * 👉 1. Resume capability
 *    - Workflow beech se continue kar sakte hain
 * 
 * 👉 2. Memory persistence
 *    - Chatbot previous messages yaad rakhta hai
 * 
 * 👉 3. Debugging
 *    - Har step ka state inspect kar sakte hain
 * 
 * 👉 4. Fault tolerance
 *    - Crash hone pe resume possible
 * 
 * 
 * ! TYPES OF CHECKPOINTERS
 * ---------------------------------------------------------------
 * 👉 MemorySaver
 *    - In-memory storage (temporary)
 * 
 * 👉 Database-based (advanced)
 *    - Redis / Postgres / etc.
 * 
 * 
 * ! REAL-WORLD USE CASES
 * ---------------------------------------------------------------
 * 👉 Chatbots with memory
 * 👉 Multi-step agents
 * 👉 Long-running workflows
 * 👉 AI pipelines
 * 
 * 
 * ! FINAL ONE-LINE SUMMARY
 * ---------------------------------------------------------------
 * 👉 Persistence = State ko save karke future mein reuse karna
 * 
 * ===============================================================
 */