/*******************************************************
 * Lecture 1 – Introduction Notes
 * CampusX Generative AI (GenAI)
 *******************************************************/


/*=====================================================
  What is Generative AI?
=====================================================*/
// Generative AI ek type ki Artificial Intelligence hai
// jo existing data se patterns seekh kar
// naya content generate karti hai
//
// Content types:
// - Text
// - Images
// - Music
// - Code
//
// Pehle AI zyada tar decision-making tak limited thi
// GenAI ke aane ke baad creative tasks bhi possible ho gaye


/*=====================================================
  Background: Before Generative AI
=====================================================*/

/*------------------ Symbolic AI (1980s) ----------------*/
// - Rule-based systems
// - Logic & predefined rules
// - IF–ELSE based systems

/*---------------------- Fuzzy AI ----------------------*/
// - Uncertainty aur imprecision handle karti thi
// - Partial truth values (0 se 1 ke beech)

/*------------------- Limitations ----------------------*/
// - Creative tasks possible nahi the
//   (writing, images, music, etc.)
// - Focus sirf decision systems par tha
//
// Generative AI ne ye limitation tod di


/*=====================================================
  AI Evolution Path
=====================================================*/
// Artificial Intelligence (AI)
//          ↓
// Machine Learning (ML)
//          ↓
// Deep Learning (DL)
//          ↓
// Generative AI (GenAI)


/*=====================================================
  GenAI Mein Kya Kar Sakte Hain?
=====================================================*/
// GenAI ke 2 major approaches hote hain:
//
// 1. Use Foundation Models
//    - Prompt engineering
//    - APIs ka use
//
// 2. Build / Customize Foundation Models
//    - Fine-tuning
//    - RLHF
//    - Training pipelines


/*=====================================================
  User Side vs Builder Side (Important)
=====================================================*/
// Prompt Engineering         -> User
// RAG                        -> User
// Fine-tuning                -> User + Builder
// RLHF                       -> Builder
// AI Agents                  -> Builder
// Vector Databases           -> Builder
//
// Rule:
// Naya term aaye -> check karo user side ya builder side


/*=====================================================
  Impact Areas of Generative AI
=====================================================*/
// - Customer Support (chatbots, ticket handling)
// - Content Creation
// - Education (personal tutors)
// - Software Development (code generation)


/*=====================================================
  Is Generative AI Successful?
=====================================================*/
// Internet vs Crypto comparison
//
// Real-world problem solving?
// - Banking
// - Shopping
// - Support tickets
// - Personal tutors
//
// Answer: YES
//
// Daily life impact:
// - Economy pe effect
// - Easy to use
// - New jobs create ho rahe hain
//
// Full potential tak nahi pahuncha
// but very close


/*=====================================================
  Prerequisites
=====================================================*/
// - Machine Learning fundamentals
// - Deep Learning fundamentals
// - Deep Learning frameworks
// - PyTorch or TensorFlow


/*=====================================================
  Curriculum Starts With (Builder Perspective)
=====================================================*/

/*---------------- Transformer Architecture -------------*/
// Transformer architecture GenAI ka core foundation hai
// Almost saare modern LLMs isi par based hote hain
// (GPT, Gemini, Claude)


/*=====================================================
  Types of Transformers
=====================================================*/

/*---------------- Encoder-Only -------------------------*/
// - Input understanding ke liye use hota hai
// - Best for understanding tasks
//
// Examples:
// - BERT
// - RoBERTa
//
// Use cases:
// - Classification
// - NER
// - Sentiment analysis


/*---------------- Decoder-Only -------------------------*/
// - Sirf text generation ke liye optimized
// - Next-token prediction
//
// Examples:
// - GPT series
//
// Use cases:
// - Text generation
// - Chatbots
// - Code generation


/*---------------- Encoder–Decoder (Seq2Seq) ------------*/
// - Encoder input samajhta hai
// - Decoder output generate karta hai
//
// Examples:
// - T5
// - BART
//
// Use cases:
// - Translation
// - Summarization
// - Question Answering


/*---------------- GPT Architecture ---------------------*/
// - Decoder-only transformer
// - Autoregressive model
// - Large-scale foundation model
//
// Most GenAI apps isi category mein aati hain


