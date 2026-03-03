/**
 * ---------------------------------------------------------------
 * ! Tool Calling in LangChain
 * ---------------------------------------------------------------
 *
 * Tool Calling is the process where the LLM (Large Language Model)
 * decides during a conversation or task that it needs to use
 * a specific external tool (function).
 *
 * Instead of directly answering,
 * the LLM generates a structured output containing:
 *
 * 1️⃣ Tool name
 * 2️⃣ Arguments required to call that tool
 *
 *
 * ---------------------------------------------------------------
 * ! VERY IMPORTANT POINT ⚠️
 * ---------------------------------------------------------------
 *
 * Tool calling ka matlab ye nahi hai ki LLM khud tool execute kar raha hai.
 *
 * 🔥 LLM only SUGGESTS the tool call.
 *
 * Actual execution is handled by:
 * - LangChain
 * - Your backend code
 * - Agent executor
 *
 *
 * ---------------------------------------------------------------
 * ! Simple Flow
 * ---------------------------------------------------------------
 *
 * User: "What is 25 * 67?"
 *
 * LLM thinks:
 * → This requires calculation
 * → I should call calculator tool
 *
 * LLM outputs:
 *
 * {
 *   "tool": "calculator",
 *   "arguments": {
 *       "a": 25,
 *       "b": 67
 *   }
 * }
 *
 * Then:
 * 1️⃣ LangChain reads this structured output
 * 2️⃣ Executes calculator function
 * 3️⃣ Sends result back to LLM
 * 4️⃣ LLM gives final natural language answer
 *
 *
 * ---------------------------------------------------------------
 * ! Key Understanding
 * ---------------------------------------------------------------
 *
 * LLM = Brain (reasoning)
 * Tool = Hands (action)
 *
 * Without tools → LLM can only talk.
 * With tools → LLM can perform actions.
 *
 *
 * ---------------------------------------------------------------
 * ! Technical Explanation (Interview Ready)
 * ---------------------------------------------------------------
 *
 * Tool calling allows a language model to produce structured,
 * schema-compliant outputs that specify which external function
 * should be invoked and with what arguments.
 *
 * The orchestration layer (e.g., LangChain) is responsible
 * for executing the tool and returning the result to the model.
 *
 *
 * ---------------------------------------------------------------
 * ! Why Tool Calling is Powerful?
 * ---------------------------------------------------------------
 *
 * - Enables real-world interaction
 * - Allows API integrations
 * - Makes automation possible
 * - Converts LLM into an intelligent agent
 *
 */