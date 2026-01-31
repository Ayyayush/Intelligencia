/*******************************************************
 * Lecture 2 – LangChain Components (Conceptual Understanding)
 *
 * Is lecture mein code nahi likha jaayega.
 * Sirf LangChain library ko conceptually samjha jaayega.
 *******************************************************/

/*=====================================================
  LangChain Documentation
=====================================================*/
// LangChain ki official documentation se:
// - Components
// - Architecture
// - Use cases
// samjhe jaate hain


/*=====================================================
  LangChain Components Overview
=====================================================*/
// LangChain ke 6 main components hote hain:
//
// 1. Models
// 2. Prompts
// 3. Chains
// 4. Memory
// 5. Indexes
// 6. Agents


/*=====================================================
  1. Models (Core Component)
=====================================================*/
// LangChain mein Models ek core interface hote hain
// Ye interface AI models ke saath interaction ka
// standard tareeka provide karta hai


/*-----------------------------------------------------
  History & Context (Chatbot Example)
-----------------------------------------------------*/
// Pehle:
// - Sab log apna chatbot banana chahte the
// - Chatbot banana bahut difficult tha
//
// Major challenges:
// - User ki baat samajhna
//   -> Ye NLU (Natural Language Understanding) problem thi
// - Correct response generate karna bhi mushkil tha


/*-----------------------------------------------------
  LLMs as a Breakthrough
-----------------------------------------------------*/
// LLMs (Large Language Models) aaye
// Unhone ek saath solve kiya:
// - NLU
// - Context-aware response generation
//
// Why LLMs are powerful:
// - Internet ke massive data par trained hote hain
// - Size bahut bada hota hai
// - Knowledge ka scope kaafi wide hota hai


/*-----------------------------------------------------
  Deployment Problem with LLMs
-----------------------------------------------------*/
// Itne bade LLMs:
// - Normal user apne server par run nahi kar sakta
//
// Reasons:
// - Cost bahut zyada hoti hai
// - Heavy compute infrastructure chahiye


/*-----------------------------------------------------
  Solution: APIs
-----------------------------------------------------*/
// Companies jaise:
// - OpenAI
// - Anthropic
//
// Ye companies:
// - LLMs ko apne servers par host karti hain
// - APIs provide karti hain
//
// Developers APIs ke through LLMs se interact karte hain


/*-----------------------------------------------------
  New Problem: Standardization
-----------------------------------------------------*/
// Agar ek hi codebase mein:
// - Multiple LLMs use karne ho
//
// Example:
// - OpenAI API
// - Anthropic (Sonnet) API
//
// Problems:
// - Har API ka alag code
// - Alag request format
// - Alag response format
//
// Standardization ek badi problem ban jaati hai


/*-----------------------------------------------------
  LangChain Solution: Model Interface
-----------------------------------------------------*/
// LangChain ne ek common model interface introduce kiya
//
// Benefits:
// - Different companies ke models ko same tarike se use kar sakte hain
// - Sirf minimal code changes required hote hain
//
// Isi ko LangChain ka Model Component kehte hain


/*-----------------------------------------------------
  Types of Models in LangChain
-----------------------------------------------------*/
// LangChain mein mainly 2 types ke models hote hain:
//
// 1. Language Models (LLMs)
//    - Input: Text
//    - Output: Text
//    - Use cases:
//      * Chatbots
//      * Text generation
//      * Q&A systems
//
// 2. Embedding Models
//    - Input: Text
//    - Output: Vectors (numbers)
//    - Use cases:
//      * Semantic search
//      * Similarity search
//      * Retrieval-based systems


/*-----------------------------------------------------
  Models Summary
-----------------------------------------------------*/
// LangChain models ek standard interface provide karte hain
// Easily LLM providers switch kiye ja sakte hain
// Two main model types:
// - Language Models
// - Embedding Models
// Embeddings ka main use:
// - Semantic search & retrieval systems


/*=====================================================
  2. Prompts
=====================================================*/
// Jab hum kisi LLM ke saath kaam karte hain,
// jo input hum model ko bhejte hain usse Prompt kehte hain
//
// LangChain mein prompts:
// - Powerful hote hain
// - Dynamic ho sakte hain
// - Reusable ho sakte hain


/*-----------------------------------------------------
  Prompt Capabilities in LangChain
-----------------------------------------------------*/
// Role-based prompts:
// - System role
// - User role
// - Assistant role
//
// Few-shot prompting:
// - Prompt ke andar examples dena
// - Taaki model expected output samajh sake
//
// LangChain prompts ko:
// - Structured
// - Flexible
// - Reusable
// banata hai


/*=====================================================
  3. Chains
=====================================================*/
// Chains LangChain ka sabse important component hai
// Isi component ke naam par LangChain ka naam rakha gaya hai


/*-----------------------------------------------------
  What is a Chain?
-----------------------------------------------------*/
// Chain ek aisa component hai jisse:
// - Pipelines / workflows build kiye jaate hain
//
// Simple words mein:
// Chain = Multiple steps ko ek flow mein jodna


/*-----------------------------------------------------
  Pipeline Example
-----------------------------------------------------*/
// Maan lo:
// - Ek LLM hai
// - Input: English text
// - Output: Hindi summary
//
// Flow:
// Input Text -> LLM -> Hindi Summary
//
// Ye poora flow ek LLM application ban jaata hai


/*-----------------------------------------------------
  Why Chains Are Useful?
-----------------------------------------------------*/
// Agar manually handle karein:
// - Har jagah input-output sambhalna padega
// - Code complex ho jaata hai
//
// Chains automatically:
// - Ek stage ka output next stage ka input bana deti hain
//
// Developer ko:
// - Sirf chain define karni hoti hai
// - Input dena hota hai
//
// Baaki heavy lifting:
// - LangChain behind the scenes karta hai
//
// Types:
// - Parallel chains
// - Conditional chains


