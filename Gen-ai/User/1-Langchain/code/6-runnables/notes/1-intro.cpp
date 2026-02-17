/**
 * 📘 GenAI Playlist – LangChain
 * Lecture-8 | Video-10 | CampusX
 * Topic: Runnables
 *
 * --------------------------------------------------
 * RUNNABLES IN LANGCHAIN
 * --------------------------------------------------
 *
 * Chains kaam isiliye theek se kar paate hain
 * kyunki unke peeche RUNNABLES hote hain.
 *
 * Agar runnables ka concept clear nahi hai,
 * to chains samajhne aur debug karne me
 * problems aayengi.
 *
 * --------------------------------------------------
 * WHY DO RUNNABLES EXIST?
 * --------------------------------------------------
 *
 * 2022 me ChatGPT release hua.
 * Uske around hi OpenAI ka boom aaya.
 *
 * Isi time ke aas-paas LangChain team ne observe kiya:
 * - LLM-based applications ka demand rapidly badhne wala hai
 *
 * Examples:
 * - Har company ka apna chatbot hota ja raha hai
 * - Market me AI agents aa rahe hain
 *
 * To LangChain team ne socha:
 * - Ek aisa framework banana chahiye
 *   jisse LLM-based apps banana easy ho jaaye
 *
 * --------------------------------------------------
 * CORE OBSERVATION BY LANGCHAIN TEAM
 * --------------------------------------------------
 *
 * OpenAI sirf ek company hai.
 * Uske alawa aur bhi companies LLM bana rahi hain:
 *
 * - Anthropic
 * - Google
 * - Mistral
 *
 * Problem ye thi:
 * - Har company ka API alag tarike se behave karta hai
 * - Har API ka interface aur response format different hota hai
 *
 * --------------------------------------------------
 * FIRST PROBLEM LANGCHAIN SOLVED
 * --------------------------------------------------
 *
 * LangChain ne ek aisa framework design kiya:
 * - Jo kisi bhi company ke LLM ke saath kaam kar sake
 * - Common abstraction layer provide kare
 *
 * Iske baad:
 * - Different companies ke LLMs ke liye
 *   alag-alag classes build ki gayi
 *
 * Ye LangChain team ka pehla major solution tha.
 *
 * --------------------------------------------------
 * SECOND PROBLEM (REAL-WORLD APPLICATIONS)
 * --------------------------------------------------
 *
 * Dheere-dheere ek aur problem identify hui:
 *
 * Log jab LLM-based application banate hain,
 * to sirf LLM se interact karna hi kaam nahi hota.
 *
 * LLM interaction application ka sirf ek chhota part hota hai.
 *
 * --------------------------------------------------
 * REAL-WORLD PIPELINE EXAMPLE
 * --------------------------------------------------
 *
 * Example: PDF Reader Application
 *
 * Typical workflow:
 *
 * - PDF load karna
 * - PDF ko chhote chunks me split karna
 * - Un chunks ke embeddings banana
 * - Embeddings ko database me store karna
 * - Retriever ke through relevant chunks nikalna
 * - Relevant chunks LLM ko dena
 * - LLM output ko parse karna
 * - Final response user ko dena
 *
 * --------------------------------------------------
 * CONCLUSION
 * --------------------------------------------------
 *
 * Is poore workflow ko manage karne ke liye
 * sirf chains kaafi nahi hote.
 *
 * Yahin par RUNNABLES aate hain,
 * jo har step ko ek composable unit bana dete hain.
 * 
 * 
 * 
 */

/**
 *
 * --------------------------------------------------
 * LANGCHAIN COMPONENT-BASED APPROACH
 * --------------------------------------------------
 *
 * To LangChain ki team ne is problem ka solution ye nikala:
 *
 * - Workflow ke har part ke liye alag-alag components create kiye
 * - Har component ek specific task handle karta hai
 *
 * Agar main ek developer hoon,
 * to main in ready-made components ko use karke
 * apni LLM-based application bana sakta hoon
 *
 * Mujhe sab kuch scratch se likhne ki zarurat nahi hoti
 *
 * --------------------------------------------------
 * SIMPLE EXAMPLE (BASIC FLOW)
 * --------------------------------------------------
 *
 * Example:
 *
 * - User se topic input aayega
 * - Us topic se prompt banaya jaayega
 * - Prompt LLM ko diya jaayega
 * - LLM ka output user ko display hoga
 *
 * --------------------------------------------------
 * PRACTICAL LEARNING APPROACH
 * --------------------------------------------------
 *
 * Aage hum:
 *
 * - Simple prompt → LLM → output flow padhenge
 * - Chains ke through pipeline banana dekhenge
 * - Ek PDF Reader application bana kar dekhenge
 *
 * Taaki real-world workflow clearly samajh aa jaaye
 *
 */
