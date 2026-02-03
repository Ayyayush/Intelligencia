/********************************************************
 * Lecture – LangChain (Start of Playlist)
 ********************************************************/


/*=====================================================
  What is LangChain?
=====================================================*/
// LangChain ek open-source framework hai
// jo Large Language Models (LLMs) powered
// applications develop karne ke liye use hota hai
//
// Simple definition:
// LangChain = LLM + Data + Logic + Workflow


/*=====================================================
  Why Do We Need LangChain?
=====================================================*/

/*---------------- Idea Origin (Use Case) ---------------*/
// 2014 ke around Nitesh Sir ko ek idea aaya:
//
// - India mein log PDFs bahut padhte hain
// - Agar:
//   * PDF upload kar sakein
//   * PDF sirf read hi nahi
//   * Uske saath chat feature bhi ho
//
// Example queries:
// - "Page number 5 ko 5-year-old ki tarah explain karo"
// - "Decision Trees ke notes generate karo"
//
// Matlab:
// - Sirf document read nahi
// - Document ke saath conversation
//
// Isi idea se kaam start hua


/*=====================================================
  High-Level System Structure (PDF Chat System)
=====================================================*/
// PDFs stored in database
//        ↓
// User Query
//        ↓
// Semantic Search
//        ↓
// Relevant PDF Pages Retrieved
//        ↓
// System Query (User Query + Relevant Pages)
//        ↓
// LLM (Brain)
//        ↓
// Final Output


/*=====================================================
  Important Concepts Used
=====================================================*/

/*---------------- NLU -------------------------------*/
// Natural Language Understanding
// - User ki query ko samajhne ke liye
// - System ye samajhta hai:
//   * User kya pooch raha hai
//   * Kis context mein pooch raha hai


/*---------------- Context-Aware Generation -----------*/
// - Sirf model ka general knowledge use nahi hota
// - Relevant document context ke saath answer generate hota hai
//
// Benefits:
// - Higher accuracy
// - Better relevance
// - Kam hallucination


/*=====================================================
  Why Semantic Search?
=====================================================*/
// Question:
// - Puri PDF / book LLM ko kyun na de dein?
//
// Problems:
// - Book bahut badi hoti hai
// - Response slow ho jaata hai
// - Irrelevant info aa sakti hai
//
// Example:
// - Algebra ka doubt aaye
// - Puri Maths book nahi padhoge
// - Sirf Algebra ke relevant pages
//
// Same logic yahan apply hota hai


/*=====================================================
  Benefits of Semantic Search
=====================================================*/
// - Faster response
// - Relevant information
// - Better accuracy


/*=====================================================
  Keyword Search vs Semantic Search
=====================================================*/
// Keyword search:
// - Exact words match karta hai
//
// Semantic search:
// - Meaning match karta hai
//
// Example:
// - "Explain algebra simply"
// - "Algebra samjhao easy language mein"
//
// Words different, meaning same
// Semantic search isko samajh leta hai


/*=====================================================
  High-Level Overview Summary
=====================================================*/
// - PDFs database mein stored
// - User query aati hai
// - Semantic search se relevant pages nikalte hain
// - User query + pages → LLM
// - Context-aware answer generate hota hai


/*=====================================================
  Next Step: Deep Dive
=====================================================*/
// Next lectures mein:
// - System build kaise hota hai
// - Semantic Search kya hai
// - Semantic Search kaise kaam karta hai


/*=====================================================
  Understanding Semantic Search
=====================================================*/

/*---------------- Example Scenario -------------------*/
// Query:
// "How many runs did Virat score?"
//
// Answer direct line mein nahi
// 2–3 paragraphs ke andar chhupa ho sakta hai
//
// Problem:
// Code kaise samjhe kaunsa paragraph relevant hai?


/*---------------- Step 1: Embeddings -----------------*/
// Pura text (paragraphs) ko embeddings mein convert
// Embeddings = text → numbers (vectors)


/*---------------- Step 2: Paragraph Embeddings --------*/
// 3 paragraphs
// Paragraph 1 → Vector 1
// Paragraph 2 → Vector 2
// Paragraph 3 → Vector 3


/*---------------- Step 3: Query Embedding --------------*/
// User query ka bhi embedding banta hai
// Query → Vector 4


/*---------------- Step 4: Vector Space ----------------*/
// Sab vectors ek high-dimensional space mein hote hain
// Total vectors:
// - 3 paragraph vectors
// - 1 query vector


/*---------------- Step 5: Similarity Calculation -------*/
// Query vector ke saath har paragraph ki similarity
// Usually cosine similarity
//
// Similarity(Query, P1)
// Similarity(Query, P2)
// Similarity(Query, P3)


/*---------------- Step 6: Best Match ------------------*/
// Jiska similarity score highest
// Wahi paragraph select hota hai


