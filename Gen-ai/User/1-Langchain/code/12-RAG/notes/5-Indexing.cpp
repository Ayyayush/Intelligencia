/**
 * 📘 RAG – Step 1: Indexing
 *
 * ------------------------------------------------------------
 * 🔹 Indexing kya hota hai?
 * ------------------------------------------------------------
 *
 * Indexing ka matlab hota hai:
 * 👉 Apne knowledge base ko aise prepare karna
 *    taki query time par efficiently search kiya ja sake.
 *
 * Simple words mein:
 * Raw Data ko searchable form mein convert karna.
 *
 * Ye step mostly preprocessing stage mein hota hai.
 *
 * ------------------------------------------------------------
 * 🔹 Indexing ke 4 Main Steps
 * ------------------------------------------------------------
 *
 * 1️⃣ Document Ingestion
 * 2️⃣ Text Chunking
 * 3️⃣ Embedding Generation
 * 4️⃣ Storage in Vector Store
 *
 * Ab inhe detail mein samjhte hain.
 *
 * ------------------------------------------------------------
 * 🔹 1️⃣ Document Ingestion
 * ------------------------------------------------------------
 *
 * Is step mein:
 * - Source knowledge collect karte hain
 *
 * Example sources:
 * - PDFs
 * - Text files
 * - Web pages
 * - Database records
 *
 * Simple:
 * External Data → System ke andar load karna
 *
 * ------------------------------------------------------------
 * 🔹 2️⃣ Text Chunking
 * ------------------------------------------------------------
 *
 * Large documents ko directly use nahi karte,
 * kyunki:
 *
 * ❌ Semantic search bahut bade documents par efficient nahi hota
 * ❌ Token limit issues aa sakte hain
 *
 * Isliye:
 * - Documents ko chhote-chhote chunks mein split karte hain
 *
 * Example:
 * 100-page PDF → 300–500 word ke chunks
 *
 * Benefit:
 * ✔ Better semantic matching
 * ✔ More precise retrieval
 *
 * ------------------------------------------------------------
 * 🔹 3️⃣ Embedding Generation
 * ------------------------------------------------------------
 *
 * Is step mein:
 * - Har chunk ke liye embedding generate karte hain
 *
 * Embedding kya hota hai?
 * - Ek dense numerical vector
 * - Jo text ka meaning capture karta hai
 *
 * Process:
 * Text Chunk → Embedding Model → Dense Vector
 *
 * ------------------------------------------------------------
 * 🔹 Embeddings kyun zaroori hain?
 * ------------------------------------------------------------
 *
 * ✔ Similar ideas vector space mein paas-pass aa jaate hain
 * ✔ Fast semantic search possible hota hai
 *
 * Example:
 * "How to stay healthy"
 * aur
 * "Tips for good health"
 *
 * Inke embeddings vector space mein close honge.
 *
 * Result:
 * Har chunk ke against ek dense vector generate ho jaata hai.
 *
 * ------------------------------------------------------------
 * 🔹 4️⃣ Storage in Vector Store
 * ------------------------------------------------------------
 *
 * Ab:
 * - Generated vectors
 * - Original chunk text
 * - Metadata (source, page number, etc.)
 *
 * Sab ko ek Vector Database mein store kar dete hain.
 *
 * Example:
 * - Chroma
 * - FAISS
 * - Pinecone
 *
 * ------------------------------------------------------------
 * 🔹 Indexing ke baad kya hota hai?
 * ------------------------------------------------------------
 *
 * Ab:
 * - Vector Store ke andar
 *   saare chunks + unke embeddings store ho chuke hain
 *
 * Is vector store ko hum:
 * 👉 External Knowledge Base ke tarah use kar sakte hain
 *
 * ------------------------------------------------------------
 * 🔹 RAG Architecture ke context mein
 * ------------------------------------------------------------
 *
 * Jo RAG ka overall diagram tha:
 *
 * Data → Indexing → Retrieval → Augmentation → Generation
 *
 * 👉 Ab tak humne sirf first step (Indexing) complete kiya hai.
 *
 * Next:
 * 👉 Retrieval step detail mein samjhenge.
 *
 * ------------------------------------------------------------
 * 🔹 Final Summary
 * ------------------------------------------------------------
 *
 * Indexing = Data ko searchable banana
 *
 * Steps:
 * 1. Ingest documents
 * 2. Split into chunks
 * 3. Generate embeddings
 * 4. Store in vector database
 *
 * Ye RAG system ki foundation hoti hai.
 *
 */