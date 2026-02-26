/**
 * 📘 GenAI Playlist – LangChain
 * Lecture-14 | Video-16 | CampusX
 * Topic: RAG in Detail
 *
 * ------------------------------------------------------------
 * 🔹 What is RAG?
 * ------------------------------------------------------------
 *
 * RAG ka full form hota hai:
 * 👉 Retrieval Augmented Generation
 *
 * Simple LLM flow:
 *
 * Query → LLM → Response
 *
 * Ye flow kaafi cases mein achha kaam karta hai,
 * lekin har situation mein nahi.
 *
 * ------------------------------------------------------------
 * 🔹 LLM kaise kaam karta hai? (Background)
 * ------------------------------------------------------------
 *
 * LLMs ko:
 * - Huge amount of public data pe pre-train kiya jaata hai
 *
 * Training ke time:
 * - Knowledge model ke parameters ke andar store ho jaati hai
 *
 * Is stored knowledge ko access karne ke liye:
 * 👉 Hum prompting ka use karte hain
 *
 * ------------------------------------------------------------
 * 🔹 Problem kaha aati hai?
 * ------------------------------------------------------------
 *
 * Ye approach mostly theek kaam karti hai,
 * BUT kuch situations mein fail ho jaati hai.
 *
 * ------------------------------------------------------------
 * 🔹 Problem 1: Private / Company Data
 * ------------------------------------------------------------
 *
 * Example:
 * - Agar aap apni company ke internal policies ke baare mein poochho
 *
 * LLM accurate answer nahi de paayega
 * kyunki:
 * ❌ Company ka private data pre-training mein tha hi nahi
 *
 * ------------------------------------------------------------
 * 🔹 Problem 2: Recent / Latest Data
 * ------------------------------------------------------------
 *
 * LLM ka knowledge:
 * - Ek fixed time tak ka hota hai
 *
 * Isliye:
 * ❌ Recent news
 * ❌ Latest updates
 * ❌ New documents
 *
 * Inka answer LLM nahi de paata
 *
 * ------------------------------------------------------------
 * 🔹 Problem 3: Hallucination
 * ------------------------------------------------------------
 *
 * Kabhi-kabhi LLM:
 * - Confident tone mein
 * - Galat information generate kar deta hai
 *
 * Isko hum:
 * 👉 Hallucination bolte hain
 *
 * Ye bahut dangerous ho sakta hai,
 * especially production systems mein.
 *
 * ------------------------------------------------------------
 * 🔹 In Problems ko solve karne ke tareeke
 * ------------------------------------------------------------
 *
 * Ek approach hai:
 * 👉 Fine-tuning
 *
 * Fine-tuning mein:
 * - Model ko extra data pe train kiya jaata hai
 *
 * Lekin fine-tuning:
 * ❌ Expensive hoti hai
 * ❌ Time-consuming hoti hai
 * ❌ Frequent updates ke liye practical nahi
 *
 * ------------------------------------------------------------
 * 🔹 RAG: Smarter Solution
 * ------------------------------------------------------------
 *
 * RAG ek technique hai jo:
 *
 * - LLM ke saath external knowledge ko jod deti hai
 * - Answer generate karne se pehle
 *   relevant information retrieve karti hai
 *
 * New Flow:
 *
 * Query
 *   ↓
 * Retriever (Vector Store / DB / Docs)
 *   ↓
 * Relevant Context
 *   ↓
 * LLM
 *   ↓
 * Final Response
 *
 * ------------------------------------------------------------
 * 🔹 RAG kya solve karta hai?
 * ------------------------------------------------------------
 *
 * ✔ Private data access
 * ✔ Latest / dynamic data
 * ✔ Hallucination reduce karta hai
 * ✔ No need to retrain LLM
 *
 * ------------------------------------------------------------
 * 🔹 RAG vs Fine-Tuning (High Level)
 * ------------------------------------------------------------
 *
 * Fine-Tuning:
 * - Model ke parameters change hote hain
 * - Static knowledge add hota hai
 * - Costly & slow
 *
 * RAG:
 * - Model same rehta hai
 * - Knowledge external source se aata hai
 * - Fast & flexible
 *
 * ------------------------------------------------------------
 * 🔹 Final Summary
 * ------------------------------------------------------------
 *
 * RAG ek powerful technique hai jo:
 * - LLM ko real-world use cases ke liye practical banati hai
 * - Private + recent data ke saath kaam karne deti hai
 * - Hallucination ko kaafi had tak reduce karti hai
 *
 * Isi wajah se RAG
 * modern GenAI systems ka backbone ban chuka hai.
 *
 */