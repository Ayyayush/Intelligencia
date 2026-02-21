/**
 * 📘 GenAI Playlist – LangChain
 * Lecture-12 | Video-14 | CampusX
 * Topic: RAG Components | 3️⃣ Vector Stores
 *
 * ------------------------------------------------------------
 * 🔹 Problem Statement (Recap)
 * ------------------------------------------------------------
 *
 * We want to solve the problem of semantic similarity.
 *
 * Example:
 * - Given a query (text / image / audio)
 * - Find the most similar items from a large dataset
 *
 * Keyword-based search fails here.
 * We need meaning-based (semantic) search.
 *
 * This is where Vector Stores come in.
 *
 * 
 * 
 * 
 * ------------------------------------------------------------
 * !🔹 What is a Vector Store?
 * ------------------------------------------------------------
 *
 * A Vector Store is a system designed to:
 *
 * 👉 Store data represented as numerical vectors (embeddings)
 * 👉 Efficiently retrieve similar vectors using similarity search
 *
 * These vectors usually come from:
 * - Text embeddings
 * - Image embeddings
 * - Audio embeddings
 *
 * 
 * 
 * 
 * ------------------------------------------------------------
 * 🔹 Key Features of Vector Stores
 * ------------------------------------------------------------
 *
 * 1️⃣ Vector Storage
 *    - Stores high-dimensional embedding vectors
 *
 * 2️⃣ Memory Management
 *    Vector stores usually provide two storage options:
 *
 *    a) In-Memory Storage
 *       - Very fast
 *       - Data lost on restart
 *       - Used for small-scale or experimentation
 *
 *    b) On-Disk Storage
 *       - Persistent storage
 *       - Slightly slower than memory
 *       - Used in production systems
 *
 * 
 * 
 * 
 * 
 * ------------------------------------------------------------
 * 🔹 Associated Metadata
 * ------------------------------------------------------------
 *
 * Along with vectors, vector stores also store metadata.
 *
 * Metadata = Extra information about the vector
 *
 * Example:
 * {
 *   "movie_name": "Taare Zameen Par",
 *   "genre": "Drama",
 *   "year": 2007
 * }
 *
 * ❗ Important:
 * - Metadata is NOT converted into vectors
 * - It is stored alongside vectors
 * - Used for filtering and context retrieval
 *
 * ------------------------------------------------------------
 * 🔹 Similarity Search
 * ------------------------------------------------------------
 *
 * Vector stores support similarity search such as:
 *
 * - Cosine Similarity
 * - Dot Product
 * - Euclidean Distance
 *
 * Goal:
 * 👉 Find vectors that are closest to the query vector
 *
 * ------------------------------------------------------------
 * 🔹 CRUD Operations
 * ------------------------------------------------------------
 *
 * Vector stores support basic operations:
 *
 * - Create   → Insert vectors
 * - Read     → Retrieve vectors
 * - Update   → Modify vectors or metadata
 * - Delete   → Remove vectors
 *
 * ------------------------------------------------------------
 * 🔹 Why Indexing is Needed?
 * ------------------------------------------------------------
 *
 * Suppose:
 * - We have 10 lakh (1,000,000) vectors
 * - We want to find similarity with a query vector
 *
 * ❌ Naive Approach:
 * - Compare query vector with all vectors
 * - Linear search (O(N))
 * - Very slow and inefficient
 *
 * ------------------------------------------------------------
 * 🔹 Indexing (Core Optimization)
 * ------------------------------------------------------------
 *
 * To solve this, vector stores use indexing techniques.
 *
 * Idea:
 * - Organize vectors into clusters
 *
 * Example:
 * - 10 lakh vectors
 * - Divide into 10 clusters
 * - Each cluster has ~1 lakh vectors
 *
 * For each cluster:
 * - Compute a centroid vector
 *
 * Query Flow:
 * 1️⃣ New query vector comes
 * 2️⃣ Compare it with all centroid vectors
 * 3️⃣ Select the closest cluster
 * 4️⃣ Search only inside that cluster
 *
 * Result:
 * - Search space reduces drastically
 * - Huge performance improvement
 *
 * 
 * 
 * 
 * 
 * ------------------------------------------------------------
 * 🔹 Use Cases of Vector Stores
 * ------------------------------------------------------------
 *
 * ✅ Semantic Search
 *    - Meaning-based document retrieval
 *
 * ✅ RAG (Retrieval Augmented Generation)
 *    - Fetch relevant context for LLMs
 *
 * ✅ Recommendation Systems
 *    - Movie, product, content recommendations
 *
 * ✅ Image & Multimedia Search
 *    - Find visually or semantically similar media
 *
 * 
 * 
 * 
 * 
 * 
 * ------------------------------------------------------------
 * 🔹 Vector Store vs Vector Database
 * ------------------------------------------------------------
 *
 * Vector Store:
 * - Focuses on vector storage + similarity search
 * - Can be a library or embedded system
 * - Example: FAISS
 *
 * Vector Database:
 * - Full-fledged database system
 * - Includes persistence, scalability, APIs
 * - Built on top of vector store concepts
 * - Examples: Pinecone, Weaviate, Milvus
 *
 * 
 * 
 * 
 * 
 * ------------------------------------------------------------
 * 🔹 Final Summary
 * ------------------------------------------------------------
 *
 * Vector Stores enable:
 * - Efficient similarity search
 * - Scalable semantic retrieval
 * - Fast RAG pipelines
 *
 * Without vector stores:
 * - Semantic search is slow
 * - RAG systems are impractical
 *
 * That’s why Vector Stores are a
 * core building block of GenAI systems.
 *
 */