/**
 * --------------------------------------------------
 * RUNNABLE PRIMITIVES – ALL TYPES
 * --------------------------------------------------
 *
 * Is session me hum **saare Runnable Primitives**
 * ko cover karenge, jo LangChain me workflows
 * banane ke liye use hote hain.
 *
 * --------------------------------------------------
 * ! 1️⃣ RUNNABLE SEQUENCE
 * --------------------------------------------------
 *
 * - 2 ya usse zyada runnables ko
 *   **sequential order** me connect karta hai
 *
 * - Ek runnable ka output
 *   next runnable ka input ban jaata hai
 *
 * Use-case:
 * - Jab steps dependent ho
 *
 * Example flow:
 * Prompt → LLM → Parser → Next Prompt → LLM
 *
 * --------------------------------------------------
 * ! 2️⃣ RUNNABLE PARALLEL
 * --------------------------------------------------
 *
 * - Multiple runnables ko
 *   **same time (parallel)** me execute karta hai
 *
 * - Har runnable ko **same input** milta hai
 *
 * Use-case:
 * - Ek hi input par multiple independent tasks
 *
 * Example:
 * - Joke generate
 * - Joke explain
 * - Joke ka word count
 *
 * --------------------------------------------------
 * ! 3️⃣ RUNNABLE MAP
 * --------------------------------------------------
 *
 * - Input ko multiple runnables me
 *   **map** karta hai
 *
 * - Mostly list / collection type input ke saath use hota hai
 *
 * Use-case:
 * - Multiple items par same processing apply karni ho
 *
 * Example:
 * - Multiple questions → same prompt + LLM
 *
 * --------------------------------------------------
 * ! 4️⃣ RUNNABLE BRANCH
 * --------------------------------------------------
 *
 * - **Conditional execution** provide karta hai
 * - If / Else type logic implement hota hai
 *
 * - Condition ke basis par
 *   ek specific runnable execute hota hai
 *
 * Use-case:
 * - Sentiment based response
 * - Length based summarization
 *
 * Example:
 * - If positive → positive reply
 * - Else → negative reply
 *
 * --------------------------------------------------
 * ! 5️⃣ RUNNABLE LAMBDA
 * --------------------------------------------------
 *
 * - Normal Python function ko
 *   runnable me convert karta hai
 *
 * - Custom logic add karne ke liye use hota hai
 *
 * Use-case:
 * - Word count
 * - Text cleanup
 * - Metadata extraction
 *
 * --------------------------------------------------
 * ! 6️⃣ RUNNABLE PASSTHROUGH
 * --------------------------------------------------
 *
 * - Input ko **bina change kiye**
 *   aage pass kar deta hai
 *
 * - Mostly parallel chains me use hota hai
 *
 * Use-case:
 * - Original output ko preserve karna
 *
 * --------------------------------------------------
 * FINAL SUMMARY
 * --------------------------------------------------
 *
 * Runnable Primitives LangChain ka backbone hain:
 *
 * - RunnableSequence   → step-by-step flow
 * - RunnableParallel   → same input, multiple outputs
 * - RunnableMap        → input mapping
 * - RunnableBranch     → conditional logic
 * - RunnableLambda     → custom Python logic
 * - RunnablePassthrough→ input forward karna
 *
 * Inhi primitives ko combine karke:
 * - Complex AI workflows
 * - Scalable pipelines
 * - Production-grade systems
 *
 * banaye jaate hain.
 *
 */
