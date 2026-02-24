/**
 * 📘 Multi-Query Retriever
 *
 * ------------------------------------------------------------
 * 🔹 Problem Statement
 * ------------------------------------------------------------
 *
 * Kabhi-kabhi ek single query
 * documents mein jo information hai
 * uske sab possible expressions ko capture nahi kar pati.
 *
 * Example:
 *
 * Query:
 *   "How can I stay healthy?"
 *
 * Ye query ambiguous hai.
 *
 * Iska matlab ho sakta hai:
 *   - How often should I exercise?
 *   - How can I manage stress?
 *   - What should I eat?
 *   - How much sleep is required?
 *
 * ------------------------------------------------------------
 * 🔹 Problem with Simple Similarity Search
 * ------------------------------------------------------------
 *
 * Simple vector similarity search:
 *
 * - Sirf query ke semantic embedding ke basis par
 *   documents retrieve karega.
 *
 * Issue:
 * Agar document mein "exercise" likha ho
 * lekin "healthy" word use na ho,
 * toh ho sakta hai wo document miss ho jaaye.
 *
 * Matlab:
 * ❌ Important documents skip ho sakte hain
 * ❌ Recall kam ho sakta hai
 *
 * ------------------------------------------------------------
 * 🔹 Multi-Query Retriever kya karta hai?
 * ------------------------------------------------------------
 *
 * Multi-Query Retriever ka idea simple hai:
 *
 * 👉 Ek single user query ko
 *    multiple related queries mein convert karna
 *
 * Ye kaam LLM karta hai.
 *
 * ------------------------------------------------------------
 * 🔹 Kaise kaam karta hai? (Step-by-Step)
 * ------------------------------------------------------------
 *
 * 1️⃣ User ek query bhejta hai
 *     Example:
 *     "How can I stay healthy?"
 *
 * 2️⃣ Ye query LLM ke paas bheji jaati hai
 *
 * 3️⃣ LLM us query ke multiple variations generate karta hai:
 *     - How often should I exercise?
 *     - How to maintain good mental health?
 *     - Best diet practices?
 *     - Stress management techniques?
 *
 * 4️⃣ Har generated query par
 *     alag-alag similarity search run hota hai
 *
 * 5️⃣ Sabhi results ko combine kiya jaata hai
 *     (duplicates remove karke)
 *
 * Final Output:
 * 👉 Broader aur zyada relevant document set
 *
 * ------------------------------------------------------------
 * 🔹 Iska Benefit kya hai?
 * ------------------------------------------------------------
 *
 * ✔ Better recall (kam documents miss honge)
 * ✔ Ambiguous queries handle kar sakta hai
 * ✔ Broader context milta hai LLM ko
 *
 * ------------------------------------------------------------
 * 🔹 Multi-Query Retriever kab use karein?
 * ------------------------------------------------------------
 *
 * ✔ Jab user queries ambiguous ho
 * ✔ Jab dataset mein terminology different ho
 * ✔ Jab high recall chahiye ho
 *
 * ------------------------------------------------------------
 * 🔹 Normal Retriever vs Multi-Query Retriever
 * ------------------------------------------------------------
 *
 * Normal Retriever:
 *   - Single query → Single embedding → Top-k docs
 *
 * Multi-Query Retriever:
 *   - Single query → Multiple generated queries
 *   - Har query par search
 *   - Combined diverse results
 *
 * 
 * ------------------------------------------------------------
 * 🔹 Final Summary
 * ------------------------------------------------------------
 *
 * Multi-Query Retriever:
 * - LLM ka use karke query ko expand karta hai
 * - Multiple perspectives se search karta hai
 * - Better document coverage deta hai
 *
 * Ye especially useful hai
 * jab user query unclear ya broad ho.
 *
 */