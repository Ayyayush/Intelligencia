/**
 * 📘 Vector Stores in LangChain
 *
 * ------------------------------------------------------------
 * 🔹 LangChain & Vector Stores (Overview)
 * ------------------------------------------------------------
 *
 * LangChain ne starting se hi Vector Stores ke liye
 * strong built-in support provide kiya hai.
 *
 * Iska main goal hai:
 * 👉 Different vector databases ko ek common interface ke through use karna
 *
 * 
 * ------------------------------------------------------------
 * 🔹 Supported Vector Stores (Examples)
 * ------------------------------------------------------------
 *
 * LangChain multiple popular vector stores ko support karta hai, jaise:
 *
 * - FAISS
 * - Chroma
 * - Pinecone
 * - Weaviate
 * - Milvus
 * - Qdrant
 *
 * (aur bhi kaafi options available hain)
 *
 * 
 * 
 * ------------------------------------------------------------
 * 🔹 Common Interface (Most Important Concept)
 * ------------------------------------------------------------
 *
 * LangChain sabhi vector stores ko
 * ek COMMON INTERFACE ke through design karta hai.
 *
 * Matlab:
 * - Same method names
 * - Same method signatures
 * - Same workflow
 *
 * Chahe vector store koi bhi ho.
 *
 * 
 * 
 * ------------------------------------------------------------
 * 🔹 Metadata Handling
 * ------------------------------------------------------------
 *
 * LangChain vector stores metadata ko bhi support karte hain.
 *
 * Metadata ka use:
 * - Filtering results
 * - Context attach karna
 * - Extra information store karna
 *
 * Example metadata:
 * {
 *   "source": "pdf",
 *   "page": 12,
 *   "topic": "GenAI"
 * }
 *
 * Metadata vectors ke saath store hota hai,
 * but metadata khud vector mein convert nahi hota.
 *
 * 
 * 
 * ------------------------------------------------------------
 * 🔹 Same Method Signatures
 * ------------------------------------------------------------
 *
 * Sab vector stores LangChain mein:
 *
 * - add_documents()
 * - similarity_search()
 * - similarity_search_with_score()
 * - as_retriever()
 *
 * jaise common methods follow karte hain.
 *
 * 
 * 
 * ------------------------------------------------------------
 * 🔹 Why Common Interface is Powerful?
 * ------------------------------------------------------------
 *
 * Maan lo:
 * - Aapne ek functionality banayi using FAISS
 *
 * Ab future mein:
 * - Aap FAISS ko Pinecone se replace karna chahte ho
 *
 * 👉 Toh aap minimal code changes ke saath
 *    vector store replace kar sakte ho.
 *
 * Reason:
 * - Sab vector stores ek hi common interface follow karte hain
 *
 * ------------------------------------------------------------
 * 🔹 Real-World Benefit
 * ------------------------------------------------------------
 *
 * - Vendor lock-in kam hota hai
 * - Experimentation easy ho jata hai
 * - Production mein scalable DB use kar sakte ho
 * - Local testing ke liye lightweight stores use kar sakte ho
 *
 * 
 * 
 * 
 * ------------------------------------------------------------
 * ! 🔹 Learning with Chroma
 * ------------------------------------------------------------
 *
 * Ab hum ek popular vector store
 * 👉 Chroma
 *
 * ki help se samjhenge:
 *
 * - Vector store kaise create hota hai
 * - Documents kaise add hote hain
 * - Similarity search kaise kaam karta hai
 * - Metadata kaise use hota hai
 *
 * Chroma beginner-friendly hai
 * aur local experimentation ke liye perfect hai.
 *
 * 
 * 
 * 
 * 
 * 
 * ------------------------------------------------------------
 * 🔹 Final Summary
 * ------------------------------------------------------------
 *
 * LangChain ka vector store design:
 *
 * - Modular
 * - Interchangeable
 * - Scalable
 *
 * Isi wajah se LangChain production-ready
 * RAG systems ke liye kaafi popular hai.
 *
 */