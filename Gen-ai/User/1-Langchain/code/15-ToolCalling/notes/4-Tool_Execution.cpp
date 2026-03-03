/**
 * ---------------------------------------------------------------
 * ! Tool Execution in LangChain
 * ---------------------------------------------------------------
 *
 * Tool Execution is the step where the actual Python function
 * is executed using the input arguments suggested by the LLM
 * during tool calling.
 *
 *
 * ---------------------------------------------------------------
 * ! In Simple Words
 * ---------------------------------------------------------------
 *
 * LLM says:
 * "Hey, call this tool with these arguments."
 *
 * But...
 *
 * LLM does NOT execute the tool itself.
 *
 * Instead:
 * 👉 LangChain (or your backend) reads the tool call
 * 👉 Executes the real Python function
 * 👉 Sends the result back to the LLM
 *
 *
 * ---------------------------------------------------------------
 * ! Important Understanding
 * ---------------------------------------------------------------
 *
 * Tool Calling = LLM suggests
 * Tool Execution = System executes
 *
 * LLM only generates structured JSON like:
 *
 * {
 *   "tool": "multiply",
 *   "arguments": {
 *       "a": 5,
 *       "b": 10
 *   }
 * }
 *
 * Then LangChain:
 * 1️⃣ Detects tool call
 * 2️⃣ Runs multiply(5, 10)
 * 3️⃣ Gets result → 50
 * 4️⃣ Sends 50 back to LLM
 * 5️⃣ LLM generates final answer:
 *    "The result of 5 multiplied by 10 is 50."
 *
 *
 * ---------------------------------------------------------------
 * ! Step-by-Step Flow
 * ---------------------------------------------------------------
 *
 * User Input
 *      ↓
 * LLM decides tool call
 *      ↓
 * LLM returns structured tool_call output
 *      ↓
 * LangChain executes Python function
 *      ↓
 * Tool result is sent back to LLM
 *      ↓
 * LLM generates final natural language response
 *
 *
 * ---------------------------------------------------------------
 * ! Very Important Concept
 * ---------------------------------------------------------------
 *
 * LLM = Brain (reasoning)
 * Tool = Hands (execution)
 * LangChain = Manager (orchestrator)
 *
 *
 * ---------------------------------------------------------------
 * ! Interview Ready Explanation
 * ---------------------------------------------------------------
 *
 * Tool execution refers to the orchestration layer invoking
 * the actual function based on the LLM's structured tool call output,
 * and then feeding the result back into the model to generate
 * a final response.
 *
 */