/*=====================================================
  Final Flow of Semantic Search
=====================================================*/
// Text
//   ↓
// Embeddings
//   ↓
// Query Embedding
//   ↓
// Similarity Calculation
//   ↓
// Most Relevant Paragraph
//   ↓
// Answer Generation


/*=====================================================
  Semantic Search – Key Idea
=====================================================*/
// - Words match nahi karta
// - Meaning match karta hai
//
// Isliye:
// - Exact keywords na ho
// - Phir bhi sahi answer milta hai


/*=====================================================
  Splitter
=====================================================*/
// PDF ko splitter ke through:
// - Pages / chunks mein todte hain
// - Har chunk ka embedding banate hain
// - Embeddings database mein store karte hain


/*=====================================================
  Challenge 1: Understanding Queries
=====================================================*/
// Need:
// - User ki koi bhi query samajhna
// - Relevant text generate karna
//
// Breakthrough (2017):
// - Transformer paper
// - LLMs aaye
//
// LLMs already provide:
// - NLU
// - Context-Aware Generation
//
// Isliye system ka "brain" = LLM


/*=====================================================
  Challenge 2: Using LLM as Brain
=====================================================*/
// LLMs:
// - Bahut heavy hote hain
// - High compute power chahiye
//
// Apne server par run karna:
// - Costly
// - Complex


/*=====================================================
  Solution: LLMs via APIs
=====================================================*/
// Companies:
// - OpenAI
// - Anthropic
//
// Ye companies:
// - LLMs apne servers par host karti hain
// - APIs provide karti hain
//
// Hum LLM ko locally run nahi karte
// API ke through baat karte hain


/*=====================================================
  API Usage
=====================================================*/
// APIs paid hoti hain
//
// Is course mein:
// - OpenAI ke bajaye
// - Groq API use hogi


/*=====================================================
  Challenge 3: Orchestration
=====================================================*/
// Components:
// - Splitter
// - Embeddings
// - Vector DB
// - LLM
// - APIs
//
// In sab ko:
// - Proper order
// - Proper flow
//
// Isi ko orchestration kehte hain


/*=====================================================
  Why LangChain Matters
=====================================================*/
// LangChain in sab components ko
// easily orchestrate kar deta hai
//
// Isi wajah se:
// LangChain GenAI apps ke liye popular hai


/*=====================================================
  LangChain – Benefits & Core Ideas
=====================================================*/
// LangChain:
// - Alag-alag components ke liye
//   separate code likhne se bachata hai
// - System ko structured, scalable banata hai


/*---------------- Concept of Chains ------------------*/
// Chains = multiple components ko ek pipeline
//
// Features:
// - Complex workflows
// - Output → next input
//
// Types:
// - Sequential
// - Parallel
// - Conditional


/*---------------- Model-Agnostic ---------------------*/
// LangChain model-agnostic hai
//
// Sirf ek line change:
// - OpenAI → Gemini
// - Gemini → Groq
// - Groq → Open-source
//
// Application logic same rehta hai


/*---------------- Complete Ecosystem -----------------*/
// - Document loaders
// - Embedding models
// - Vector DB connectors
// - Tools & APIs
//
// Ready-made support available


/*---------------- Memory -----------------------------*/
// Previous conversations ya context yaad rakhta hai
//
// Benefits:
// - Natural conversations
// - Context-aware answers
// - Better UX


/*=====================================================
  Applications Using LangChain
=====================================================*/

/*---------------- Chatbots ---------------------------*/
// First communication layer
// Large-scale user handling
//
// Examples:
// - Amazon support bot
// - Banking chatbots


/*---------------- AI Knowledge Assistants -------------*/
// Chatbots + custom data
//
// Examples:
// - PDFs
// - Company docs
// - Internal KB


/*---------------- AI Agents --------------------------*/
// - Decisions
// - Tools usage
// - Multi-step tasks


/*---------------- Workflow Automation ----------------*/
// - Repetitive tasks
// - Multi-step flows
//
// Examples:
// - Reports
// - Data processing


/*---------------- Summarization & Research ------------*/
// - PDF summaries
// - Research assistants


/*=====================================================
  Alternatives to LangChain
=====================================================*/

/*---------------- LlamaIndex --------------------------*/
// Focus:
// - Data indexing
// - Retrieval
//
// Best for:
// - RAG apps
// - Document Q&A


/*---------------- Haystack ----------------------------*/
// End-to-end NLP framework
//
// Use cases:
// - Enterprise search
// - QA systems
// - RAG pipelines


/*=====================================================
  High-Level Comparison
=====================================================*/
// LangChain:
// - Orchestration
// - Agents
// - Workflows
//
// LlamaIndex:
// - Data + Retrieval
//
// Haystack:
// - Search & QA systems
//
// Choice depend karta hai:
// - Use case
// - Complexity
// - Data needs
