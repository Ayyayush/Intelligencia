/**
 * 📘 Retrievers Based on Retrieval Strategy
 *
 * Topic: Maximal Marginal Relevance (MMR)
 *
 * ------------------------------------------------------------
 * 🔹 Retrieval Strategy ka matlab kya hota hai?
 * ------------------------------------------------------------
 *
 * Retriever sirf documents nikaalne ka kaam nahi karta,
 * balki **kaise documents select kiye jaayenge**
 * ye bhi decide karta hai.
 *
 * Isi ko hum retrieval strategy bolte hain.
 *
 * ------------------------------------------------------------
 * 🔹 Problem with Normal Similarity Search
 * ------------------------------------------------------------
 *
 * Normal similarity search mein:
 * - Top-k sabse similar documents aa jaate hain
 *
 * Problem:
 * ❌ Kaafi documents meaning-wise almost same hote hain
 * ❌ Redundancy aa jaati hai
 * ❌ LLM ko repetitive context milta hai
 *
 * ------------------------------------------------------------
 * 🔹 Maximal Marginal Relevance (MMR) kya hai?
 * ------------------------------------------------------------
 *
 * MMR ek retrieval strategy hai jo ensure karti hai:
 *
 * 👉 High relevance bhi rahe
 * 👉 Aur redundancy kam ho
 *
 * Simple words mein:
 * MMR relevant + diverse documents select karta hai.
 *
 * ------------------------------------------------------------
 * 🔹 MMR ka main goal
 * ------------------------------------------------------------
 *
 * - Sabse pehle **most relevant document** pick karna
 * - Uske baad aise documents pick karna jo:
 *     ✔ Query se relevant ho
 *     ✔ Lekin pehle wale documents se different ho
 *
 * ------------------------------------------------------------
 * 🔹 MMR kaise kaam karta hai? (Step-by-Step)
 * ------------------------------------------------------------
 *
 * 1️⃣ Sabse pehle:
 *     - Query ke saath sabse zyada similar document pick hota hai
 *
 * 2️⃣ Uske baad:
 *     - Next document choose hota hai jo:
 *         - Query ke saath relevant ho
 *         - Already selected document se zyada similar na ho
 *
 * 3️⃣ Ye process repeat hota hai
 *     - Jab tak k documents select na ho jaaye
 *
 * ------------------------------------------------------------
 * 🔹 MMR ka intuition (Simple Formula)
 * ------------------------------------------------------------
 *
 * MMR score depend karta hai:
 *
 * - Query se relevance
 * - Already selected documents se similarity
 *
 * Matlab:
 * - Relevance ↑
 * - Redundancy ↓
 *
 * ------------------------------------------------------------
 * 🔹 RAG systems mein MMR kyun important hai?
 * ------------------------------------------------------------
 *
 * Without MMR:
 * - Same type ka context baar-baar aata hai
 * - Token waste hota hai
 * - Answer narrow ho sakta hai
 *
 * With MMR:
 * - Context diverse hota hai
 * - LLM ko broader information milti hai
 * - Final answer better aata hai
 *
 * ------------------------------------------------------------
 * 🔹 MMR kab use karein?
 * ------------------------------------------------------------
 *
 * ✔ Jab documents bahut similar ho
 * ✔ Jab diversity important ho
 * ✔ Jab RAG answers improve karne ho
 *
 * ------------------------------------------------------------
 * 🔹 Final Summary
 * ------------------------------------------------------------
 *
 * Maximal Marginal Relevance (MMR):
 * - Pehle sabse relevant document pick karta hai
 * - Phir relevant but different documents choose karta hai
 *
 * MMR = Relevance + Diversity
 *
 * Isi wajah se MMR
 * high-quality RAG pipelines mein kaafi use hota hai.
 *
 */