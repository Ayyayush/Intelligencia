/**
 * 📘 Wikipedia Retriever
 *
 * ------------------------------------------------------------
 * 🔹 What is Wikipedia Retriever?
 * ------------------------------------------------------------
 *
 * Wikipedia Retriever is a retriever provided by
 * :contentReference[oaicite:0]{index=0}
 * that queries the
 * :contentReference[oaicite:1]{index=1} API
 * to fetch relevant content for a given user query.
 *
 * It is mainly used when:
 * - You want general world knowledge
 * - You do NOT have your own private documents
 *
 * ------------------------------------------------------------
 * 🔹 Core Idea
 * ------------------------------------------------------------
 *
 * User Query  → Wikipedia API  → Relevant Wikipedia pages
 *            → Converted into Document objects
 *
 * Retriever ka output hamesha:
 * 👉 List of Document objects hota hai
 *
 * ------------------------------------------------------------
 * 🔹 How Relevance is Decided?
 * ------------------------------------------------------------
 *
 * Wikipedia Retriever keyword-based hota hai.
 *
 * Matlab:
 * - Query ke keywords
 * - Wikipedia pages ke titles + content
 *
 * 👉 Jitne zyada keywords match honge,
 *    utna page zyada relevant maana jayega.
 *
 * ❗ Note:
 * - Ye semantic embeddings use nahi karta
 * - Ye traditional keyword matching pe kaam karta hai
 *
 * ------------------------------------------------------------
 * 🔹 How Wikipedia Retriever Works (Step-by-Step)
 * ------------------------------------------------------------
 *
 * 1️⃣ User ek query deta hai
 *     Example:
 *     "geopolitical history of India and Pakistan"
 *
 * 2️⃣ Retriever Wikipedia API ko call karta hai
 *
 * 3️⃣ Wikipedia relevant pages search karta hai
 *
 * 4️⃣ Top-k pages select kiye jaate hain
 *
 * 5️⃣ Har page ko LangChain ke
 *     Document object mein convert kiya jaata hai
 *
 * 6️⃣ Documents retriever ke output ke roop mein return hote hain
 *
 * ------------------------------------------------------------
 * 🔹 Important Characteristics
 * ------------------------------------------------------------
 *
 * ✅ External knowledge source
 * ✅ No vector database required
 * ✅ No embeddings needed
 * ❌ Not suitable for private / internal data
 * ❌ Keyword-based (not true semantic search)
 *
 * ------------------------------------------------------------
 * 🔹 When Should You Use Wikipedia Retriever?
 * ------------------------------------------------------------
 *
 * ✔ General knowledge questions
 * ✔ History, politics, science topics
 * ✔ Prototyping RAG quickly
 *
 * ❌ Company PDFs
 * ❌ Confidential data
 * ❌ Deep semantic similarity use cases
 *
 * ------------------------------------------------------------
 * 🔹 Wikipedia Retriever vs Vector Store Retriever
 * ------------------------------------------------------------
 *
 * Wikipedia Retriever:
 * - Keyword-based
 * - External public data
 * - No embeddings
 *
 * Vector Store Retriever:
 * - Embedding-based
 * - Private / custom data
 * - True semantic search
 *
 * ------------------------------------------------------------
 * 🔹 Final Summary
 * ------------------------------------------------------------
 *
 * Wikipedia Retriever is:
 * - Simple
 * - Fast
 * - Useful for public knowledge
 *
 * But for production RAG systems,
 * it is usually combined or replaced
 * with vector store retrievers.
 *
 */