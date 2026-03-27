/**
 * ===============================================================
 * ! TYPES OF WORKFLOWS AND THEIR CHARACTERISTICS
 * ===============================================================
 * 
 * ! 1. SIMPLE WORKFLOW
 * ---------------------------------------------------------------
 * 👉 Definition:
 * Ek basic workflow jisme sirf normal programming logic use hota hai
 * (LLM involved nahi hota)
 * 
 * 👉 Characteristics:
 * - Deterministic (same input → same output)
 * - No AI / no intelligence
 * - Fixed logic (if-else, formulas, etc.)
 * 
 * 👉 Example:
 * - BMI calculation
 * - Sorting array
 * - Basic arithmetic operations
 * 
 * 👉 In LangGraph:
 * - Nodes sirf normal functions hote hain
 * - State update hota hai without LLM
 * 
 * ---------------------------------------------------------------
 * 
 * ! 2. LLM WORKFLOW
 * ---------------------------------------------------------------
 * 👉 Definition:
 * Workflow jisme LLM (Large Language Model) use hota hai
 * to generate response / decision
 * 
 * 👉 Characteristics:
 * - Non-deterministic (same input → slightly different output)
 * - Depends on prompt quality
 * - Uses external API (like Groq / OpenAI)
 * 
 * 👉 Example:
 * - Question answering
 * - Text summarization
 * - Chatbots
 * 
 * 👉 In LangGraph:
 * - Nodes LLM ko call karte hain
 * - State mein prompt aur response store hota hai
 * 
 * ---------------------------------------------------------------
 * 
 * ! 3. PROMPT CHAINING WORKFLOW
 * ---------------------------------------------------------------
 * 👉 Definition:
 * Multiple LLM calls ko sequence mein connect karna
 * jahan ek ka output dusre ka input ban jata hai
 * 
 * 👉 Characteristics:
 * - Multi-step reasoning
 * - Better accuracy (break problem into steps)
 * - Structured AI pipelines
 * 
 * 👉 Example:
 * Step1: Question → generate summary  
 * Step2: Summary → generate answer  
 * Step3: Answer → refine response
 * 
 * 👉 Flow:
 * START → LLM1 → LLM2 → LLM3 → END
 * 
 * 👉 In LangGraph:
 * - Multiple nodes (each calling LLM)
 * - State continuously update hota hai
 * - Each node builds on previous output
 * 
 * ---------------------------------------------------------------
 * 
 * ! KEY DIFFERENCE (INTERVIEW GOLD)
 * ---------------------------------------------------------------
 * SIMPLE WORKFLOW:
 * 👉 No AI, pure logic
 * 
 * LLM WORKFLOW:
 * 👉 Single AI call
 * 
 * PROMPT CHAINING:
 * 👉 Multiple AI calls in sequence
 * 
 * ---------------------------------------------------------------
 * 
 * ! WHY IMPORTANT ?
 * ---------------------------------------------------------------
 * 👉 Real-world AI systems rarely use single LLM call
 * 👉 Complex tasks require chaining
 * 👉 Improves accuracy, control, and modularity
 * 
 * ===============================================================
 */