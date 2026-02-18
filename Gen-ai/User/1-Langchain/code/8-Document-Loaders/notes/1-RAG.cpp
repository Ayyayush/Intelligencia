/**
 * 📘 GenAI Playlist – LangChain
 * Lecture-10 | Video-12 | CampusX
 * Topic: RAG Components | 1️⃣ Document Loaders
 *
 * --------------------------------------------------
 * INTRODUCTION
 * --------------------------------------------------
 *
 * Is lecture me hum **RAG (Retrieval-Augmented Generation)**
 * ke components ko samajhna start karenge.
 *
 * Aaj ka focus hoga:
 * 👉 **Document Loaders**
 *
 * --------------------------------------------------
 * WHAT IS RAG?
 * --------------------------------------------------
 *
 * RAG ek technique hai jo:
 * - Information Retrieval
 * - Language Generation
 *
 * dono ko combine karti hai.
 *
 * Flow:
 * - Model pehle relevant documents retrieve karta hai
 * - Un documents ko context ke roop me use karta hai
 * - Phir grounded aur accurate response generate karta hai
 *
 * --------------------------------------------------
 * WHY RAG IS IMPORTANT?
 * --------------------------------------------------
 *
 * Normal LLMs (jaise ChatGPT):
 * - Kabhi-kabhi outdated ya incorrect information de sakte hain
 *
 * RAG ka use karke:
 * - External knowledge base provide ki ja sakti hai
 * - Latest information ka use possible hota hai
 *
 * --------------------------------------------------
 * BENEFITS OF USING RAG
 * --------------------------------------------------
 *
 * 1️⃣ Up-to-date information ka use
 * 2️⃣ Better data privacy (data local reh sakta hai)
 * 3️⃣ Document size ki koi hard limit nahi
 *
 * Example:
 * - Agar ChatGPT kisi GK question ka
 *   galat ya outdated answer de raha ho
 * - To hum RAG use karke
 *   usse external knowledge base de sakte hain
 *
 * --------------------------------------------------
 * RAG-BASED APPLICATIONS
 * --------------------------------------------------
 *
 * - Internal company knowledge chatbots
 * - PDF / document-based Q&A systems
 * - Customer support bots
 * - Research assistants
 *
 * --------------------------------------------------
 * CORE COMPONENTS OF RAG
 * --------------------------------------------------
 *
 * RAG ko 4 major components me samjho:
 *
 * 1️⃣ Document Loaders
 * 2️⃣ Text Splitters
 * 3️⃣ Vector Databases
 * 4️⃣ Retrievers
 *
 * --------------------------------------------------
 * FOCUS OF THIS LECTURE
 * --------------------------------------------------
 *
 * Is lecture me hum specifically
 * **Document Loaders** par focus karenge.
 *
 * RAG ecosystem me:
 * - Hundreds of document loaders available hote hain
 *
 * --------------------------------------------------
 * WHAT WE WILL STUDY
 * --------------------------------------------------
 *
 * Hum cover karenge:
 *
 * - Document loaders ka core concept
 * - Kaise documents load kiye jaate hain
 * - Most commonly used document loaders
 *
 * --------------------------------------------------
 * MOST USED DOCUMENT LOADERS
 * --------------------------------------------------
 *
 * 1️⃣ Text Loader
 *    → Simple text files ke liye
 *
 * 2️⃣ PyPDFLoader
 *    → PDF documents load karne ke liye
 *
 * 3️⃣ WebBaseLoader
 *    → Web pages se data load karne ke liye
 *
 * 4️⃣ CSV Loader
 *    → CSV files se structured data load karne ke liye
 *
 * --------------------------------------------------
 * NEXT STEPS
 * --------------------------------------------------
 *
 * Aage hum:
 * - In loaders ko practically use karenge
 * - RAG pipeline build karna shuru karenge
 *
 */
