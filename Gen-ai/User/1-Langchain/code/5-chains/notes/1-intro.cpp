/**
 * 📘 GenAI Playlist – LangChain
 * Lecture-7 | Video-9 | CampusX
 * Topic: Output Parsers & Chains
 *
 * --------------------------------------------------
 * BASIC FLOW (Manual Approach)
 * --------------------------------------------------
 *
 * LLM-based application ka flow pehle kuch is tarah hota tha:
 *
 * Prompt  →  invoke()  →  LLM  →  result/content  →  output
 *
 * Observation:
 * - Application chhote-chhote steps me ban rahi hoti hai
 * - Har step manually handle karna padta hai
 * - Jaise-jaise app complex hoti hai, manual approach inefficient ho jata hai
 *
 * --------------------------------------------------
 * PROBLEM WITH MANUAL APPROACH
 * --------------------------------------------------
 *
 * - Code repetitive ho jata hai
 * - Readability kam ho jaati hai
 * - Complex pipelines banana mushkil ho jata hai
 * - Scaling aur maintenance tough ho jata hai
 *
 * --------------------------------------------------
 * SOLUTION: CHAINS
 * --------------------------------------------------
 *
 * Chains ka use karke hum:
 * - Multiple steps ko connect karke ek pipeline bana sakte hain
 * - Prompt → LLM → Output → Next Step automatically flow karta hai
 *
 * Ye hi main reason hai chains use karne ka
 *
 * --------------------------------------------------
 * WHY WE USE CHAINS
 * --------------------------------------------------
 *
 * 1. Manual steps eliminate ho jaate hain
 * 2. Clean aur reusable pipeline banti hai
 * 3. Complex workflows easily handle hote hain
 * 4. Code zyada readable aur maintainable hota hai
 *
 * --------------------------------------------------
 * TYPES OF CHAINS (High Level)
 * --------------------------------------------------
 *
 * Is section me hum 3 major types of chains padhenge:
 *
 * 1. Sequential Chains
 *    - Ek step ka output next step ka input hota hai
 *
 * 2. Parallel Chains
 *    - Multiple steps ek saath parallel execute hote hain
 *
 * 3. Conditional Chains
 *    - Condition ke basis pe next chain decide hoti hai
 *
 * --------------------------------------------------
 * NEXT STEP
 * --------------------------------------------------
 *
 * Sabse pehle hum ek SIMPLE CHAIN bana kar dekhenge,
 * taaki chain ka basic working clearly samajh aa jaaye.
 *
 */
