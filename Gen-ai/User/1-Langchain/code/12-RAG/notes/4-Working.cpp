/**
 * 📘 Understanding Working of RAG
 *
 * ------------------------------------------------------------
 * 🔹 RAG kya hai?
 * ------------------------------------------------------------
 *
 * RAG = Retrieval Augmented Generation
 *
 * Simple words mein:
 * 👉 RAG ek marriage hai
 *    Information Retrieval + Text Generation ka
 *
 * Matlab:
 * - Pehle relevant information retrieve karenge
 * - Phir us information ke basis par answer generate karenge
 *
 * ------------------------------------------------------------
 * 🔹 RAG System ka Overall Flow
 * ------------------------------------------------------------
 *
 * Hum RAG-based system ko generally 4 steps mein banate hain:
 *
 * 1️⃣ Indexing
 * 2️⃣ Retrieval
 * 3️⃣ Augmentation
 * 4️⃣ Generation
 *
 * Ab inhe short aur clear Hinglish mein samjhte hain.
 *
 * ------------------------------------------------------------
 * 🔹 1️⃣ Indexing
 * ------------------------------------------------------------
 *
 * Ye preprocessing step hota hai.
 *
 * Isme:
 * - Documents collect karte hain (PDF, text, DB, etc.)
 * - Unko chhote chunks mein split karte hain
 * - Har chunk ka embedding banate hain
 * - Aur embeddings ko vector database mein store kar dete hain
 *
 * Simple:
 * Raw Data → Chunking → Embeddings → Vector Store
 *
 * Ye step sirf ek baar karna hota hai
 * (jab tak data change na ho).
 *
 * ------------------------------------------------------------
 * 🔹 2️⃣ Retrieval
 * ------------------------------------------------------------
 *
 * Jab user query aati hai:
 *
 * - Query ka bhi embedding banaya jaata hai
 * - Vector store mein similarity search hoti hai
 * - Top-k relevant documents retrieve kiye jaate hain
 *
 * Matlab:
 * Query → Embedding → Similarity Search → Relevant Docs
 *
 * ------------------------------------------------------------
 * 🔹 3️⃣ Augmentation
 * ------------------------------------------------------------
 *
 * Is step mein:
 * - Retrieved documents ko
 * - User ke original query ke saath
 * - Prompt ke andar inject kar diya jaata hai
 *
 * Example prompt structure:
 *
 * "Answer the question using the given context"
 * Context: [Retrieved docs]
 * Question: [User query]
 *
 * Ye hi "augmentation" hai
 * — prompt ko extra knowledge se enrich karna.
 *
 * ------------------------------------------------------------
 * 🔹 4️⃣ Generation
 * ------------------------------------------------------------
 *
 * Ab final step mein:
 * - LLM ko augmented prompt diya jaata hai
 * - LLM context ke basis par final answer generate karta hai
 *
 * Is stage mein:
 * - Hallucination kam hoti hai
 * - Answer zyada grounded hota hai
 *
 * ------------------------------------------------------------
 * 🔹 Complete Flow Ek Line Mein
 * ------------------------------------------------------------
 *
 * Data → Indexing → Retrieval → Augmentation → Generation → Response
 *
 * ------------------------------------------------------------
 * 🔹 RAG ka Biggest Advantage
 * ------------------------------------------------------------
 *
 * ✔ Model retrain nahi karna padta
 * ✔ Latest data use kar sakte hain
 * ✔ Private documents use kar sakte hain
 * ✔ Hallucination reduce hoti hai
 *
 * ------------------------------------------------------------
 * 🔹 Final Summary
 * ------------------------------------------------------------
 *
 * RAG ka working 4 simple steps mein samajh aata hai:
 *
 * 1. Indexing  → Data prepare karna
 * 2. Retrieval → Relevant info nikaalna
 * 3. Augmentation → Prompt mein context add karna
 * 4. Generation → Final answer banana
 *
 * Isi architecture ki wajah se
 * RAG modern GenAI systems ka backbone ban chuka hai.
 *
 */