/**
 * =========================================================
 * PART 2: TYPES OF OUTPUT PARSERS
 * =========================================================
 *
 * LangChain mein bahut types ke output parsers hote hain,
 * lekin hum mainly 4 padhte hain:
 *
 * 1️⃣ String Output Parser
 * 2️⃣ JSON Output Parser
 * 3️⃣ Structured Output Parser (Deprecated)
 * 4️⃣ Pydantic Output Parser
 *
 * ---------------------------------------------------------
 * 1️⃣ String Output Parser (StrOutputParser)
 * ---------------------------------------------------------
 *
 * 🔹 Kya karta hai?
 * - LLM ke response ko plain string mein convert karta hai
 *
 * By default LLM output hota hai:
 *    AIMessage { content: "..." }
 *
 * Par hume chahiye:
 *    "sirf actual text"
 *
 * Isliye hum use karte hain:
 *    StrOutputParser
 *
 * 🔹 Important Note:
 * - Hum aksar result.content use karte hain
 * - Taaki sirf clean output mile
 *
 * ✅ Advantages:
 * - Simple
 * - Fast
 * - No formatting issues
 *
 * ❌ Disadvantages:
 * - No structure
 * - No validation
 * - APIs ke liye suitable nahi
 *
 * ---------------------------------------------------------
 * 2️⃣ JSON Output Parser (JsonOutputParser)
 * ---------------------------------------------------------
 *
 * 🔹 Kya karta hai?
 * - Output ko valid JSON format mein convert karta hai
 *
 * 🔹 Use cases:
 * - APIs
 * - Frontend data
 * - Key-value based responses
 *
 * 🔹 Important:
 * - LLM ko strictly bolna padta hai:
 *   "ONLY return valid JSON"
 *
 * ✅ Advantages:
 * - Structured output
 * - Easy to parse
 * - Language independent
 *
 * ❌ Disadvantages:
 * - Kabhi-kabhi LLM JSON tod deta hai
 * - Validation weak hoti hai
 *
 * ---------------------------------------------------------
 * 3️⃣ Structured Output Parser (⚠️ Deprecated)
 * ---------------------------------------------------------
 *
 * 🔹 Kya karta tha?
 * - Named fields ke saath structured output deta tha
 *
 * ❌ Problem:
 * - New LangChain versions mein remove ho chuka hai
 * - Deprecated hai
 * - Production ke liye recommended nahi
 *
 * 👉 Isko replace kar diya gaya hai by:
 *    PydanticOutputParser
 *
 * ---------------------------------------------------------
 * 4️⃣ Pydantic Output Parser (⭐ MOST IMPORTANT)
 * ---------------------------------------------------------
 *
 * 🔹 Kya karta hai?
 * - Output ko Pydantic model ke according parse karta hai
 *
 * 🔹 Pydantic kya deta hai?
 * - Type safety
 * - Validation
 * - Strong schema enforcement
 *
 * 🔹 Example schema:
 *
 *    class Facts {
 *       fact_1: string
 *       fact_2: string
 *       fact_3: string
 *    }
 *
 * ✅ Advantages:
 * - Production ready
 * - Strong validation
 * - Clean & maintainable
 * - Errors automatically detect ho jaate hain
 *
 * ❌ Disadvantages:
 * - Thoda extra code
 * - Schema likhna padta hai
 *
 * ---------------------------------------------------------
 * 🔹 FINAL COMPARISON
 * ---------------------------------------------------------
 *
 * | Parser                 | Structure | Validation | Production |
 * |------------------------|-----------|------------|------------|
 * | StrOutputParser        | ❌        | ❌         | ❌         |
 * | JsonOutputParser       | ✅        | ⚠️ Weak    | ⚠️         |
 * | StructuredOutputParser | ❌ Deprecated | ❌   | ❌         |
 * | PydanticOutputParser   | ✅        | ✅ Strong  | ✅ ⭐      |
 *
 * ---------------------------------------------------------
 * 🔹 FINAL TAKEAWAY
 * ---------------------------------------------------------
 *
 * 👉 Agar LLM structured output support karta hai:
 *      use with_structured_output()
 *
 * 👉 Agar LLM support nahi karta:
 *      use Output Parsers
 *
 * 👉 Production systems ke liye:
 *      ALWAYS use PydanticOutputParser
 *
 * =========================================================
 * END OF NOTES
 * =========================================================
 */