/**
 * 📘 Vector Store Based Retriever
 *
 * ------------------------------------------------------------
 * 🔹 Vector Store Based Retriever kya hota hai?
 * ------------------------------------------------------------
 *
 * Vector Store Based Retriever sabse COMMON type ka retriever hota hai
 * jo RAG systems mein use hota hai.
 *
 * Iska kaam hota hai:
 * - Documents ko search karna
 * - Relevant documents ko fetch karna
 *
 * aur ye sab hota hai:
 * 👉 Vector Store se
 * 👉 Semantic similarity ke basis par
 * 👉 Embeddings ka use karke
 *
 * ------------------------------------------------------------
 * 🔹 Core Idea (Main Concept)
 * ------------------------------------------------------------
 *
 * Keyword matching ❌
 * Matlab sirf words match karna
 *
 * Semantic meaning matching ✅
 * Matlab text ka actual meaning match karna
 *
 * Flow:
 * Text → Embeddings → Vector Similarity → Relevant Documents
 *
 * ------------------------------------------------------------
 * 🔹 Vector Store Based Retriever kaise kaam karta hai?
 * ------------------------------------------------------------
 *
 * 1️⃣ Document Ingestion
 *     - Pehle documents load kiye jaate hain
 *       (PDFs, text files, web pages, etc.)
 *     - Large text ko chhote-chhote chunks mein tod diya jaata hai
 *
 * 2️⃣ Embedding Generation
 *     - Har text chunk ko ek numerical vector mein convert kiya jaata hai
 *     - Ye kaam embedding models karte hain
 *       (OpenAI / HuggingFace, etc.)
 *
 * 3️⃣ Vector Storage
 *     - Ye vectors + unka metadata
 *       vector database mein store kiya jaata hai
 *       (jaise Chroma, FAISS, Pinecone, etc.)
 *
 * 4️⃣ Query Processing
 *     - User jo query deta hai
 *     - Us query ko bhi embedding vector mein convert kiya jaata hai
 *
 * 5️⃣ Similarity Search
 *     - Query vector ko stored vectors ke saath compare kiya jaata hai
 *     - Cosine similarity / dot product jaise metrics use hote hain
 *
 * 6️⃣ Document Retrieval
 *     - Top-k sabse similar documents nikaal liye jaate hain
 *     - Output hota hai: List of Document objects
 *
 * ------------------------------------------------------------
 * 🔹 Ye sabse zyada use hone wala retriever kyun hai?
 * ------------------------------------------------------------
 *
 * - Meaning ke basis par kaam karta hai, sirf keywords par nahi
 * - Synonyms aur context ko samajh paata hai
 * - Large datasets ke saath achha scale karta hai
 * - Almost har production-level RAG system ka backbone hai
 *
 * ------------------------------------------------------------
 * 🔹 Isme kaun-kaun se components involved hote hain?
 * ------------------------------------------------------------
 *
 * - Embedding Model
 * - Vector Store / Vector Database
 * - Similarity Metric
 * - Retriever Interface (LangChain ka)
 *
 * ------------------------------------------------------------
 * 🔹 Commonly use hone wale Vector Stores
 * ------------------------------------------------------------
 *
 * - Chroma
 * - FAISS
 * - Pinecone
 * - Weaviate
 * - Milvus
 *
 * ------------------------------------------------------------
 * 🔹 Vector Store Based Retriever kab use karein?
 * ------------------------------------------------------------
 *
 * ✔ Jab aapke paas private documents ho
 * ✔ Company ka internal knowledge base ho
 * ✔ PDFs, blogs, research papers ho
 * ✔ High-quality RAG responses chahiye
 *
 * ------------------------------------------------------------
 * 🔹 Vector Store Retriever vs Wikipedia Retriever
 * ------------------------------------------------------------
 *
 * Vector Store Retriever:
 * - Semantic (embedding-based) hota hai
 * - Custom / private data ke saath kaam karta hai
 * - Preprocessing required hoti hai
 *
 * Wikipedia Retriever:
 * - Keyword-based hota hai
 * - Public Wikipedia data use karta hai
 * - Embeddings ki zarurat nahi hoti
 *
 * ------------------------------------------------------------
 * 🔹 Final Summary
 * ------------------------------------------------------------
 *
 * Vector Store Based Retriever:
 * - RAG systems ka heart hota hai
 * - Semantic search ke liye essential hai
 * - Real-world GenAI applications mein almost har jagah use hota hai
 *
 */