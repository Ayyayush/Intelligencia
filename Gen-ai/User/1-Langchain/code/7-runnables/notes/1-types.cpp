/**
 * 📘 GenAI Playlist – LangChain
 * Lecture-9 | Video-11 | CampusX
 * Topic: Runnables (Continued)
 *
 * --------------------------------------------------
 * LECTURE CONTEXT
 * --------------------------------------------------
 *
 * Ye lecture directly **previous lecture** se connected hai.
 *
 * Pichhle lecture me humne:
 * - Runnables ka basic idea samjha
 * - Nakli LLM aur PromptTemplate bana ke dekha
 * - Common interface (invoke) ka concept samjha
 *
 * --------------------------------------------------
 * AGENDA OF THIS LECTURE
 * --------------------------------------------------
 *
 * Is lecture me hum mainly **types of runnables** dekhenge.
 *
 * Sabse pehle:
 *
 * --------------------------------------------------
 * 1. TASK-SPECIFIC RUNNABLES
 * --------------------------------------------------
 *
 * Ye wo runnables hote hain:
 * - Jo pehle se LangChain ke core components the
 * - Jinhe later standardize karke runnable bana diya gaya
 *
 * Matlab:
 * - Existing LangChain components
 * - Ab ek common runnable interface follow karte hain
 *
 * Examples:
 *
 * - ChatOpenAI / ChatGroq
 *   → LLM ko run karne ke liye
 *
 * - PromptTemplate
 *   → Prompt ko format karne ke liye
 *
 * Ye saare ab:
 * - invoke()
 * - batch()
 *
 * jaise common methods support karte hain.
 *
 * --------------------------------------------------
 * 2. RUNNABLE PRIMITIVES
 * --------------------------------------------------
 *
 * Runnable primitives wo runnables hote hain
 * jo directly koi AI task nahi karte,
 * balki **dusre runnables ko connect** karne me help karte hain.
 *
 * Inka role hai:
 * - Workflow banana
 * - Control flow handle karna
 *
 * Pichhle lecture me humne
 * Nakli LLM ka example dekha tha,
 * wahi concept yahan bhi apply hota hai.
 *
 * --------------------------------------------------
 * TYPES OF RUNNABLE PRIMITIVES
 * --------------------------------------------------
 *
 * LangChain me commonly used runnable primitives:
 *
 * 1. RunnableSequence
 *    → Runnables ko sequence me connect karta hai
 *
 * 2. RunnableParallel
 *    → Multiple runnables ko parallel execute karta hai
 *
 * 3. RunnableMap
 *    → Input ko map karke multiple runnables me bhejta hai
 *
 * 4. RunnableBranch
 *    → Condition ke basis par execution path decide karta hai
 *
 * 5. RunnableLambda
 *    → Custom Python function ko runnable banata hai
 *
 * 6. RunnablePassthrough
 *    → Input ko bina change kiye aage pass karta hai
 *
 * --------------------------------------------------
 * CONCLUSION
 * --------------------------------------------------
 *
 * Is lecture ke baad:
 * - Hume pata chalega kaunsa runnable
 *   kis situation me use hota hai
 * - Aur kaise complex workflows
 *   easily build kiye ja sakte hain
 *
 */
