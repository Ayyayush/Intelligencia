/**
 * 📘 GenAI Playlist – LangChain
 * Lecture-12 | Video-14 | CampusX
 * Topic: RAG Components | 3️⃣ Vector Databases
 *
 * ------------------------------------------------------------
 * 🔹 What are Vector Stores?
 * ------------------------------------------------------------
 *
 * Vector stores (Vector Databases) are specialized databases
 * designed to store and retrieve high-dimensional vectors.
 *
 * These vectors are usually embeddings generated from text,
 * images, audio, etc.
 *
 * In RAG systems, vector stores are used to perform
 * semantic search instead of keyword search.
 *
 * ------------------------------------------------------------
 * 🔹 Why Do We Need Vector Stores?
 * ------------------------------------------------------------
 *
 * Let’s understand with an example:
 *
 * Suppose we are building a Movie Recommendation System.
 *
 * Step 1: We first need movie data.
 *         (We can collect it via APIs, scraping, datasets, etc.)
 *
 * Step 2: When a user watches a movie,
 *         we want to recommend similar movies at the bottom.
 *
 * Example:
 *
 * User watched: "My Name Is Khan"
 *
 * ❌ Traditional Keyword Matching:
 *    It might recommend "Kabhi Alvida Naa Kehna"
 *    just because:
 *        - Same lead actor
 *        - Same director
 *
 *    But plot-wise they are NOT actually similar.
 *
 * So this is a flaw of keyword-based systems.
 *
 * ✅ Semantic Matching:
 *
 * If someone watched "Taare Zameen Par",
 * and we recommend "A Beautiful Mind",
 *
 * Even though keywords are different,
 * the theme (struggle, psychology, emotional depth)
 * is similar.
 *
 * That’s TRUE similarity.
 *
 * 
 * 
 * 
 * 
 * ------------------------------------------------------------
 * ! 🔹 Core Idea
 * ------------------------------------------------------------
 *
 * Instead of matching keywords,
 * we match the meaning (semantics) of the content.
 *
 * For that:
 *
 * 1. We need the movie plot.
 * 2. Convert the plot into embeddings.
 * 3. Store those embeddings.
 * 4. When user watches a movie,
 *    we compare its embedding with others.
 *
 * 
 * 
 * 
 * ------------------------------------------------------------
 * ! 🔹 What Are Embeddings?
 * ------------------------------------------------------------
 *
 * Embeddings are numerical vector representations
 * of text that capture meaning.
 *
 * Example:
 *
 * "Taare Zameen Par" → [0.23, 0.91, 0.12, ...]
 *
 * "A Beautiful Mind" → [0.21, 0.88, 0.15, ...]
 *
 * If vectors are close in vector space,
 * they are semantically similar.
 *
 * 
 * 
 * 
 * 
 * 
 * 
 * ------------------------------------------------------------
 * ! 🔹 Challenges in Building This System
 * ------------------------------------------------------------
 *
 * 1️⃣ Generating Embeddings
 *     - Need embedding models (OpenAI, HuggingFace, etc.)
 *
 * 2️⃣ Storing Embeddings
 *     - Traditional databases (MySQL, MongoDB)
 *       are NOT optimized for vector similarity search.
 *
 * 3️⃣ Semantic Search
 *     - We need to compare vectors efficiently.
 *
 * 4️⃣ Similarity Calculation
 *     - We use Cosine Similarity to measure closeness.
 *
 * 
 * 
 * ------------------------------------------------------------
 * 🔹 Why Not Traditional Databases?
 * ------------------------------------------------------------
 *
 * Because:
 *
 * - Vectors are high-dimensional (e.g., 1536 dimensions).
 * - Searching nearest vectors requires special indexing.
 * - SQL databases are optimized for structured data,
 *   not similarity search.
 *
 * That’s why we use:
 *
 * 👉 Vector Databases (Vector Stores)
 *
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 * ------------------------------------------------------------
 * 🔹 What Do Vector Databases Provide?
 * ------------------------------------------------------------
 *
 * - Efficient storage of embeddings
 * - Fast nearest-neighbor search
 * - Built-in similarity metrics (cosine, dot product, etc.)
 * - Scalable indexing (FAISS, HNSW, etc.)
 *
 * 
 * ------------------------------------------------------------
 * 🔹 Final Summary
 * ------------------------------------------------------------
 *
 * Keyword Matching → Surface Level Matching ❌
 * Semantic Matching → Meaning Based Matching ✅
 *
 * To achieve semantic search:
 *
 * Text → Embedding → Store in Vector DB → Similarity Search
 *
 * This is why Vector Databases are a core
 * component of RAG systems.
 *
 */