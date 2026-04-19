/**
 *   ===============================================================
 * 📘 Playlist: Agentic AI with LangGraph
 * 🎓 Instructor: CampusX (Nitish Sir)
 * 🎥 Lecture-14 | Video-15
 * 📌 Topic: SQLite + LangGraph (Persistent Memory)
 * ===============================================================
 * 
 * 🔁 RECAP (Problem Statement)
 * ---------------------------------------------------------------
 * Ab tak hum kya kar rahe the:
 * 
 * - Chat history RAM me store ho rahi thi
 * - Jaise hi app restart / refresh hota tha:
 *      → saari chat history delete ❌
 * 
 * 👉 Problem:
 * - No persistence
 * - No resume chat
 * - Not usable in real-world apps
 * 
 * ---------------------------------------------------------------
 * 🧠 WHAT IS SQLITE?
 * ---------------------------------------------------------------
 * 
 * SQLite ek lightweight database hai:
 * 
 * ✔ File-based database (no server required)
 * ✔ Data ek .db file me store hota hai
 * ✔ Fast & simple
 * ✔ Perfect for small-medium apps
 * 
 * 👉 Example:
 * chatbot.db file create hogi jisme saari chats save hongi
 * 
 * ---------------------------------------------------------------
 * ❓ WHY SQLITE IN OUR CHATBOT?
 * ---------------------------------------------------------------
 * 
 * Hume chahiye:
 * 
 * ✔ Chat persistence (data save rahe)
 * ✔ Resume chat feature
 * ✔ Multiple conversations store karna
 * 
 * 👉 SQLite helps:
 * - RAM → Temporary ❌
 * - SQLite → Permanent ✅
 * 
 * ---------------------------------------------------------------
 * ⚙️ LANGGRAPH + SQLITE (CORE IDEA)
 * ---------------------------------------------------------------
 * 
 * LangGraph me ek concept hota hai:
 * 👉 CHECKPOINTER
 * 
 * Ye kya karta hai?
 * 
 * ✔ Graph ka state save karta hai
 * ✔ Messages (chat history) store karta hai
 * ✔ Later reload kar sakte hain
 * 
 * ---------------------------------------------------------------
 * 🧩 SQLITE CHECKPOINTER
 * ---------------------------------------------------------------
 * 
 * LangGraph provide karta hai:
 * 
 *     SqliteSaver
 * 
 * 👉 Ye:
 * - State ko SQLite DB me store karta hai
 * - Thread-based conversations manage karta hai
 * 
 * ---------------------------------------------------------------
 * 🔑 IMPORTANT CONCEPT: thread_id
 * ---------------------------------------------------------------
 * 
 * Har chat ke liye ek unique ID hoti hai:
 * 
 *     thread_id
 * 
 * 👉 Ye kya karta hai?
 * 
 * ✔ Identify karta hai ek conversation ko
 * ✔ Multiple chats handle karta hai
 * ✔ Resume chat enable karta hai
 * 
 * ---------------------------------------------------------------
 * 🏗️ FLOW (VERY IMPORTANT)
 * ---------------------------------------------------------------
 * 
 * Step 1: User message bhejta hai
 * Step 2: LangGraph process karta hai
 * Step 3: State (messages) save hota hai SQLite me
 * Step 4: thread_id ke saath store hota hai
 * 
 * 👉 Later:
 * Step 5: Same thread_id use karo
 * Step 6: Old chat automatically load ho jayegi
 * 
 * ---------------------------------------------------------------
 * 🧪 IMPLEMENTATION IDEA
 * ---------------------------------------------------------------
 * 
 * 1. SQLite connection create karo:
 * 
 *     conn = sqlite3.connect("chatbot.db")
 * 
 * 2. Checkpointer banao:
 * 
 *     checkpointer = SqliteSaver(conn)
 * 
 * 3. Graph compile karo:
 * 
 *     graph.compile(checkpointer=checkpointer)
 * 
 * 4. thread_id pass karo:
 * 
 *     config = {
 *         "configurable": {
 *             "thread_id": "user_1"
 *         }
 *     }
 * 
 * ---------------------------------------------------------------
 * 🔁 RESULT
 * ---------------------------------------------------------------
 * 
 * ✔ Chat save ho jayegi
 * ✔ App band hone ke baad bhi data rahega
 * ✔ Resume chat possible
 * ✔ Multiple conversations possible
 * 
 * ---------------------------------------------------------------
 * ⚠️ IMPORTANT NOTES
 * ---------------------------------------------------------------
 * 
 * 1. thread_id ALWAYS string hona chahiye
 * 2. Har new chat → new thread_id
 * 3. Same thread_id → same conversation
 * 
 * ---------------------------------------------------------------
 * 🆚 RAM vs SQLITE
 * ---------------------------------------------------------------
 * 
 * RAM:
 * ❌ Temporary
 * ❌ Lost on refresh
 * ❌ Not scalable
 * 
 * SQLite:
 * ✔ Persistent
 * ✔ Resume chat possible
 * ✔ Real-world usable
 * 
 * ---------------------------------------------------------------
 * 🧠 INTERVIEW QUESTIONS
 * ---------------------------------------------------------------
 * 
 * Q: Why SQLite in chatbot?
 * → To store conversation persistently
 * 
 * Q: What is checkpointer?
 * → Component that saves graph state
 * 
 * Q: Role of thread_id?
 * → Identifies a conversation uniquely
 * 
 * Q: Difference RAM vs SQLite?
 * → RAM temporary, SQLite permanent
 * 
 * ---------------------------------------------------------------
 * 🏁 FINAL SUMMARY
 * ---------------------------------------------------------------
 * 
 * ✔ SQLite = persistent storage
 * ✔ SqliteSaver = LangGraph checkpointer
 * ✔ thread_id = conversation identity
 * ✔ Enables resume chat
 * ✔ Required for production apps
 * 
 * ===============================================================
 */