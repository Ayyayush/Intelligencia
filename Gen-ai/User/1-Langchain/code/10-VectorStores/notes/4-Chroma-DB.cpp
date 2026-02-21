/**
 * 📘 Chroma DB
 *
 * ------------------------------------------------------------
 * 🔹 What is Chroma DB?
 * ------------------------------------------------------------
 *
 * Chroma is a lightweight, open-source vector database
 * designed specifically for:
 *
 * - Local development
 * - Prototyping
 * - Small to medium-scale production use cases
 *
 * It is very beginner-friendly and integrates smoothly
 * with LangChain.
 *
 * ------------------------------------------------------------
 * 🔹 Why Chroma is Popular?
 * ------------------------------------------------------------
 *
 * - Easy to set up (no heavy infrastructure)
 * - Runs locally
 * - Open source
 * - Perfect for learning and experimentation
 *
 * Because of this, Chroma is often used as
 * the first vector database while learning RAG.
 *
 * ------------------------------------------------------------
 * 🔹 Chroma DB Hierarchy (Tree-like Structure)
 * ------------------------------------------------------------
 *
 * Chroma follows a database hierarchy similar to
 * traditional databases.
 *
 * Tree Structure:
 *
 * Tenant
 *   └── Database
 *         └── Collection
 *               └── Documents / Vectors
 *
 * ------------------------------------------------------------
 * 🔹 Tenant
 * ------------------------------------------------------------
 *
 * Tenant is the top-level namespace.
 *
 * - Used mainly in multi-user or multi-project setups
 * - Helps isolate data between different users or apps
 *
 * ------------------------------------------------------------
 * 🔹 Database
 * ------------------------------------------------------------
 *
 * A database lives inside a tenant.
 *
 * - Logical grouping of collections
 * - Similar to a database in RDBMS
 *
 * ------------------------------------------------------------
 * 🔹 Collection
 * ------------------------------------------------------------
 *
 * Collection is the most important concept.
 *
 * - Similar to a table in RDBMS
 * - Stores:
 *     - Embedding vectors
 *     - Associated metadata
 *     - Original documents
 *
 * In most projects:
 * 👉 You directly work with collections
 *
 * ------------------------------------------------------------
 * 🔹 Key Insight
 * ------------------------------------------------------------
 *
 * If you understand Chroma DB well,
 * then working with other vector stores
 * like FAISS becomes much easier.
 *
 * Reason:
 * - Core concepts (embeddings, collections, similarity search)
 *   remain the same
 *
 * ------------------------------------------------------------
 * 🔹 Learning Strategy
 * ------------------------------------------------------------
 *
 * Ab hum Chroma DB ko:
 * - Code likh kar samjhenge
 * - Documents add karenge
 * - Similarity search run karenge
 *
 * Practical implementation se
 * concept crystal clear ho jayega.
 *
 * ------------------------------------------------------------
 * 🔹 Final Note
 * ------------------------------------------------------------
 *
 * Chroma DB is NOT the fastest or most scalable,
 * but it is:
 *
 * - Excellent for learning
 * - Ideal for local RAG pipelines
 * - Perfect starting point in LangChain
 *
 */