/**
 * ---------------------------------------------------------------
 * 📘 GenAI Playlist – LangChain
 * Topic: 🔧 ReAct Pattern in AI Agents
 * ---------------------------------------------------------------
 *
 *
 * ---------------------------------------------------------------
 * ! What is ReAct?
 * ---------------------------------------------------------------
 *
 * ReAct stands for:
 * 👉 Reasoning + Acting
 *
 * It is a design pattern used in AI agents where
 * the language model combines:
 *
 * ✔️ Internal reasoning (Thought)
 * ✔️ External actions (Tool usage)
 *
 * in a structured multi-step process.
 *
 *
 * ---------------------------------------------------------------
 * ! Core Idea
 * ---------------------------------------------------------------
 *
 * Instead of generating the final answer in one step,
 * the model:
 *
 * ✔️ Thinks step by step
 * ✔️ Takes actions (calls tools)
 * ✔️ Observes results
 * ✔️ Continues reasoning
 *
 *
 * ---------------------------------------------------------------
 * ! ReAct Loop (Very Important 🔥)
 * ---------------------------------------------------------------
 *
 * Thought → Action → Observation → Repeat → Final Answer
 *
 *
 * ---------------------------------------------------------------
 * ! Why ReAct is Powerful?
 * ---------------------------------------------------------------
 *
 * ✔️ Breaks complex problems into steps
 * ✔️ Uses external tools for accuracy
 * ✔️ Makes reasoning transparent (you can see thinking)
 * ✔️ Improves correctness of answers
 *
 *
 * ---------------------------------------------------------------
 * ! Transparency Advantage
 * ---------------------------------------------------------------
 *
 * We can clearly see:
 *
 * ✔️ What the agent is thinking
 * ✔️ Which tool it is using
 * ✔️ What result it got
 *
 * 👉 This makes debugging and trust much easier
 *
 *
 * ---------------------------------------------------------------
 * ! Origin (Research Insight)
 * ---------------------------------------------------------------
 *
 * ReAct was introduced in the paper:
 * "ReAct: Synergizing Reasoning and Acting in Language Models"
 *
 * 👉 It combines reasoning + action in a unified framework
 *
 *
 * ---------------------------------------------------------------
 * ! How ReAct Works (Architecture Understanding)
 * ---------------------------------------------------------------
 *
 * Step 1️⃣: User gives input
 * Step 2️⃣: LLM generates Thought
 * Step 3️⃣: LLM decides Action (tool)
 * Step 4️⃣: Tool executes
 * Step 5️⃣: Observation returned
 * Step 6️⃣: LLM continues reasoning
 * Step 7️⃣: Final Answer generated
 *
 *
 * ---------------------------------------------------------------
 * ! Example (Step-by-Step)
 * ---------------------------------------------------------------
 *
 * Thought: I need to find the capital of France.
 * Action: search_tool
 * Action Input: "capital of France"
 * Observation: Paris
 *
 * Thought: Now I need the population of Paris.
 * Action: search_tool
 * Action Input: "population of Paris"
 * Observation: 2.1 million
 *
 * Thought: I now know the final answer.
 * Final Answer: Paris is the capital of France and has a population of ~2.1 million.
 *
 *
 * ---------------------------------------------------------------
 * ! Interview Ready Definition 🔥
 * ---------------------------------------------------------------
 *
 * "ReAct is a framework that enables a language model to interleave
 * reasoning and action by generating thoughts, invoking tools,
 * observing results, and iterating until a final answer is produced."
 *
 */