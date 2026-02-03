/**
 * 📘 GenAI Playlist –  langchain lecture -3 CampusX
 *
 * In this lecture, we study the **first component of LangChain**
 *
 * 🔹 MODELS
 *
 * Models ko simply ek **interface** samjho
 * jo hume different types ke models se connect karne mein help karta hai.
 *
 * Types of models:
 * 1️⃣ Language Models
 * 2️⃣ Embedding Models
 *
 * 🔸 Language Models:
 * - Text input lete hain
 * - Text output generate karte hain
 * - Chatbot banane mein help karte hain
 *
 * 🔸 Embedding Models:
 * - Text input lete hain
 * - Us text ko vectors (numbers ki series) mein convert kar dete hain
 * - Embeddings = set of vectors
 * - Semantic Search, similarity search mein use hote hain
 *   (jaise hum pehle padh chuke hain)
 */

//                ┌───────────────┐
//                │    Models     │
//                └───────────────┘
//                         |
//             ┌───────────┴───────────┐
//             |                       |
//   ┌─────────────────┐     ┌───────────────────┐
//   │ Language Models │     │ Embedding Models  │
//   └─────────────────┘     └───────────────────┘
//             |
//     ┌───────┴────────┐
//     |                |
// ┌─────────┐     ┌────────────┐
// │  LLMs   │     │ Chat Models│
// └─────────┘     └────────────┘


/**
 * 🧠 Plan of Action for this Lecture
 *
 * Aaj ka lecture **coding-focused** hai
 *
 * 🔹 Part 1: Working with Language Models
 *
 * 1️⃣ Closed Source Models
 *    - OpenAI
 *    - Anthropic
 *    - Gemini
 *
 * 2️⃣ Open Source Models
 *    - Hugging Face par available hote hain
 *
 * 🔹 Part 2: Working with Embedding Models
 *
 * - Language models ke baad embeddings pe move karenge
 * - Open source + closed source dono ke saath kaam karenge
 * - End mein ek **Document Similarity Model** bana kar dekhenge
 *
 */


 // ! lanuage models
 /**
  * lngage models are ai sytsems desgned to process, generate , understand natural language text
  * 
  * isme 2 part h llms 
  * chat models
  * 
  * lms hume jya nhi padhna h 
  * kyunki ye outdated hote ja rhe h 
  * isko replace kr rhe h ab chat models
  * llm ke ly support dheere heere khtm ho rhe h 
  * par hum thoda sa iske uar kaam kar ke dekhenge 
  * 
  * hat models languae mdel h jo coversatina task ke lye use hote h 
  * ab hum code karke hidekhnege
  * ab mai code folder ke 1-modes mein iss lectur ke liye coding krne ja ra  
  */