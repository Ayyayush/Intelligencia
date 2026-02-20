/**
 *
 * 📘 GenAI Playlist – LangChain
 * Lecture-11 | Video-13 | CampusX
 * Topic: RAG Components | 2️⃣ Text Splitters
 *
 * 
 * 
 * 
 * 
 * --------------------------------------------------
 * ? WHAT IS TEXT SPLITTING?
 * --------------------------------------------------
 *
 * Text splitting ek process hai jisme
 * large chunks of text ko
 * **chhote, manageable pieces** me break kiya jaata hai.
 *
 * Agar hum ek LLM ko ek hi baar me
 * bahut zyada text de dete hain,
 * to aksar output accurate nahi aata.
 *
 * Kyunki:
 * - Har LLM ki ek limit hoti hai
 * - Ek baar me kitna text receive kar sakta hai
 *
 * --------------------------------------------------
 * OVERCOMING MODEL LIMITATIONS
 * --------------------------------------------------
 *
 * - Kai embedding models ke paas
 *   **maximum input size constraint** hota hai
 *
 * - Agar document bahut bada ho,
 *   to bina split kiye use process karna possible nahi hota
 *
 * - Text splitting allow karta hai:
 *   - Bade documents ko chhote chunks me todna
 *   - Jo model limits ke andar fit ho jaayein
 *
 * 
 * 
 * 
 * 
 * --------------------------------------------------
 * ! DOWNSTREAM TASKS MEIN ROLE
 * --------------------------------------------------
 *
 * Text splitting directly impact karta hai:
 *
 * 1️⃣ Embeddings
 * - Chhote, meaningful chunks se
 *   embeddings zyada accurate banti hain
 *
 * 2️⃣ Semantic Search
 * - Split ke baad jab semantic search hota hai,
 *   to search quality zyada precise hoti hai
 *
 * 3️⃣ Summarization
 * - LLMs large texts ke saath
 *   kabhi-kabhi hallucinate karte hain
 * - Smaller chunks ke saath
 *   summarization zyada reliable hota hai
 *
 * --------------------------------------------------
 * OPTIMIZING COMPUTATIONAL RESOURCES
 * --------------------------------------------------
 *
 * - Bade text ko directly LLM me dena:
 *   - Memory inefficient hota hai
 *   - Output quality bhi degrade hoti hai
 *
 * - Smaller chunks ke saath kaam karna:
 *   - Zyada memory efficient hota hai
 *   - Parallel processing possible hoti hai
 *
 * 
 * 
 * 
 * 
 * 
 * --------------------------------------------------
 * ! TYPES OF TEXT SPLITTERS
 * --------------------------------------------------
 *
 * Text splitters ko broadly
 * in categories me divide kiya jaa sakta hai:
 *
 * 1️⃣ Length-based
 *    → Fixed size ke chunks
 *
 * 2️⃣ Text-structure-based
 *    → Paragraphs, lines, separators ke basis par
 *
 * 3️⃣ Document-structure-based
 *    → Headings, sections, pages ke basis par
 *
 * 4️⃣ Semantic-meaning-based
 *    → Meaning preserve karke split karna
 *
 * --------------------------------------------------
 * FOCUS OF THIS LECTURE
 * --------------------------------------------------
 *
 * Is lecture me hum:
 * - Different types of text splitters ko
 *   detail me samjhenge
 * - Aur dekhenge ki kaunsa splitter
 *   kis use-case ke liye best hota hai
 *
 */