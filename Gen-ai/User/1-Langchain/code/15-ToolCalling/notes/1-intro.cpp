/**
 * ---------------------------------------------------------------
 * 📘 GenAI Playlist – LangChain
 * Lecture-17 | Video-19 | CampusX
 * Topic: 🔧 Tool Calling in LangChain
 * ---------------------------------------------------------------
 *
 * ! Summary of Last Lecture
 *
 * LLMs are good at reasoning.
 * Agar hum LLM ko sirf text generate karne dein,
 * toh woh ek smart chatbot hota hai.
 *
 * Lekin...
 *
 * Agar hum usse external tools use karne ki capability de dein
 * (jaise calculator, API call, database search),
 * toh woh ban jaata hai → 🤖 AGENT.
 *
 *
 * ---------------------------------------------------------------
 * ! What is Tool Calling?
 * ---------------------------------------------------------------
 *
 * Tool calling ka matlab hai:
 * LLM khud decide kare ki kab kisi external function ko call karna hai.
 *
 * Example:
 * User: "What's the weather in Delhi?"
 *
 * LLM:
 * 1. Recognizes that weather info is needed
 * 2. Decides to call "get_weather" tool
 * 3. Passes proper input in structured format
 * 4. Gets tool response
 * 5. Returns final answer to user
 *
 *
 * ---------------------------------------------------------------
 * ! Tool Binding (IMPORTANT CONCEPT)
 * ---------------------------------------------------------------
 *
 * Tool Binding is the step where:
 *
 * 1️⃣ You register tools with the LLM
 * 2️⃣ LLM learns:
 *     - What tools are available
 *     - What each tool does
 *     - What input format (schema) is required
 *
 *
 * 🔥 In simple words:
 * Tool binding = LLM ko bataana ki kaun-kaun se tools use kar sakta hai.
 *
 *
 * ---------------------------------------------------------------
 * ! Why Schema is Important?
 * ---------------------------------------------------------------
 *
 * Schema defines:
 * - Input parameters
 * - Data types
 * - Required fields
 *
 * Because LLM ko structured format me tool call karna hota hai.
 *
 * Agar schema clear nahi hoga,
 * toh LLM galat input bhej sakta hai.
 *
 *
 * ---------------------------------------------------------------
 * ! Flow of Tool Calling
 * ---------------------------------------------------------------
 *
 * User Input
 *     ↓
 * LLM Reasoning
 *     ↓
 * LLM decides tool call (structured JSON format)
 *     ↓
 * Tool executes
 *     ↓
 * Tool response back to LLM
 *     ↓
 * Final response to user
 *
 *
 * ---------------------------------------------------------------
 * ! Important Interview Line 🔥
 * ---------------------------------------------------------------
 *
 * "Tool binding allows an LLM to be aware of available external functions
 * and invoke them in a structured manner using schema-based input."
 *
 *
 * ---------------------------------------------------------------
 * ! Real World Use Cases
 * ---------------------------------------------------------------
 *
 * - Weather API calling
 * - Database query execution
 * - Calculator
 * - Sending emails
 * - Booking systems
 * - RAG retrieval tool
 *
 */