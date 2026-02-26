/**
 * 📘 In-Context Learning
 *
 * ------------------------------------------------------------
 * 🔹 In-Context Learning kya hoti hai?
 * ------------------------------------------------------------
 *
 * In-Context Learning ek core capability hai
 * Large Language Models (LLMs) ki
 * jaise GPT-3 / GPT-4 / Claude / LLaMA.
 *
 * Is capability mein model:
 * - Sirf prompt ke andar diye gaye examples ko dekh kar
 * - Task solve karna seekh leta hai
 *
 * ❗ Important baat:
 * - Model ke weights update nahi hote
 * - Koi training ya fine-tuning nahi hoti
 *
 * ------------------------------------------------------------
 * 🔹 Simple language mein samjho
 * ------------------------------------------------------------
 *
 * Aap model ko bolte ho:
 * "Ye examples dekh,
 *  aur isi pattern ko follow karke answer de"
 *
 * Model examples se pattern samajh leta hai
 * aur next answer generate kar deta hai.
 *
 * ------------------------------------------------------------
 * 🔹 Example: Few-Shot Prompting
 * ------------------------------------------------------------
 *
 * Prompt:
 *
 * Translate English to Hindi:
 * Hello → Namaste
 * How are you? → Aap kaise ho?
 *
 * Now translate:
 * Good Morning →
 *
 * Model bina kisi training ke
 * sirf examples dekh kar correct answer deta hai.
 *
 * ------------------------------------------------------------
 * 🔹 Emergent Property kya hoti hai?
 * ------------------------------------------------------------
 *
 * Emergent property wo behavior hota hai jo:
 * - System ke andar achanak appear hota hai
 * - Jab system ek certain scale / complexity reach kar leta hai
 * - Bina explicitly program kiye
 *
 * Matlab:
 * Individual components se ye behavior directly expect nahi hota,
 * lekin poora system milkar wo behavior dikha deta hai.
 *
 * ------------------------------------------------------------
 * 🔹 In-Context Learning = Emergent Property
 * ------------------------------------------------------------
 *
 * GPT-3 ke saath ye cheez observe ki gayi:
 * - Model few examples dekh kar
 * - New tasks solve kar pa raha tha
 *
 * Isi observation par ek famous paper aaya:
 *
 * 👉 "Language Models are Few-Shot Learners"
 *
 * Is paper ne prove kiya ki:
 * - Large language models
 * - Few-shot learning capability develop kar lete hain
 *
 * ------------------------------------------------------------
 * 🔹 Kya In-Context Learning har task ke liye kaam karti hai?
 * ------------------------------------------------------------
 *
 * ❌ Zaroori nahi
 *
 * Kuch tasks mein:
 * - Few-shot examples kaafi hote hain
 *
 * Lekin kuch tasks mein:
 * - Sirf examples se kaam nahi banta
 * - Poora context dena padta hai
 *
 * ------------------------------------------------------------
 * 🔹 Full Context dene ka idea
 * ------------------------------------------------------------
 *
 * Maan lo:
 * - Aap YouTube lecture dekh rahe ho
 * - Kisi specific topic par doubt hai
 *
 * Agar aap:
 * - Sirf question poochho → answer weak ho sakta hai
 *
 * Lekin agar aap:
 * - Question ke saath
 * - Us lecture ka relevant transcript bhi bhej do
 *
 * 👉 Model zyada accurate aur relevant answer de paayega
 *
 * ------------------------------------------------------------
 * 🔹 Yahin se RAG ka concept aata hai
 * ------------------------------------------------------------
 *
 * RAG ka simple idea:
 *
 * 👉 Jab aap model se kuch poochho,
 *    usi time usko extra relevant information provide karo
 *
 * Isse:
 * - Model zyada smart lagta hai
 * - Hallucination kam hoti hai
 * - Answers zyada accurate hote hain
 *
 * ------------------------------------------------------------
 * 🔹 RAG = Advanced In-Context Learning
 * ------------------------------------------------------------
 *
 * In-Context Learning:
 * - Aap manually context prompt mein dete ho
 *
 * RAG:
 * - System automatically relevant context retrieve karta hai
 * - Aur prompt ke andar inject karta hai
 *
 * ------------------------------------------------------------
 * 🔹 Example Prompt Style (RAG)
 * ------------------------------------------------------------
 *
 * System Prompt:
 * "You are a helpful assistant.
 *  Answer the following question using the given context."
 *
 * Context:
 * [Retrieved documents / transcript]
 *
 * Question:
 * [User query]
 *
 * ------------------------------------------------------------
 * 🔹 Final Summary
 * ------------------------------------------------------------
 *
 * In-Context Learning:
 * - LLM ki natural capability hai
 * - Examples dekh kar tasks seekhne ki
 *
 * RAG:
 * - Isi capability ka advanced use hai
 * - Jo external knowledge ke saath
 *   LLM ko aur zyada powerful banata hai
 *
 * Ab tak humne:
 * - RAG ka WHAT aur WHY dekha
 *
 * Next:
 * 👉 RAG ka HOW (architecture + implementation)
 *
 */