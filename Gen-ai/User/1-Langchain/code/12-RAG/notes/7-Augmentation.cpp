/**
 * 📘 RAG – Step 3: Augmentation
 *
 * ------------------------------------------------------------
 * 🔹 Augmentation kya hota hai?
 * ------------------------------------------------------------
 *
 * Augmentation ka matlab hota hai:
 * 👉 User ke original question ke saath
 * 👉 Retrieved context (documents / chunks)
 * 👉 Prompt ke andar provide karna
 *
 * Simple words mein:
 * Question + Extra Knowledge = Augmented Prompt
 *
 * ------------------------------------------------------------
 * 🔹 Augmentation ki zarurat kyun hoti hai?
 * ------------------------------------------------------------
 *
 * Sirf query bhejne par:
 * - LLM apni pre-trained knowledge pe depend karta hai
 *
 * Augmentation ke baad:
 * - LLM ko exact, relevant information mil jaati hai
 * - Answer zyada accurate aur grounded hota hai
 *
 * ------------------------------------------------------------
 * 🔹 Augmentation kaise kaam karta hai?
 * ------------------------------------------------------------
 *
 * Retrieval step se hume milta hai:
 * 👉 Top-k relevant chunks (Context)
 *
 * Ab Augmentation step mein:
 * - Is context ko
 * - User query ke saath
 * - Ek structured prompt mein daal diya jaata hai
 *
 * ------------------------------------------------------------
 * 🔹 Typical Augmented Prompt Structure
 * ------------------------------------------------------------
 *
 * System Instruction:
 * "You are a helpful assistant.
 *  Answer the question using ONLY the given context."
 *
 * Context:
 * [Retrieved chunks / documents]
 *
 * Question:
 * [User ka actual question]
 *
 * ------------------------------------------------------------
 * 🔹 Important Point
 * ------------------------------------------------------------
 *
 * Augmentation mein:
 * - Koi naya data retrieve nahi hota
 * - Sirf prompt ko enrich kiya jaata hai
 *
 * Ye step:
 * 👉 Retrieval aur Generation ke beech ka bridge hai
 *
 * ------------------------------------------------------------
 * 🔹 Augmentation ke Benefits
 * ------------------------------------------------------------
 *
 * ✔ Hallucination kam hoti hai
 * ✔ Answers zyada factual hote hain
 * ✔ Private + recent data ka use possible hota hai
 *
 * ------------------------------------------------------------
 * 🔹 Real-Life Analogy
 * ------------------------------------------------------------
 *
 * Socho:
 * - Aap teacher se question poochte ho
 * - Saath mein textbook ke relevant pages bhi de dete ho
 *
 * Teacher:
 * - Guess nahi karta
 * - Diye gaye pages ke basis par answer deta hai
 *
 * ------------------------------------------------------------
 * 🔹 RAG Flow mein Augmentation ka role
 * ------------------------------------------------------------
 *
 * Indexing   → Data prepare
 * Retrieval  → Relevant info nikaalna
 * Augmentation → Question + Context jodna
 * Generation → Final answer banana
 *
 * ------------------------------------------------------------
 * 🔹 Final Summary
 * ------------------------------------------------------------
 *
 * Augmentation:
 * - Prompt engineering ka practical use hai
 * - LLM ko right information, right time par deta hai
 *
 * Ab next (last) step hoga:
 * 👉 Generation (LLM final answer kaise banata hai)
 *
 */