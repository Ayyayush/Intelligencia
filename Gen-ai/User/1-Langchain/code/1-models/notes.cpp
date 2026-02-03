/******************************************************************************************
 * 📌 Project Context
 *
 * This project is based on:
 * - GenAI Playlist (CampusX)
 * - Video 5
 * - Lecture 3 (LangChain – Models)
 *
 * In this project, we will work specifically on **Models**
 ******************************************************************************************/

/******************************************************************************************
 * 🚀 Initial Setup Steps
 *
 * 1️⃣ Create virtual environment
 *     python -m venv venv
 *
 * 2️⃣ Activate virtual environment (Windows PowerShell)
 *     .\venv\Scripts\Activate.ps1
 *
 * 3️⃣ Install required packages
 *     pip install -r requirements.txt
 *
 * 4️⃣ Verify installed packages
 *     pip list
 ******************************************************************************************/

/******************************************************************************************
 * 📁 Project Folder Structure
 *
 * We have created 3 folders:
 *
 * 1️⃣ llm
 * 2️⃣ chatmodels
 * 3️⃣ embedding-models
 *
 * Folder layout:
 *
 * project-root/
 * ├── llm/
 * ├── chatmodels/
 * └── embedding-models/
 ******************************************************************************************/

/******************************************************************************************
 * 🧠 Model Usage Plan
 *
 * 🔹 For LLMs:
 * - Normally OpenAI API is used
 * - But OpenAI is paid
 * - So we will use **Groq API** instead
 *
 * 🔹 Reason:
 * - Groq provides fast inference
 * - Cost-effective for learning & experimentation
 ******************************************************************************************/

/******************************************************************************************
 * LangChain mein LLMs aur ChatModels ko alag-alag folders mein organize kiya jata hai.
 *
 * 🔹 LLM Folder:
 *    - Isme `llm_model.py` jaisi files hoti hain
 *    - Ye normal text-based language models ke liye hota hai
 *    - Input  -> plain text
 *    - Output -> plain text
 *
 * 🔹 ChatModel Folder:
 *    - Isme `chat_model.py` jaisi files hoti hain
 *    - Ye chat-based models ke liye hota hai
 *    - Messages format:
 *        - system
 *        - user
 *        - assistant
 *
 * 🔹 Example:
 *    System    : You are a helpful assistant
 *    User      : Explain transformers
 *    Assistant : ...
 ******************************************************************************************/

/******************************************************************************************
 * 🔹 Design Advantage
 *
 * - Agar model change karna ho:
 *      OpenAI → Groq → Gemini → HuggingFace
 *
 * - Toh code mein bahut kam changes karne padte hain
 *
 * 🔹 Inheritance Concept:
 * - Saare LLMs       → BaseLLM ko inherit karte hain
 * - Saare ChatModels → BaseChatModel ko inherit karte hain
 *
 * Isi wajah se LangChain:
 * - extensible hota hai
 * - provider-agnostic hota hai
 ******************************************************************************************/

/******************************************************************************************
 * ⚙️ Important Model Parameters
 *
 * 1️⃣ temperature
 *    - Controls randomness
 *    - Low value  → deterministic output
 *    - High value → creative output
 *
 * 2️⃣ max_completion_tokens
 *    - Maximum number of tokens in model output
 ******************************************************************************************/

/******************************************************************************************
 * 🔓 Moving from Closed-Source to Open-Source Models
 *
 * ❌ Problems with Closed-Source (API-based) Models:
 *
 * 1️⃣ Cost
 * 2️⃣ Less control over model behavior
 ******************************************************************************************/

/******************************************************************************************
 * ✅ Open-Source Models
 *
 * - Freely available
 * - Can be downloaded locally
 * - Allow:
 *    - Full control
 *    - Fine-tuning
 *    - Custom deployment
 *
 * Explanation:
 * - Company ek model train karti hai
 * - Uske baad public ke liye release kar deti hai
 * - User:
 *    - fine-tune kar sakta hai
 *    - deploy kar sakta hai
 *    - customize kar sakta hai
 ******************************************************************************************/

/******************************************************************************************
 * 🔥 Famous Open-Source Models
 *
 * - LLaMA   (Meta / Facebook)
 * - Mistral
 * - Falcon
 ******************************************************************************************/

