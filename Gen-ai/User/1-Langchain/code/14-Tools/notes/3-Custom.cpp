/**
 * ---------------------------------------------------------------
 * 📘 Custom Tools in LangChain
 * ---------------------------------------------------------------
 *
 * Custom Tool ek aisa tool hota hai
 * jo developer khud define karta hai.
 *
 * Matlab:
 * - Aap khud ek Python function likhte ho
 * - Usko tool format mein convert kar dete ho
 * - Taaki LLM us function ko call kar sake
 *
 *
 * ---------------------------------------------------------------
 * ! Custom Tools kab use karte hain?
 * ---------------------------------------------------------------
 *
 * Custom tools useful hote hain jab:
 *
 * 1️⃣ Aap apni khud ki APIs call karna chahte ho
 *
 * Example:
 * - Weather API
 * - Payment API
 * - Internal company APIs
 *
 *
 * 2️⃣ Aap business logic encapsulate karna chahte ho
 *
 * Example:
 * - Discount calculation
 * - Pricing rules
 * - Recommendation logic
 *
 *
 * 3️⃣ Aap chahte ho ki LLM interact kare:
 *
 * - Aapke database se
 * - Aapke product se
 * - Aapke application se
 *
 * Example:
 * - Order lookup
 * - Inventory check
 * - Customer data fetch
 *
 *
 * ---------------------------------------------------------------
 * ! Ways to Create a Custom Tool
 * ---------------------------------------------------------------
 *
 * LangChain mein custom tool banane ke 3 common tarike hote hain:
 *
 * 1️⃣ Using @tool Decorator
 * 2️⃣ Using StructuredTool + Pydantic
 * 3️⃣ Using BaseTool Class
 *
 *
 * ---------------------------------------------------------------
 * ! 1️⃣ Using @tool (Simplest Method)
 * ---------------------------------------------------------------
 *
 * Ye sabse simple method hai.
 *
 * Bas:
 * - Ek Python function likho
 * - Uske upar @tool decorator laga do
 *
 * Example:
 *
 * @tool
 * def add_numbers(a: int, b: int) -> int:
 *     return a + b
 *
 * Ab LLM is function ko tool ki tarah call kar sakta hai.
 *
 *
 * ---------------------------------------------------------------
 * ! 2️⃣ StructuredTool + Pydantic
 * ---------------------------------------------------------------
 *
 * StructuredTool ek special type ka tool hota hai
 * jisme tool ka input structured format follow karta hai.
 *
 * Ye structure usually Pydantic schema se define kiya jaata hai.
 *
 * Benefit:
 * - Input validation hoti hai
 * - Complex tools ke liye better hota hai
 *
 *
 * ---------------------------------------------------------------
 * ! 3️⃣ BaseTool Class
 * ---------------------------------------------------------------
 *
 * BaseTool LangChain ka abstract base class hai
 * jiske upar saare tools built hote hain.
 *
 * Ye define karta hai:
 *
 * - Tool ka structure
 * - Tool ka interface
 * - Execution behavior
 *
 *
 * Developer:
 * - BaseTool ko extend karta hai
 * - Aur custom logic implement karta hai
 *
 *
 * ---------------------------------------------------------------
 * ! Important Insight
 * ---------------------------------------------------------------
 *
 * LangChain ke saare tools internally
 * BaseTool par hi built hote hain.
 *
 * Example:
 *
 * @tool decorator
 * StructuredTool
 *
 * Ye sab BaseTool ke upar hi implemented hain.
 *
 *
 * ---------------------------------------------------------------
 * ! Summary
 * ---------------------------------------------------------------
 *
 * Custom Tool banane ke main methods:
 *
 * ✔ @tool decorator → easiest
 * ✔ StructuredTool → structured inputs
 * ✔ BaseTool → full customization
 *
 */