/**
 * ---------------------------------------------------------------
 * 📘 Plan of Action – YouTube RAG Chat System
 * ---------------------------------------------------------------
 *
 * Is project mein hum bilkul wahi RAG workflow follow karenge
 * jo humne pichle project mein use kiya tha.
 *
 * Bas difference itna hai ki ab humara data source
 * YouTube video ka transcript hoga.
 *
 * ---------------------------------------------------------------
 * ! Step 1 – YouTube Transcript Load Karna
 * ---------------------------------------------------------------
 *
 * Sabse pehle hume us YouTube video ka transcript lena hoga
 * jiske saath hum chat karna chahte hain.
 *
 * Ye kaam multiple tariko se kiya ja sakta hai:
 *
 * 1️⃣ LangChain ka YouTube Loader
 *    - LangChain mein built-in loader available hai
 *
 * 2️⃣ YouTube Transcript API
 *    - Directly YouTube transcript API use kar sakte hain
 *
 * Is project mein hum YouTube Transcript API use karenge
 * kyunki LangChain ka loader thoda buggy ho sakta hai.
 *
 * Result:
 * Hume ek large text mil jayega jo poore video ka transcript hoga.
 *
 *
 * ---------------------------------------------------------------
 * ! Step 2 – Retriever Create Karna
 * ---------------------------------------------------------------
 *
 * Transcript milne ke baad hum usko directly search nahi karte.
 *
 * Process:
 *
 * 1️⃣ Transcript ko small chunks mein split karenge
 * 2️⃣ Har chunk ka embedding banayenge
 * 3️⃣ Embeddings ko vector store (FAISS) mein store karenge
 *
 * Ab hum vector store se ek retriever banayenge.
 *
 * Jab user koi query bhejega:
 *
 * Query → embedding → vector similarity search
 *
 * Retriever vector store mein semantic search karega
 * aur sabse relevant chunks wapas dega.
 *
 *
 * ---------------------------------------------------------------
 * ! Step 3 – Prompt Construction (Augmentation)
 * ---------------------------------------------------------------
 *
 * Ab hume do cheeze mil chuki hain:
 *
 * 1️⃣ User ka question
 * 2️⃣ Retriever se aaye relevant transcript chunks
 *
 * In dono ko combine karke hum ek prompt banayenge.
 *
 * Prompt ka structure kuch aisa hoga:
 *
 * Context: retrieved transcript chunks
 * Question: user query
 *
 * Is step ko RAG pipeline mein "Augmentation" bolte hain.
 *
 *
 * ---------------------------------------------------------------
 * ! Step 4 – LLM se Response Generate Karna
 * ---------------------------------------------------------------
 *
 * Ab final prompt ko hum LLM ko bhejenge.
 *
 * Is project mein hum Groq ka fast model use kar rahe hain:
 *
 * 👉 llama-3.1-8b-instant
 *
 * LLM:
 * - context ko read karega
 * - question ko samjhega
 * - aur final answer generate karega
 *
 *
 * ---------------------------------------------------------------
 * ! Final Step – Chain Banana
 * ---------------------------------------------------------------
 *
 * Abhi tak hum sab steps alag-alag dekh rahe hain:
 *
 * Transcript → Chunking → Embeddings → Retriever
 * → Prompt → LLM → Response
 *
 * Lekin final implementation mein
 * hum in sab steps ko ek chain mein convert kar denge.
 *
 * Matlab:
 *
 * Ek step ka output → next step ka input ban jayega.
 *
 * Isi ko LangChain mein "Chain" ya "Pipeline" bolte hain.
 *
 *
 * ---------------------------------------------------------------
 * ! Final Workflow
 * ---------------------------------------------------------------
 *
 * YouTube Video
 *      ↓
 * Transcript Extraction
 *      ↓
 * Text Chunking
 *      ↓
 * Embeddings
 *      ↓
 * Vector Store (FAISS)
 *      ↓
 * Retriever
 *      ↓
 * Prompt Construction
 *      ↓
 * Groq LLM
 *      ↓
 * Final Answer
 *
 */