/*-----------------------------------------------------
  Chains Key Takeaway
-----------------------------------------------------*/
// Prompts decide karte hain:
// - Model ko kya aur kaise bolna hai
//
// Chains decide karti hain:
// - Multiple steps ko kaise pipeline mein jodna hai
//
// Isi wajah se LangChain complex LLM workflows ko simple bana deta hai





/*=====================================================
  4. Indexes
=====================================================*/

// Indexes LangChain ka wo component hai jo:
// - LLM ko external knowledge se connect karta hai
//
// External knowledge examples:
// - PDFs
// - Websites
// - Databases


/*-----------------------------------------------------
  Why Indexes Are Needed?
-----------------------------------------------------*/
// Kabhi-kabhi LLM ke paas required data nahi hota
//
// Examples:
// - Company leave policy
// - Internal rule books
// - Private documents
//
// Ye data public domain mein available nahi hota


/*-----------------------------------------------------
  Solution Using Indexes
-----------------------------------------------------*/
// Indexes ke through:
// - LLM ko private / custom data se connect kiya jaata hai
//
// Jaise:
// - Company documents
// - PDFs
// - Internal databases


/*-----------------------------------------------------
  Components Inside Indexes
-----------------------------------------------------*/
// 1. Document Loader
//    - External data load karta hai
//    - PDF / Web / DB loaders
//
// 2. Text Splitter
//    - Large documents ko small chunks mein todta hai
//    - Context limit handle karne ke liye
//
// 3. Vector Store
//    - Text chunks ko embeddings mein convert karta hai
//    - Embeddings store karta hai
//
// 4. Retriever
//    - User query ke basis par relevant chunks nikalta hai
//    - LLM ko context provide karta hai


/*-----------------------------------------------------
  Overall Index Flow
-----------------------------------------------------*/
// External Data
//    ↓
// Document Loader
//    ↓
// Text Splitter
//    ↓
// Embeddings
//    ↓
// Vector Store
//    ↓
// Retriever
//    ↓
// LLM


/*-----------------------------------------------------
  Indexes Key Idea
-----------------------------------------------------*/
// Indexes ke through:
// - LLM ko custom / private data ka access milta hai
//
// Is approach ko RAG (Retrieval Augmented Generation) kehte hain


/*-----------------------------------------------------
  Indexes Summary
-----------------------------------------------------*/
// Indexes external knowledge ko LLM se connect karte hain
// Private data ke liye bahut important component hai
// Document loader, splitter, vector store aur retriever milkar:
// - Context-aware answers generate karte hain






/*******************************************************
 * 5th Component – Memory (LangChain)
 *******************************************************/

/*
 * Important Concept:
 * LLM API calls are STATELESS
 *
 * Stateless ka matlab:
 * - Har API call independent hoti hai
 * - LLM ko yaad nahi hota ki pehle kya poocha gaya tha
 *
 * Example:
 * User: Who is Narendra Modi?
 * User: How old is he?
 *
 * Problem:
 * - LLM ko "he" ka context yaad nahi
 * - Kyunki usse pehla question yaad hi nahi hai
 *
 * Reason:
 * - APIs stateless hoti hain
 * - Har request fresh hoti hai
 *
 * Agar aisa chatbot banaya jaaye:
 * - Jo pehle ki baat yaad na rakhe
 * - Toh user experience bahut frustrating hoga
 *
 * Solution:
 * - LangChain ka Memory component
 *
 * Memory component:
 * - Previous interactions ko store karta hai
 * - Context ko future queries ke saath attach karta hai
 * - Chatbot ko "conversation-aware" banata hai
 */


/*=====================================================
  Types of Memory in LangChain
=====================================================*/

/*
 * 1) Conversational Buffer Memory
 *    - Puri conversation ko store karta hai
 *    - Simple but memory size grow hoti rehti hai
 *
 * 2) Conversational Buffer Window Memory
 *    - Sirf recent N messages store karta hai
 *    - Memory size controlled rehti hai
 *
 * 3) Summarizer-Based Memory
 *    - Old conversations ko summarize karta hai
 *    - Important context retain karta hai
 *
 * 4) Custom Memory
 *    - Developer apni logic ke hisaab se memory design karta hai
 *    - Advanced use cases ke liye
 */




/*******************************************************
 * 6th Component – Agents (LangChain)
 *******************************************************/

/*
 * Agents ka use karke hum AI Agents bana sakte hain
 *
 * LLMs ki 2 sabse badi capabilities:
 * - NLU  (Natural Language Understanding)
 * - Text Generation
 *
 * Sabse obvious LLM use case:
 * - Chatbot
 *
 * Example:
 * - ChatGPT khud ek chatbot hai
 */


/*=====================================================
  Why Agents Are Powerful?
=====================================================*/

/*
 * Difference:
 * Chatbot:
 * - Sirf text ka reply deta hai
 *
 * AI Agent:
 * - Decision le sakta hai
 * - Tools use kar sakta hai
 * - Multiple steps execute kar sakta hai
 */


/*=====================================================
  Real-World Example (Travel Website)
=====================================================*/

/*
 * User query:
 * "Summer ke time pe best travelling spots kya hain India mein?"
 *
 * Agar simple chatbot ho:
 * - Sirf recommendations dega
 *
 * Agar AI Agent ho:
 * - Cheap flights search karega
 * - Prices compare karega
 * - Best option choose karega
 * - Booking bhi kar sakta hai
 *
 * Matlab:
 * - Agent = LLM + Tools + Decision-making
 */
