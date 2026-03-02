/**
 * ---------------------------------------------------------------
 * 📘 GenAI Playlist – LangChain
 * Lecture-16 | Video-18 | CampusX
 * Topic: 🔧 Tools in LangChain
 * ---------------------------------------------------------------
 *
 * Is lecture mein hum LangChain ke "Tools" concept ko samjhenge.
 *
 * Is video mein:
 * - Different types of tools dekhenge
 *
 * Next video mein:
 * - Tool Calling kaise hota hai
 *
 * Aur aage chal kar hum dekhenge ki:
 * 👉 LangChain ka use karke Agents kaise banaye jaate hain
 *
 *
 * ---------------------------------------------------------------
 * ! What is a Tool?
 * ---------------------------------------------------------------
 *
 * Simple definition:
 *
 * 👉 Tool ek Python function (ya API) hota hai
 *    jo is tarah package kiya jaata hai
 *    taaki LLM usko samajh sake aur zarurat padne par call kar sake.
 *
 *
 * ---------------------------------------------------------------
 * ! LLM ki Natural Capabilities
 * ---------------------------------------------------------------
 *
 * LLM ki sabse important capability hoti hai:
 *
 * ✔ Sochna (Reasoning / Thinking)
 * ✔ Text generate karna
 *
 * Matlab:
 * - LLM problem ko samajh sakta hai
 * - Uska answer generate kar sakta hai
 *
 *
 * ---------------------------------------------------------------
 * ! Lekin LLM kya nahi kar sakta?
 * ---------------------------------------------------------------
 *
 * LLM apne aap kuch real-world actions nahi kar sakta.
 *
 * Example:
 *
 * ❌ Live data access karna
 * ❌ Reliable math calculations
 * ❌ External APIs call karna
 * ❌ Code run karna
 * ❌ Database se interact karna
 *
 *
 * ---------------------------------------------------------------
 * ! Simple Analogy
 * ---------------------------------------------------------------
 *
 * LLM ko ek human ki tarah samjho:
 *
 * Uske paas:
 * - 🧠 dimaag hai (thinking ability)
 * - 🗣 muh hai (text generate kar sakta hai)
 *
 * Lekin uske paas:
 * - ✋ haath nahi hain
 * - 🚶 pair nahi hain
 *
 * Matlab:
 * - wo khud se kaam perform nahi kar sakta
 *
 *
 * ---------------------------------------------------------------
 * ! Tools ka Role
 * ---------------------------------------------------------------
 *
 * Jab hum LLM ko tools dete hain,
 * toh wo external actions perform kar sakta hai.
 *
 * Example:
 *
 * LLM → tool call karega
 * Tool → actual task perform karega
 * Result → LLM ko wapas milega
 *
 * Is tarah LLM powerful applications bana sakta hai.
 *
 *
 * ---------------------------------------------------------------
 * ! Tools Actually Kya Hote Hain?
 * ---------------------------------------------------------------
 *
 * Technically:
 *
 * 👉 Tools bas Python functions hi hote hain
 *
 * Bas unko is tarah define kiya jaata hai
 * taaki LLM unhe samajh sake aur call kar sake.
 *
 *
 * ---------------------------------------------------------------
 * ! Types of Tools
 * ---------------------------------------------------------------
 *
 * LangChain mein tools mainly 2 types ke hote hain:
 *
 * 1️⃣ Built-in Tools
 *    - LangChain already provide karta hai
 *
 * 2️⃣ Custom Tools
 *    - Developer khud define karta hai
 *    - Python function ko tool bana sakta hai
 *
 *
 * ---------------------------------------------------------------
 * ! Summary
 * ---------------------------------------------------------------
 *
 * LLM:
 * - Think kar sakta hai
 * - Text generate kar sakta hai
 *
 * Tools:
 * - LLM ko real-world actions perform karne dete hain
 *
 * Tools = Python functions
 *
 * Next step:
 * 👉 Tool Calling kaise hota hai
 *
 */


 /**
 * ---------------------------------------------------------------
 * 📘 How Tools are Connected to Agents
 * ---------------------------------------------------------------
 *
 * Ab hum samjhenge ki Tools aur Agents ka relation kya hai.
 *
 *
 * ---------------------------------------------------------------
 * ! What is an AI Agent?
 * ---------------------------------------------------------------
 *
 * AI Agent ek aisa system hota hai jo:
 *
 * 👉 LLM se powered hota hai
 * 👉 Automatically decide karta hai kya karna hai
 * 👉 Aur goal achieve karne ke liye tools / APIs use karta hai
 *
 *
 * ---------------------------------------------------------------
 * ! Agent ke Core Components
 * ---------------------------------------------------------------
 *
 * Ek AI agent do main cheezon se milkar banta hai:
 *
 * 1️⃣ Reasoning / Decision Making
 * 2️⃣ Actions
 *
 *
 * ---------------------------------------------------------------
 * ! Reasoning Part
 * ---------------------------------------------------------------
 *
 * Reasoning ka kaam LLM karta hai.
 *
 * LLM decide karta hai:
 *
 * - Problem kya hai
 * - Kaunsa step lena chahiye
 * - Kaunsa tool use karna chahiye
 *
 * Example:
 *
 * User: "Weather in Delhi kya hai?"
 *
 * LLM sochega:
 * 👉 Mujhe weather API call karni chahiye
 *
 *
 * ---------------------------------------------------------------
 * ! Action Part
 * ---------------------------------------------------------------
 *
 * Action perform karne ka kaam tools karte hain.
 *
 * Tool:
 * - API call karega
 * - Database query karega
 * - Calculation karega
 * - Code run karega
 *
 *
 * ---------------------------------------------------------------
 * ! Agent = LLM + Tools
 * ---------------------------------------------------------------
 *
 * Agar simple formula mein samjhein:
 *
 * AI Agent =
 * LLM (reasoning + decision making)
 * +
 * Tools (actions perform karne ke liye)
 *
 *
 * ---------------------------------------------------------------
 * ! Example Workflow
 * ---------------------------------------------------------------
 *
 * User Question
 *      ↓
 * LLM reasoning
 *      ↓
 * Decide which tool to use
 *      ↓
 * Tool executes action
 *      ↓
 * Result returned to LLM
 *      ↓
 * Final answer generated
 *
 *
 * ---------------------------------------------------------------
 * ! Final Insight
 * ---------------------------------------------------------------
 *
 * LLM:
 * - Sochta hai
 * - Decision leta hai
 *
 * Tools:
 * - Kaam perform karte hain
 *
 * Dono milkar:
 *
 * 👉 AI Agent banate hain
 *
 */