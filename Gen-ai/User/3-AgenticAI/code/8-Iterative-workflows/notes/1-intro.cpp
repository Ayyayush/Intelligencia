/**
 *  ===============================================================
 * 📘 Playlist: Agentic AI with LangGraph
 * 🎓 Instructor: CampusX (Nitish Sir)
 * 🎥 Lecture-8 | Video-9
 * 📌 Topic: Iterative Workflows
 * ===============================================================
 * 
 * ! PROBLEM STATEMENT (REAL-WORLD IDEA)
 * ---------------------------------------------------------------
 * 👉 Nitish sir YouTube ke alawa dusre platforms pe active nahi reh paate
 * 👉 Reason: Time crunch
 * 
 * 👉 Solution:
 * Ek automated system banaye jo:
 * - Content generate kare
 * - Automatically different platforms pe post kare
 * 
 * 👉 BUT problem:
 * Generated posts ki quality low ho sakti hai ❌
 * 
 * 
 * ! WHAT IS ITERATIVE WORKFLOW ?
 * ---------------------------------------------------------------
 * 👉 Iterative workflow ka matlab hota hai:
 * 👉 Same process ko baar-baar repeat karna until desired output mil jaye
 * 
 * 👉 Basically:
 * Generate → Evaluate → Improve → Repeat 🔁
 * 
 * 
 * ! CORE IDEA (THIS LECTURE)
 * ---------------------------------------------------------------
 * 👉 Input: Topic (e.g., "AI in India")
 * 
 * 👉 Workflow:
 * Topic → Post Generate → Quality Check → Improve → Repeat
 * 
 * 👉 Jab tak quality threshold meet na ho → loop chalta rahega
 * 
 * 
 * ! MAIN COMPONENTS
 * ---------------------------------------------------------------
 * 👉 4 major nodes honge:
 * 
 * 1. START
 *    - Input topic receive karega
 * 
 * 2. GENERATE
 *    - LLM use karke post generate karega
 * 
 * 3. EVALUATE
 *    - Post ki quality check karega (score / feedback)
 * 
 * 4. OPTIMIZE
 *    - Feedback ke basis pe post improve karega
 * 
 * 
 * ! FLOW STRUCTURE
 * ---------------------------------------------------------------
 * 
 * START → GENERATE → EVALUATE →
 *            ↑          ↓
 *            └── OPTIMIZE ──┘
 * 
 * 👉 Loop chalta rahega jab tak:
 * score < threshold
 * 
 * 👉 Agar score achha ho jaye:
 * → END
 * 
 * 
 * ! HOW DECISION WORKS
 * ---------------------------------------------------------------
 * 👉 Condition check hota hai:
 * 
 * if score >= threshold:
 *   → END
 * else:
 *   → OPTIMIZE → phir GENERATE → repeat
 * 
 * 
 * ! WHY ITERATIVE WORKFLOW ?
 * ---------------------------------------------------------------
 * 👉 Single LLM output perfect nahi hota
 * 👉 Improvement loop se quality better hoti hai
 * 👉 Real-world AI systems isi approach use karte hain
 * 
 * 
 * ! KEY CONCEPTS USED
 * ---------------------------------------------------------------
 * 👉 Loop / Iteration
 * 👉 Conditional decision (continue or stop)
 * 👉 Feedback-driven improvement
 * 👉 LLM-based generation + evaluation
 * 
 * 
 * ! REAL-WORLD USE CASES
 * ---------------------------------------------------------------
 * 👉 Content generation systems
 * 👉 Code generation + refinement
 * 👉 Essay writing improvement
 * 👉 AI agents with self-correction
 * 
 * 
 * ! FINAL ONE-LINE SUMMARY
 * ---------------------------------------------------------------
 * 👉 Iterative Workflow = Generate → Evaluate → Improve → Repeat until good
 * 
 * ===============================================================
 */