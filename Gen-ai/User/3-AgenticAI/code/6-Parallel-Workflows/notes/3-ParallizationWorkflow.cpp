/**
 * ===============================================================
 * ! PARALLEL WORKFLOW (REAL-WORLD UPSC ESSAY EVALUATION SYSTEM)
 * ===============================================================
 * 
 * ! OVERVIEW
 * ---------------------------------------------------------------
 * 👉 Ab hum ek real-world parallel workflow bana rahe hain
 * 👉 Use case: UPSC Essay Evaluation System
 * 
 * 👉 Workflow START hoga
 * 👉 Input mein ek essay text milega
 * 
 * 
 * ! CORE IDEA
 * ---------------------------------------------------------------
 * 👉 Same essay ko 3 different aspects pe evaluate karenge:
 * 
 * 1. Clarity of Thought (CoT)
 * 2. Depth of Analysis (DoA)
 * 3. Language Quality
 * 
 * 👉 Ye teeno evaluation independent hain
 * 👉 Isliye inhe PARALLEL mein run karenge
 * 
 * 
 * ! PARALLEL EXECUTION
 * ---------------------------------------------------------------
 * 👉 START ke baad:
 * 
 *            → Clarity Evaluation →
 * START →     → Analysis Evaluation → → Final Evaluation → END
 *            → Language Evaluation →
 * 
 * 👉 Same essay 3 alag nodes (LLM calls) ko diya jayega
 * 👉 Har node apna kaam independently karega
 * 
 * 
 * ! EACH NODE KA OUTPUT
 * ---------------------------------------------------------------
 * 👉 Har evaluation node return karega:
 * 
 * - Text feedback
 * - Score (0 to 10)
 * 
 * Example:
 * {
 *   "feedback": "...",
 *   "score": 7
 * }
 * 
 * 
 * ! FINAL EVALUATION NODE
 * ---------------------------------------------------------------
 * 👉 3 nodes ke outputs ek final node mein merge honge
 * 
 * 👉 Ye node 2 kaam karega:
 * 
 * 1. Text Feedback Merge:
 *    - Language + Analysis + Clarity feedback combine karega
 *    - LLM use karke ek summarized feedback generate karega
 * 
 * 2. Score Aggregation:
 *    - 3 scores ko combine karega
 *    - Average score calculate karega
 * 
 * 
 * ! STATE DESIGN (VERY IMPORTANT)
 * ---------------------------------------------------------------
 * 👉 State mein ye fields honge:
 * 
 * Input:
 * - essay (string)
 * 
 * Intermediate:
 * - language_feedback
 * - analysis_feedback
 * - clarity_feedback
 * 
 * Output:
 * - overall_feedback (final summarized feedback)
 * - individual_scores (list of 3 scores)
 * - avg_score (float)
 * 
 * 
 * ! REDUCER CONCEPT (IMPORTANT)
 * ---------------------------------------------------------------
 * 👉 Kyunki 3 parallel nodes ek hi field update kar rahe hain:
 * 
 * individual_scores → list[int]
 * 
 * 👉 Hume reducer chahiye:
 * 
 * Annotated[list[int], operator.add]
 * 
 * 👉 Ye automatically:
 * [7] + [6] + [8] → [7, 6, 8]
 * 
 * 👉 Without manual merging 🤯
 * 
 * 
 * ! MERGING CONCEPT
 * ---------------------------------------------------------------
 * 👉 Parallel nodes ke outputs automatically merge hote hain
 * 👉 State update hota rehta hai
 * 👉 Final node complete state use karta hai
 * 
 * 
 * ! KEY CONCEPTS USED
 * ---------------------------------------------------------------
 * 👉 1. Parallel Workflow
 *    - Multiple nodes run simultaneously
 * 
 * 👉 2. LLM-based Evaluation
 *    - Har node LLM call karta hai
 * 
 * 👉 3. Structured / Semi-Structured Output
 *    - Feedback + Score format maintain karna
 * 
 * 👉 4. Reducer Function
 *    - Parallel outputs merge karne ke liye
 * 
 * 👉 5. Aggregation Node
 *    - Final summary + average score
 * 
 * 
 * ! CHALLENGES (IMPORTANT)
 * ---------------------------------------------------------------
 * 👉 LLM kabhi structured output follow nahi karta
 * 👉 Isliye:
 * - Strict prompt dena padta hai
 * - Ya manual parsing use karna padta hai
 * 
 * 
 * ! FINAL FLOW (ONE LINE)
 * ---------------------------------------------------------------
 * 👉 START → [3 Parallel LLM Evaluations] → Merge → Summary → END
 * 
 * ===============================================================
 */