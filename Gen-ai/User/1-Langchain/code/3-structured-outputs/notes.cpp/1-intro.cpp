/**
 * 📘 GenAI Playlist – LangChain
 * Lecture-5 | Video-7 | CampusX
 * Topic: Structured Output
 *
 * ------------------------------------------------------------
 * 🔹 What is Structured Output?
 * ------------------------------------------------------------
 * In LangChain, structured output refers to the practice of
 * having Language Models (LLMs) return responses in a
 * well-defined data format such as JSON.
 *
 * This makes the model’s response:
 * - Easier to parse
 * - Easier to validate
 * - Easier to use programmatically
 *
 * ------------------------------------------------------------
 * 🔹 Unstructured vs Structured Output
 * ------------------------------------------------------------
 * Generally, LLMs like ChatGPT return responses in plain text.
 *
 * Example:
 * - Hum ek text prompt bhejte hain
 * - LLM text response generate karta hai
 *
 * Since this response is just raw text,
 * it is called **Unstructured Output**.
 *
 * But agar hum LLM se:
 * - JSON
 * - Dict
 * - Schema-based response
 *
 * nikal paayein, then that is called **Structured Output**.
 *
 * ------------------------------------------------------------
 * 🔹 Why do we need Structured Output?
 * ------------------------------------------------------------
 * Structured Output future mein bahut useful hota hai for:
 *
 * - Data Extraction
 * - API Building
 * - Agents
 * - Automation Pipelines
 * - Reliable downstream processing
 *
 * ------------------------------------------------------------
 * 🔹 Ways to Get Structured Output in LangChain
 * ------------------------------------------------------------
 * There are two major cases:
 *
 * 1️⃣ LLMs that CAN generate structured output
 *    - Such LLMs provide built-in support
 *    - LangChain provides a function:
 *      → with_structured_output()
 *
 * 2️⃣ LLMs that CANNOT generate structured output directly
 *    - For these, we use:
 *      → Output Parsers
 *
 * ------------------------------------------------------------
 * 🔹 Scope of This Video
 * ------------------------------------------------------------
 * This video mainly focuses on:
 * - LLMs that can generate structured output directly
 * - Usage of with_structured_output()
 *
 * ------------------------------------------------------------
 * 🔹 What’s Next?
 * ------------------------------------------------------------
 * In the next video, we will cover:
 * - Output Parsers
 * - How to handle unstructured LLM responses
 *
 */
