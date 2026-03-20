/**
 * ---------------------------------------------------------------
 * 📘 GenAI Playlist – LangChain
 * Lecture-18 | Video-20 | CampusX
 * Topic: 🔧 AI Agents in LangChain
 * ---------------------------------------------------------------
 *
 *
 * ---------------------------------------------------------------
 * ! What Problem Do AI Agents Solve?
 * ---------------------------------------------------------------
 *
 * AI Agents are designed to solve complex, multi-step problems
 * that cannot be handled by a single LLM response.
 *
 *
 * Example:
 * "Plan a trip to Manali"
 *
 * This is NOT a single task.
 *
 * It involves multiple sub-tasks:
 *
 * 1️⃣ Find best travel options (flights/trains)
 * 2️⃣ Check hotel availability
 * 3️⃣ Suggest itinerary
 * 4️⃣ Estimate cost
 * 5️⃣ Check weather conditions
 *
 *
 * ---------------------------------------------------------------
 * ! Without Agent
 * ---------------------------------------------------------------
 *
 * User has to:
 * ❌ Manually perform each step
 * ❌ Use different apps/websites
 * ❌ Combine results manually
 *
 *
 * ---------------------------------------------------------------
 * ! With AI Agent
 * ---------------------------------------------------------------
 *
 * Agent can:
 *
 * ✔️ Break problem into smaller steps
 * ✔️ Decide which tool to use
 * ✔️ Call tools (APIs, DB, functions)
 * ✔️ Use previous results
 * ✔️ Iterate until task is complete
 *
 *
 * ---------------------------------------------------------------
 * ! Step-by-Step Flow of an Agent
 * ---------------------------------------------------------------
 *
 * User Input:
 * "Plan a trip to Manali"
 *
 * Agent Loop:
 *
 * 1️⃣ Understand goal
 * 2️⃣ Think (reasoning step)
 * 3️⃣ Decide action (which tool to use)
 * 4️⃣ Call tool
 * 5️⃣ Observe result
 * 6️⃣ Repeat until goal is achieved
 *
 *
 * ---------------------------------------------------------------
 * ! Core Components of an Agent
 * ---------------------------------------------------------------
 *
 * 1️⃣ LLM (Brain)
 *     - Reasoning
 *     - Decision making
 *
 * 2️⃣ Tools (Actions)
 *     - APIs
 *     - Functions
 *     - Database queries
 *
 * 3️⃣ Memory (Optional)
 *     - Stores past context
 *
 * 4️⃣ Orchestrator (LangChain)
 *     - Controls loop
 *     - Executes tools
 *
 *
 * ---------------------------------------------------------------
 * ! Key Idea 🔥
 * ---------------------------------------------------------------
 *
 * Agent = LLM + Tools + Reasoning Loop
 *
 *
 * ---------------------------------------------------------------
 * ! Difference from Tool Calling
 * ---------------------------------------------------------------
 *
 * Tool Calling:
 * ❌ One-step decision (single tool call)
 *
 * Agent:
 * ✔️ Multi-step reasoning
 * ✔️ Iterative loop
 * ✔️ Multiple tool calls until task is complete
 *
 *
 * ---------------------------------------------------------------
 * ! Difference Between LLM and Agent
 * ---------------------------------------------------------------
 *
 * 🔹 LLM (Large Language Model)
 *
 * - Only generates text based on input
 * - Works in a single step
 * - No real-world interaction
 * - No execution capability
 *
 * Example:
 * Input: "What is 5 * 10?"
 * Output: "50"
 *
 * 👉 It only THINKS and RESPONDS
 *
 *
 * ---------------------------------------------------------------
 * 🔹 AI Agent
 * ---------------------------------------------------------------
 *
 * - Combination of:
 *      ✔️ LLM (brain)
 *      ✔️ Tools (hands)
 *      ✔️ Reasoning loop (decision making)
 *
 * - Can:
 *      ✔️ Break problems into steps
 *      ✔️ Decide actions
 *      ✔️ Call tools (APIs/functions)
 *      ✔️ Use results and continue
 *
 * 👉 It THINKS + ACTS + OBSERVES + REPEATS
 *
 *
 * ---------------------------------------------------------------
 * ! Simple Analogy 🔥
 * ---------------------------------------------------------------
 *
 * LLM = Brain 🧠
 * Agent = Human (Brain + Hands + Actions) 🧠✋
 *
 *
 * ---------------------------------------------------------------
 * ! Key Insight
 * ---------------------------------------------------------------
 *
 * LLM without tools:
 * ❌ Can only talk
 *
 * Agent with tools:
 * ✔️ Can perform real-world tasks
 *
 *
 * ---------------------------------------------------------------
 * ! Example Comparison
 * ---------------------------------------------------------------
 *
 * Task: "Find weather in Delhi and suggest clothes"
 *
 * LLM:
 * ❌ Gives generic/static answer (no real-time data)
 *
 * Agent:
 * ✔️ Calls weather API
 * ✔️ Gets real-time data
 * ✔️ Suggests accurate clothing
 *
 *
 * ---------------------------------------------------------------
 * ! Characteristics of AI Agents
 * ---------------------------------------------------------------
 *
 * ✔️ Goal-driven
 *     - Works towards a specific objective
 *
 * ✔️ Autonomous planning
 *     - Breaks tasks into steps automatically
 *
 * ✔️ Tool usage
 *     - Uses external APIs, DBs, functions
 *
 * ✔️ Context-aware
 *     - Remembers previous steps/results
 *
 * ✔️ Adaptive
 *     - Adjusts actions based on new information
 *
 *
 * ---------------------------------------------------------------
 * ! Interview Ready Definition 🔥
 * ---------------------------------------------------------------
 *
 * "An AI agent is a system that combines a language model with
 * external tools and an iterative reasoning loop to autonomously
 * plan and execute multi-step tasks."
 *
 */