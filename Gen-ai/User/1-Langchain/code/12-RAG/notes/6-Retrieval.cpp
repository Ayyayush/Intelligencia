/**
 * 📘 RAG – Step 2: Retrieval
 *
 * ------------------------------------------------------------
 * 🔹 Retrieval kya hota hai?
 * ------------------------------------------------------------
 *
 * Retrieval real-time process hota hai
 * jisme:
 *
 * 👉 User ki query ke basis par
 * 👉 Pre-built index (jo indexing mein bana tha)
 * 👉 Se most relevant information find ki jaati hai
 *
 * Simple:
 * Query → Relevant Context
 *
 * ------------------------------------------------------------
 * 🔹 Example se samjho
 * ------------------------------------------------------------
 *
 * User ne poocha:
 * "What are the best steps for gradient descent?"
 *
 * Ab system ko:
 * - Knowledge base mein se
 * - Gradient descent se related
 * - Sabse relevant chunks nikaalne hain
 *
 * ------------------------------------------------------------
 * 🔹 Retrieval ka Step-by-Step Flow
 * ------------------------------------------------------------
 *
 * 1️⃣ Query ko Embedding mein convert karna
 *
 * - User query ko embedding model se pass karte hain
 * - Query ka bhi ek dense vector ban jaata hai
 *
 * Query → Embedding Vector
 *
 * ------------------------------------------------------------
 *
 * 2️⃣ Similarity Search
 *
 * - Ab query vector ko
 * - Vector database ke andar stored embeddings se compare karte hain
 *
 * Hum check karte hain:
 * 👉 Kaunsa stored vector
 *    query vector ke sabse paas hai (vector space mein)
 *
 * Metrics:
 * - Cosine similarity
 * - Dot product
 *
 * ------------------------------------------------------------
 *
 * 3️⃣ Ranking
 *
 * - Similarity score ke basis par
 *   documents ko rank kiya jaata hai
 *
 * Highest similarity → Top rank
 *
 * ------------------------------------------------------------
 *
 * 4️⃣ Top Results Fetch karna
 *
 * - Top-k most relevant chunks select kar liye jaate hain
 *
 * Ye jo selected chunks hote hain:
 * 👉 Isi ko hum "Context" bolte hain
 *
 * ------------------------------------------------------------
 * 🔹 Important Point
 * ------------------------------------------------------------
 *
 * Retrieval sirf:
 * - Information find karta hai
 * - Answer generate nahi karta
 *
 * Generation ka kaam baad mein LLM karega.
 *
 * ------------------------------------------------------------
 * 🔹 Retrieval ka Simple Flow
 * ------------------------------------------------------------
 *
 * User Query
 *      ↓
 * Query Embedding
 *      ↓
 * Vector Similarity Search
 *      ↓
 * Ranking
 *      ↓
 * Top-k Relevant Chunks (Context)
 *
 * ------------------------------------------------------------
 * 🔹 Real-World Analogy
 * ------------------------------------------------------------
 *
 * Socho:
 * - Library mein lakho books hain
 * - Aap ek question poochte ho
 *
 * Retrieval system:
 * - Poora answer nahi deta
 * - Sirf relevant pages nikaal ke deta hai
 *
 * ------------------------------------------------------------
 * 🔹 Final Summary
 * ------------------------------------------------------------
 *
 * Retrieval = Real-time relevant information nikaalna
 *
 * Steps:
 * 1. Query → Embedding
 * 2. Similarity Search
 * 3. Ranking
 * 4. Top-k Context fetch
 *
 * Ab next step hoga:
 * 👉 Augmentation (Prompt ke andar context inject karna)
 *
 */