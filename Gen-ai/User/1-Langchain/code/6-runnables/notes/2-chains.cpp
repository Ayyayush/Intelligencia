/**
 *
 * --------------------------------------------------
 * LANGCHAIN: CHAINS KA EUREKA MOMENT
 * --------------------------------------------------
 *
 * Humne dekha ki LangChain ki team ne
 * workflow ke liye alag-alag components bana diye.
 *
 * Lekin iske baad ek **EUREKA MOMENT** aaya.
 *
 * LangChain team ne notice kiya ki:
 * - AI engineers alag-alag components integrate kar rahe hain
 * - Alag-alag chains build kar rahe hain
 *
 * Lekin in sabme kuch cheezein COMMON hoti hain.
 *
 * --------------------------------------------------
 * COMMON OBSERVATIONS
 * --------------------------------------------------
 *
 * - Har jagah prompt banana hi padta hai
 * - Prompt bhejne ka kaam mostly manual hota tha
 *
 * LangChain ne socha:
 * - Agar ye kaam manually na karke
 * - Automatically kar diya jaaye to?
 *
 * Matlab:
 * - Prompt khud handle ho
 * - LLM call khud ho
 * - Direct result mil jaaye
 *
 * Isse AI engineer ka kaam
 * kaafi aasan ho jaayega.
 *
 * --------------------------------------------------
 * SIMPLEST CHAIN: LLM CHAIN
 * --------------------------------------------------
 *
 * Inhi observations se sabse simple chain nikli:
 *
 * 👉 LLM Chain
 *
 * - Prompt banana
 * - LLM ko bhejna
 * - Response lena
 *
 * Sab kuch ek chain ke andar.
 *
 * --------------------------------------------------
 * COMPLEX TASKS KA PROBLEM
 * --------------------------------------------------
 *
 * LangChain team yahin nahi ruki.
 *
 * Unhone socha:
 * - Agar complex tasks ke liye bhi
 *   runnable chains bana di jaayein to?
 *
 * Example:
 * - Retrieval required hai
 * - Query bhejni hai
 * - Vector database se kuch retrieve karna hai
 *
 * Maan lo question "Linear Regression" se related hai,
 * to poora database search karne ke bajay
 * pehle relevant parts identify kiye jaayein.
 *
 * --------------------------------------------------
 * RETRIEVER + LLM IDEA
 * --------------------------------------------------
 *
 * To LangChain team ne socha:
 *
 * Prompt → LLM → Response
 *
 * Is flow ko aur powerful bana diya jaaye:
 *
 * Query → Retriever → Relevant Chunks → LLM → Response
 *
 * Isi idea se bana:
 *
 * 👉 RetrieverQA Chain
 *
 * --------------------------------------------------
 * CHAINS BEYOND BASICS
 * --------------------------------------------------
 *
 * LangChain yahin par nahi ruka.
 *
 * Aage aur bhi bahut saari chains banayi gayi,
 * jo real-world use cases ko cover karti hain.
 *
 * Ab hum dekhenge:
 * - Top 15 most frequently used chains
 * - Unka short aur clear description
 *
 */

 /**
 *
 * --------------------------------------------------
 * LANGCHAIN: TOP 15 MOST FREQUENTLY USED CHAINS
 * (With Short Description)
 * --------------------------------------------------
 *
 * Neeche LangChain ke **sabse commonly used chains**
 * diye gaye hain, saath hi unka **short explanation**.
 *
 * --------------------------------------------------
 *
 * 1. LLM Chain
 * --------------------------------------------------
 * - Sabse basic chain
 * - Prompt → LLM → Response
 * - Simple text generation tasks ke liye use hoti hai
 *
 * --------------------------------------------------
 *
 * 2. Sequential Chain
 * --------------------------------------------------
 * - Multiple steps ek ke baad ek execute hote hain
 * - Ek step ka output next step ka input banta hai
 *
 * --------------------------------------------------
 *
 * 3. Simple Sequential Chain
 * --------------------------------------------------
 * - Sequential chain ka simplified version
 * - Jab sirf ek input aur ek output ho
 *
 * --------------------------------------------------
 *
 * 4. Parallel Chain
 * --------------------------------------------------
 * - Multiple tasks ek saath execute hote hain
 * - Independent subtasks ke liye useful
 *
 * --------------------------------------------------
 *
 * 5. Conditional Chain (Branch Chain)
 * --------------------------------------------------
 * - Condition ke basis par flow decide hota hai
 * - If / Else type logic implement hota hai
 *
 * --------------------------------------------------
 *
 * 6. Router Chain
 * --------------------------------------------------
 * - Input ke type ke basis par
 *   correct chain ko route karta hai
 *
 * --------------------------------------------------
 *
 * 7. RetrievalQA Chain
 * --------------------------------------------------
 * - Query → Retriever → LLM → Answer
 * - Vector database se relevant context nikalta hai
 *
 * --------------------------------------------------
 *
 * 8. Conversational Retrieval Chain
 * --------------------------------------------------
 * - Chat history ke saath retrieval karta hai
 * - Chatbots aur Q&A systems ke liye useful
 *
 * --------------------------------------------------
 *
 * 9. Stuff Documents Chain
 * --------------------------------------------------
 * - Sab documents ko ek saath LLM ko pass karta hai
 * - Small documents ke liye suitable
 *
 * --------------------------------------------------
 *
 * 10. Map Reduce Chain
 * --------------------------------------------------
 * - Documents ko pehle map karta hai
 * - Phir results ko reduce karke final output deta hai
 * - Large documents ke liye useful
 *
 * --------------------------------------------------
 *
 * 11. Refine Chain
 * --------------------------------------------------
 * - Pehle ek initial answer banata hai
 * - Phir naye documents ke saath answer refine karta hai
 *
 * --------------------------------------------------
 *
 * 12. Self-Ask with Search Chain
 * --------------------------------------------------
 * - LLM khud sub-questions generate karta hai
 * - External search ya tool use karta hai
 *
 * --------------------------------------------------
 *
 * 13. Tool Calling Chain
 * --------------------------------------------------
 * - LLM external tools ko call karta hai
 * - APIs, calculators, DB queries ke liye use hota hai
 *
 * --------------------------------------------------
 *
 * 14. Agent Executor Chain
 * --------------------------------------------------
 * - LLM decide karta hai kaunsa tool kab use karna hai
 * - Autonomous AI agents ka base
 *
 * --------------------------------------------------
 *
 * 15. SQL Database Chain
 * --------------------------------------------------
 * - Natural language → SQL query → DB result
 * - Databases se baat karne ke liye use hoti hai
 *
 * --------------------------------------------------
 * SUMMARY
 * --------------------------------------------------
 *
 * - Chains LLM-based applications ko structured banati hain
 * - Simple text generation se lekar
 *   complex retrieval aur agent workflows tak use hoti hain
 * - Modern LangChain me ye chains
 *   Runnable-based pipelines par built hoti hain
 *
 */
