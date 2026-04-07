/**
 *  ===============================================================
 * 📘 Playlist: Agentic AI with LangGraph
 * 🎓 Instructor: CampusX (Nitish Sir)
 * 🎥 Lecture-6 | Video-7
 * 📌 Topic: Parallel Workflows
 * ===============================================================
 * 
 * ! WHAT IS PARALLEL WORKFLOW ?
 * ---------------------------------------------------------------
 * Parallel workflow ka matlab hota hai:
 * 👉 Multiple tasks ek saath (simultaneously) execute hote hain
 * 👉 Tasks independent hote hain (ek dusre pe depend nahi karte)
 * 
 * Example:
 *            → Task1 →
 * START →                 → END
 *            → Task2 →
 * 
 * 👉 Dono tasks same time pe run karte hain
 * 👉 Final result combine hota hai
 * 
 * ---------------------------------------------------------------
 * 
 * ! WHY USE PARALLEL WORKFLOW ?
 * ---------------------------------------------------------------
 * 👉 Faster execution (time save hota hai)
 * 👉 Independent tasks ko alag-alag run kar sakte hain
 * 👉 Efficiency increase hoti hai
 * 
 * ---------------------------------------------------------------
 * 
 * ! TYPES OF PARALLEL WORKFLOWS
 * ---------------------------------------------------------------
 * 
 * ! 1. SIMPLE PARALLEL WORKFLOW (NON-LLM)
 * ---------------------------------------------------------------
 * 👉 Definition:
 * Parallel tasks jisme sirf normal functions use hote hain (no AI)
 * 
 * 👉 Characteristics:
 * - Deterministic
 * - Fast execution
 * - No API calls
 * 
 * 👉 Example:
 * - Ek node BMI calculate kare
 * - Dusra node BMR calculate kare
 * 👉 Dono ek saath run honge
 * 
 * 👉 Flow:
 * START → [BMI Node + BMR Node] → END
 * 
 * ---------------------------------------------------------------
 * 
 * ! 2. LLM-BASED PARALLEL WORKFLOW
 * ---------------------------------------------------------------
 * 👉 Definition:
 * Parallel tasks jisme multiple LLM calls ek saath run hote hain
 * 
 * 👉 Characteristics:
 * - Non-deterministic
 * - Multiple API calls at same time
 * - Faster than sequential LLM calls
 * 
 * 👉 Example:
 * - Same question ko different prompts se analyze karna:
 *    → Node1: Explain simply
 *    → Node2: Give technical explanation
 *    → Node3: Give examples
 * 
 * 👉 Flow:
 * START → [LLM1 + LLM2 + LLM3] → END
 * 
 * ---------------------------------------------------------------
 * 
 * ! HOW IT WORKS IN LANGGRAPH
 * ---------------------------------------------------------------
 * 👉 Multiple nodes ko START se connect karte hain
 * 👉 Sab nodes parallel execute hote hain
 * 👉 Har node state ka apna part update karta hai
 * 👉 END pe final state merge hota hai
 * 
 * ---------------------------------------------------------------
 * 
 * ! KEY DIFFERENCE (INTERVIEW GOLD)
 * ---------------------------------------------------------------
 * Sequential Workflow:
 * 👉 Tasks ek ke baad ek (linear)
 * 
 * Parallel Workflow:
 * 👉 Tasks ek saath (simultaneous)
 * 
 * ---------------------------------------------------------------
 * 
 * ! WHEN TO USE ?
 * ---------------------------------------------------------------
 * 👉 Jab tasks independent ho
 * 👉 Jab speed important ho
 * 👉 Jab multiple perspectives chahiye (LLM case)
 * 
 * ---------------------------------------------------------------
 * 
 * ! REAL-WORLD USE CASES
 * ---------------------------------------------------------------
 * 👉 Multi-analysis AI systems
 * 👉 Data processing pipelines
 * 👉 Multi-agent AI systems
 * 
 * ===============================================================
 */