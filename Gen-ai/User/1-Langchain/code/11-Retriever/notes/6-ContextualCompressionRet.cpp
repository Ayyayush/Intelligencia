/**
 * 📘 Contextual Compression Retriever
 *
 * ------------------------------------------------------------
 * 🔹 Contextual Compression Retriever kya hota hai?
 * ------------------------------------------------------------
 *
 * Contextual Compression Retriever (CCR) ek special type ka retriever hai
 * jo retrieval quality ko improve karta hai.
 *
 * Ye kaam karta hai:
 * 👉 Documents retrieve hone ke BAAD
 * 👉 Un documents ko compress karke
 * 👉 Sirf query-relevant content hi retain karta hai
 *
 * Ye retriever
 * :contentReference[oaicite:1]{index=1}
 * mein available hai.
 *
 * ------------------------------------------------------------
 * 🔹 Problem jo ye solve karta hai
 * ------------------------------------------------------------
 *
 * Normal retriever kya karta hai?
 * - Poora document ya large chunk retrieve kar leta hai
 *
 * Problem:
 * ❌ Bahut zyada irrelevant text aa jata hai
 * ❌ Token waste hota hai
 * ❌ LLM confuse ho sakta hai
 *
 * ------------------------------------------------------------
 * 🔹 Example se samjho
 * ------------------------------------------------------------
 *
 * User Query:
 *   "What is photosynthesis?"
 *
 * Retrieved Document (Normal Retriever):
 *   - Plant biology introduction
 *   - Types of plants
 *   - Photosynthesis explanation
 *   - Cellular respiration
 *
 * Issue:
 * 👉 Sirf photosynthesis wala part chahiye
 * 👉 Baaki sab noise hai
 *
 * ------------------------------------------------------------
 * 🔹 Contextual Compression Retriever kya karta hai?
 * ------------------------------------------------------------
 *
 * CCR:
 * - Pehle documents retrieve karta hai
 * - Phir un documents ko compress karta hai
 * - Sirf wahi text rakhta hai
 *   jo user ki query se relevant ho
 *
 * ------------------------------------------------------------
 * 🔹 Kaise kaam karta hai? (Step-by-Step)
 * ------------------------------------------------------------
 *
 * 1️⃣ User query aati hai
 *
 * 2️⃣ Base retriever se documents retrieve hote hain
 *     (Vector Store Retriever / Wikipedia Retriever, etc.)
 *
 * 3️⃣ Retrieved documents ko
 *     ek compressor ke paas bheja jaata hai
 *
 * 4️⃣ Compressor (LLM ya rule-based):
 *     - Irrelevant text hata deta hai
 *     - Sirf query-related content rakhta hai
 *
 * 5️⃣ Compressed documents return hote hain
 *
 * Final Output:
 * 👉 Short, focused, query-specific documents
 *
 * ------------------------------------------------------------
 * 🔹 Contextual Compression ke Benefits
 * ------------------------------------------------------------
 *
 * ✔ Token usage kam hota hai
 * ✔ LLM ko clean context milta hai
 * ✔ Answer quality improve hoti hai
 * ✔ Large documents ke liye best
 *
 * ------------------------------------------------------------
 * 🔹 Iske saath Problems / Limitations
 * ------------------------------------------------------------
 *
 * ❌ Extra LLM call lagta hai (compression ke liye)
 * ❌ Cost increase ho sakta hai
 * ❌ Thoda latency badh jaata hai
 * ❌ Agar compressor galat kaam kare,
 *    toh important info remove ho sakti hai
 *
 * ------------------------------------------------------------
 * 🔹 Contextual Compression Retriever kab use karein?
 * ------------------------------------------------------------
 *
 * ✔ Jab documents bahut large ho
 * ✔ Jab token limit issue aa raha ho
 * ✔ Jab LLM ko highly focused context chahiye
 * ✔ Jab normal retriever noisy results de raha ho
 *
 * ❌ Jab documents already small ho
 * ❌ Jab cost / latency critical ho
 *
 * ------------------------------------------------------------
 * 🔹 Normal Retriever vs Contextual Compression Retriever
 * ------------------------------------------------------------
 *
 * Normal Retriever:
 * - Poora chunk return karta hai
 * - Zyada noise ho sakta hai
 *
 * Contextual Compression Retriever:
 * - Chunk ko compress karta hai
 * - Sirf relevant text return karta hai
 *
 * ------------------------------------------------------------
 * 🔹 Final Summary
 * ------------------------------------------------------------
 *
 * Contextual Compression Retriever:
 * - Retrieval ke BAAD documents ko clean karta hai
 * - Query-focused context provide karta hai
 * - RAG systems mein answer quality improve karta hai
 *
 * Ye retriever especially useful hai
 * jab documents bade aur noisy ho.
 *
 */