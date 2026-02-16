/**
 *
 * --------------------------------------------------
 * WHAT ARE RUNNABLES?
 * --------------------------------------------------
 *
 * Runnables ka main purpose LangChain mein
 * workflows ko standardize aur simplify karna hai.
 *
 * Runnable ko hum ek **unit of work** samajh sakte hain.
 *
 * Matlab:
 * - Runnable ko ek input diya ja sakta hai
 * - Runnable us input par kaam karta hai
 * - Aur ek output return karta hai
 *
 * --------------------------------------------------
 * COMMON STRUCTURE OF RUNNABLES
 * --------------------------------------------------
 *
 * LangChain mein jo bhi runnable exist karta hai,
 * wo ek **common structure / interface** follow karta hai.
 *
 * Common methods:
 *
 * - invoke()
 *   → Single input ke liye execution
 *
 * - batch()
 *   → Multiple inputs ko ek saath process karne ke liye
 *
 * --------------------------------------------------
 * WHY COMMON INTERFACE MATTERS
 * --------------------------------------------------
 *
 * Kyunki saare runnables ek common interface follow karte hain:
 *
 * - Ye aapas mein easily connect ho sakte hain
 * - Ek runnable ka output
 *   next runnable ka input ban jaata hai
 *
 * Example:
 *
 * Runnable-1 → Runnable-2 → Runnable-3 → ...
 *
 * --------------------------------------------------
 * WORKFLOW = A RUNNABLE
 * --------------------------------------------------
 *
 * Jab hum multiple runnables ko connect karke
 * ek workflow banate hain,
 *
 * Toh:
 * - Wo poora workflow khud bhi
 *   ek **Runnable** ban jaata hai
 *
 * Matlab:
 * - Workflow ko bhi input diya ja sakta hai
 * - Workflow se bhi output milta hai
 *
 * --------------------------------------------------
 * LEGO BLOCKS ANALOGY
 * --------------------------------------------------
 *
 * Runnables ko LEGO blocks ke example se samjho.
 *
 * Jaise LEGO blocks kuch core principles follow karte hain:
 *
 * 1. Unit of Work
 *    → Har block ek chhota kaam karta hai
 *
 * 2. Common Interface
 *    → Saare blocks ek jaise joints follow karte hain
 *
 * 3. Connectability
 *    → Blocks aapas mein easily connect ho jaate hain
 *
 * 4. Resultant Structure
 *    → Multiple blocks milkar
 *      ek naya LEGO structure bana dete hain
 *      jo khud bhi ek LEGO block jaisa behave karta hai
 *
 * --------------------------------------------------
 * CONCLUSION
 * --------------------------------------------------
 *
 * Runnables LangChain ka backbone hain,
 * jo complex AI workflows ko:
 *
 * - Modular
 * - Reusable
 * - Scalable
 *
 * banate hain.
 *
 */