/*=====================================================
  Pretraining
=====================================================*/
// Model ko large-scale generic data par train karna
// taaki language understanding develop ho
//
// Topics:
// - Training objectives
// - Tokenization (Word, Subword)
// - Training strategies
// - Long context handling
// - Data noise & bias


/*=====================================================
  Optimization
=====================================================*/
// Foundation models bahut large hote hain
// isliye optimization zaroori hoti hai
//
// Training optimization:
// - Faster training
// - Efficient GPU usage
//
// Model compression:
// - Quantization
// - Pruning
// - Distillation
//
// Inference optimization:
// - Low latency
// - Fast response
// - Production readiness


/*=====================================================
  Fine-Tuning
=====================================================*/
// Pretrained model ko specific task ke liye customize karna
//
// Types:
// - Task-specific fine-tuning
// - RLHF (alignment & safety)
// - Instruction tuning
// - Continual pretraining


/*=====================================================
  Evaluation
=====================================================*/
// Model quality measure karne ke metrics:
// - Accuracy
// - BLEU / ROUGE
// - Human evaluation
// - Bias & safety checks
//
// Decide karta hai model usable hai ya nahi


/*=====================================================
  Deployment
=====================================================*/
// Final stage jahan model:
// - API ban jaata hai
// - Production mein deploy hota hai
//
// Includes:
// - Hosting
// - Scaling
// - Monitoring
// - Cost optimization


/*=====================================================
  Big Picture Summary (Builder)
=====================================================*/
// Transformers
//      ↓
// Pretraining
//      ↓
// Optimization
//      ↓
// Fine-tuning
//      ↓
// Evaluation
//      ↓
// Deployment


/*=====================================================
  User Perspective (Using Generative AI)
=====================================================*/
// Focus:
// - Existing models ka use
// - Real-world applications banana
// - Training from scratch nahi


/*---------------- Building Basic LLM Apps --------------*/
// Examples:
// - Chatbots
// - Q&A systems
// - Text summarizers


/*---------------- Open vs Closed Source LLMs -----------*/
// Open Source:
// - Weights public
// - More control
// - Local deployment
//
// Examples:
// - LLaMA
// - Mistral
// - Falcon
//
// Closed Source:
// - API-based
// - Easy to use
//
// Examples:
// - GPT
// - Gemini
// - Claude


/*---------------- Using LLM APIs -----------------------*/
// - No infra management
// - Fast development
//
// Use cases:
// - Text generation
// - Chat
// - Code assistance


/*---------------- LangChain ----------------------------*/
// LLM application framework
// Helps with:
// - Prompt management
// - Chains & workflows
// - Tool integration


/*---------------- Hugging Face -------------------------*/
// Platform for:
// - Models
// - Datasets
// - Transformers
//
// Used for experimentation & fine-tuning


/*---------------- Ollama -------------------------------*/
// Tool to run LLMs locally
// Useful for:
// - Local development
// - Privacy-focused apps


/*=====================================================
  Prompt Engineering
=====================================================*/
// Effective prompts design karna
// Includes:
// - Clear instructions
// - Context
// - Examples


/*=====================================================
  RAG (Retrieval Augmented Generation)
=====================================================*/
// LLM + external data
//
// Flow:
// - Retrieve data
// - Pass to LLM
// - Generate accurate answers
//
// Used when:
// - Data dynamic ho
// - Model ke paas knowledge na ho


/*=====================================================
  Fine-Tuning (User Level)
=====================================================*/
// Simpler fine-tuning
// Small datasets
// Domain adaptation ke liye


/*=====================================================
  Agents
=====================================================*/
// AI agents:
// - Decisions lete hain
// - Tools use karte hain
// - Multi-step tasks perform karte hain
//
// Examples:
// - Autonomous workflows
// - Tool-using agents


/*=====================================================
  LLM Ops
=====================================================*/
// LLM applications ka operational side
//
// Includes:
// - Deployment
// - Monitoring
// - Logging
// - Cost optimization
//
// MLOps ka LLM-specific version


/*=====================================================
  Miscellaneous
=====================================================*/
// Supporting concepts, tools aur practices
// jo GenAI apps ko build, scale aur maintain karne mein help karte hain
