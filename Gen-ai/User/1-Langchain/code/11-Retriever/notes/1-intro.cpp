/**
 * 📘 GenAI Playlist – LangChain
 * Lecture-13 | Video-15 | CampusX
 * Topic: RAG Components | 4️⃣ Retrievers
 *
 * ------------------------------------------------------------
 * 🔹 What are Retrievers in LangChain?
 * ------------------------------------------------------------
 *
 * Maan lo:
 * - Aapke paas koi data source hai
 *   (PDFs, DB, Vector Store, Wikipedia, etc.)
 * - Aur aapko us data se relevant information retrieve karni hai
 *
 * Retriever ka kaam:
 * 👉 Data source se relevant documents nikaal kar dena
 *
 * ------------------------------------------------------------
 * 🔹 Technical Definition
 * ------------------------------------------------------------
 *
 * A Retriever is:
 *
 * - Basically ek function
 * - Jo input leta hai (usually a query)
 * - Aur output mein multiple Document objects deta hai
 *
 * Input  → Query (string)
 * Output → List of Documents
 *
 * ------------------------------------------------------------
 * 🔹 Retrievers in LangChain
 * ------------------------------------------------------------
 *
 * :contentReference[oaicite:0]{index=0} mein
 * sirf ek retriever nahi hota.
 *
 * LangChain multiple types ke retrievers provide karta hai,
 * jo different data sources aur mechanisms pe kaam karte hain.
 *
 * ------------------------------------------------------------
 * 🔹 Important Concept: Runnables
 * ------------------------------------------------------------
 *
 * LangChain mein:
 *
 * 👉 All retrievers are RUNNABLES
 *
 * Matlab:
 * - Retrievers ko chains mein plug kar sakte ho
 * - Pipelines bana sakte ho
 * - Easily compose aur transform kar sakte ho
 *
 * ------------------------------------------------------------
 * 🔹 How Can We Classify Retrievers?
 * ------------------------------------------------------------
 *
 * Retrievers ko hum multiple bases par divide kar sakte hain:
 *
 * 1️⃣ Based on Data Source
 * 2️⃣ Based on Retrieval Mechanism
 *
 * ------------------------------------------------------------
 * 🔹 1️⃣ Retrievers Based on Data Source
 * ------------------------------------------------------------
 *
 * 🔸 Vector Store Retriever
 * - Vector databases se data retrieve karta hai
 * - Semantic similarity use hoti hai
 * - Most common retriever in RAG
 *
 * 🔸 Archive Retrievers
 * - Structured archives ya stored datasets se retrieve karta hai
 *
 * 🔸 Wikipedia Retriever
 * - Wikipedia se directly relevant content fetch karta hai
 * - External knowledge ke liye useful
 *
 * ------------------------------------------------------------
 * 🔹 2️⃣ Retrievers Based on Retrieval Mechanism
 * ------------------------------------------------------------
 *
 * 🔸 Multi-Query Retriever
 * - Ek single query ko multiple queries mein tod deta hai
 * - Har query se documents retrieve karta hai
 * - Recall improve karta hai
 *
 * 🔸 Contextual Compression Retriever
 * - Pehle documents retrieve karta hai
 * - Phir un documents ko compress karta hai
 * - Sirf relevant parts LLM ko bhejta hai
 *
 * ------------------------------------------------------------
 * 🔹 Why Do We Need Different Retrievers?
 * ------------------------------------------------------------
 *
 * Reason:
 * - Har data source alag hota hai
 * - Har use case ka retrieval logic alag hota hai
 *
 * Example:
 * - Simple RAG → Vector Store Retriever
 * - Large documents → Contextual Compression Retriever
 * - Ambiguous queries → Multi-Query Retriever
 *
 * ------------------------------------------------------------
 * 🔹 Next Step
 * ------------------------------------------------------------
 *
 * Ab hum:
 * - Har retriever ka basic idea samjhenge
 * - Phir unka practical usage dekhenge
 * - Aur samjhenge ki real-world RAG mein
 *   kaunsa retriever kab use hota hai
 *
 * ------------------------------------------------------------
 * 🔹 Final Summary
 * ------------------------------------------------------------
 *
 * Retriever = Bridge between data source and LLM
 *
 * Strong retriever:
 * - Better context
 * - Better answers
 * - Better RAG system
 *
 */