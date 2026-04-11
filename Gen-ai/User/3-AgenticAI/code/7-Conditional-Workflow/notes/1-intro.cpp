/**
 *  ===============================================================
 * 📘 Playlist: Agentic AI with LangGraph
 * 🎓 Instructor: CampusX (Nitish Sir)
 * 🎥 Lecture-7 | Video-8
 * 📌 Topic: Conditional Workflows
 * ===============================================================
 * 
 * ! WHAT IS CONDITIONAL WORKFLOW ?
 * ---------------------------------------------------------------
 * 👉 Conditional workflow ka matlab hota hai:
 * 👉 Flow decision ke basis pe change hota hai (if-else logic)
 * 
 * 👉 Same input ke liye different paths ho sakte hain
 * 
 * Example:
 * START → Condition Check →
 *          ├── Path A (if true)
 *          └── Path B (if false)
 * 
 * 
 * ! HOW IT WORKS (IN LANGGRAPH)
 * ---------------------------------------------------------------
 * 👉 Ek special function hota hai jo decision leta hai
 * 👉 Uske basis pe graph decide karta hai next node
 * 
 * 👉 Syntax concept:
 * graph.add_conditional_edges(node, condition_function)
 * 
 * 👉 Condition function return karta hai:
 * - next node ka naam
 * 
 * 
 * ! DIFFERENCE (VERY IMPORTANT)
 * ---------------------------------------------------------------
 * 
 * 1. Sequential Workflow:
 * 👉 Tasks ek ke baad ek (fixed order)
 * 👉 No decision making
 * 
 * 2. Parallel Workflow:
 * 👉 Multiple tasks ek saath
 * 👉 No dependency between tasks
 * 
 * 3. Conditional Workflow:
 * 👉 Decision-based flow
 * 👉 Different paths based on condition
 * 
 * 
 * ! EXAMPLE 1: QUADRATIC EQUATION WORKFLOW
 * ---------------------------------------------------------------
 * 👉 Problem:
 * ax² + bx + c = 0
 * 
 * 👉 Step 1: Discriminant calculate karo:
 * D = b² - 4ac
 * 
 * 👉 Step 2: Condition apply karo:
 * 
 * if D > 0:
 *   → 2 real & distinct roots
 * 
 * if D == 0:
 *   → 1 real root
 * 
 * if D < 0:
 *   → complex roots
 * 
 * 👉 Flow:
 * START → Calculate D → Condition Check →
 *          ├── D > 0 → Node1
 *          ├── D = 0 → Node2
 *          └── D < 0 → Node3 → END
 * 
 * 
 * 
 * 
 * 
 * ! EXAMPLE 2: REVIEW REPLY WORKFLOW
 * ---------------------------------------------------------------
 * 👉 Use case:
 * Customer review ka automated reply generate karna
 * 
 * 👉 Input:
 * - review text
 * - rating (1–5)
 * 
 * 👉 Working:
 * 
 * Step 1: Review analyze karo (LLM)
 * Step 2: Sentiment / rating check karo
 * 
 * 👉 Condition:
 * 
 * if rating >= 4:
 *   → Positive reply (Thank you message)
 * 
 * if rating == 3:
 *   → Neutral reply (Acknowledgement)
 * 
 * if rating <= 2:
 *   → Negative reply (Apology + resolution)
 * 
 * 👉 Flow:
 * START → Analyze Review →
 *          ├── Positive Path → Reply Node
 *          ├── Neutral Path → Reply Node
 *          └── Negative Path → Reply Node → END
 * 
 * 
 * ! KEY CONCEPTS USED
 * ---------------------------------------------------------------
 * 👉 Conditional Edges
 * 👉 Decision Function
 * 👉 Dynamic Flow Routing
 * 
 * 
 * ! WHY IMPORTANT ?
 * ---------------------------------------------------------------
 * 👉 Real-world AI systems rarely linear hote hain
 * 👉 Decision-making required hota hai
 * 👉 Intelligent agents isi concept pe kaam karte hain
 * 
 * 
 * ! FINAL ONE-LINE SUMMARY
 * ---------------------------------------------------------------
 * 👉 Conditional Workflow = Decision-based execution path
 * 
 * ===============================================================
 */