/******************************************************************************************
 *
 * 🤗 HuggingFace – The largest repository of open-source LLMs
 *
 * Ways to use Open-source Models
 *
 *                         ┌─────────────────────────┐
 *                         │     Open-Source Models   │
 *                         └─────────────────────────┘
 *                                      |
 *                     ┌────────────────┴────────────────┐
 *                     |                                 |
 *          ┌─────────────────────────┐     ┌─────────────────────────┐
 *          │  Using HF Inference API  │     │     Running Locally      │
 *          └─────────────────────────┘     └─────────────────────────┘
 *
 ******************************************************************************************/

/******************************************************************************************
 * 🤗 Hugging Face
 *
 * 🔹 What is Hugging Face?
 *
 * - Largest repository of open-source models
 * - Hosts models for:
 *    - NLP
 *    - Text Generation
 *    - Embeddings
 *    - Vision
 *    - Audio
 *
 * 🔹 In our case:
 * - We will use:
 *      NLP → Text Generation models
 ******************************************************************************************/

/**
 * 🔻 Disadvantages of Open-Source Models
 *
 * - Bade open-source models ke liye kaafi strong hardware chahiye hota hai
 * - Resource requirement zyada hota hai
 * - Refinement closed-source models ke comparison mein kam hota hai
 */

/******************************************************************************************
 * ✅ Summary
 *
 * - Understood LLMs vs ChatModels
 * - Learned LangChain folder organization
 * - Using Groq API instead of OpenAI
 * - Shifted from closed-source to open-source models
 * - Introduced Hugging Face ecosystem
 ******************************************************************************************/

/**
 * ==========================================================
 * 📌 EMBEDDING MODELS – DOCUMENT SIMILARITY (CampusX GenAI)
 * ==========================================================
 *
 * 🔹 Embedding Models:
 * Embedding models text ko numerical vectors (numbers) me
 * convert kar dete hain, jisse machine text ka meaning
 * samajh paati hai.
 *
 * ----------------------------------------------------------
 * 🔹 Course Flow (CampusX):
 * ----------------------------------------------------------
 *
 * 1️⃣ Sabse pehle humne CLOSED SOURCE embedding models dekhe:
 *    - OpenAI Embeddings
 *    - Google Gemini Embeddings
 *
 *    👉 Ye paid hote hain
 *    👉 API key required hoti hai
 *    👉 Internet dependency hoti hai
 *
 * ----------------------------------------------------------
 *
 * 2️⃣ Uske baad hum OPEN SOURCE embeddings pe aaye:
 *    - HuggingFace Embeddings
 *    - sentence-transformers models
 *
 *    👉 Free hote hain
 *    👉 Local system pe run hote hain
 *    👉 No API key required
 *
 * ----------------------------------------------------------
 *
 * 3️⃣ Iske baad humne ek DOCUMENT SIMILARITY MODEL banaya
 *
 * ----------------------------------------------------------
 * 🔹 Document Similarity – Concept:
 * ----------------------------------------------------------
 *
 * - Multiple documents liye jaate hain
 * - Har document ko embedding (vector) me convert kiya jaata hai
 * - User query ko bhi embedding me convert kiya jaata hai
 * - Query embedding aur document embeddings ke beech
 *   COSINE SIMILARITY calculate ki jaati hai
 *
 * 👉 Jo document query ke sabse zyada close hota hai
 *    (highest cosine similarity), wahi best match hota hai
 *
 * ----------------------------------------------------------
 * 🔹 Use Cases:
 * ----------------------------------------------------------
 *
 * - Semantic Search
 * - RAG (Retrieval Augmented Generation)
 * - Question Answering Systems
 * - Chatbots ke liye document retrieval
 *
 * ----------------------------------------------------------
 * 🔹 Important Note:
 * ----------------------------------------------------------
 *
 * - Groq sirf LLM (chat / inference) ke liye hota hai
 * - Groq embeddings exist nahi karte
 * - Is file me HuggingFace LOCAL embeddings use hue hain
 *
 * ----------------------------------------------------------
 * ✅ Summary:
 * ----------------------------------------------------------
 *
 * Closed Source → OpenAI / Gemini
 * Open Source   → HuggingFace
 * Final Output  → Document Similarity System
 *
 * ==========================================================
 */
