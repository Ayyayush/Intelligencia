/**
 * ------------------------------------------------------------
 * 🔹 with_structured_output() – Detailed Explanation
 * ------------------------------------------------------------
 *
 * with_structured_output() ko use karne ke liye:
 * 👉 Hum LLM ko invoke karne se **pehle** hi apply kar dete hain.
 *
 * Matlab:
 * - Pehle hum batate hain ki output ka structure kya hoga
 * - Phir LLM usi structure ke according response generate karta hai
 *
 * ------------------------------------------------------------
 * 🔹 Why use with_structured_output()?
 * ------------------------------------------------------------
 * Normally LLM text output deta hai (unstructured).
 *
 * with_structured_output() use karne se:
 * - Output predictable ho jaata hai
 * - Parsing easy ho jaati hai
 * - Code break hone ke chances kam ho jaate hain
 *
 * ------------------------------------------------------------
 * 🔹 Output Structure Define Karne Ke Tarike
 * ------------------------------------------------------------
 * LangChain mein structured output define karne ke
 * multiple tarike hote hain:
 *
 * 1️⃣ TypedDict
 *    - Python ka built-in feature
 *    - Keys aur unke data types define kiye jaate hain
 *
 * 2️⃣ Pydantic
 *    - Strong validation provide karta hai
 *    - Production-level applications ke liye best
 *    - Automatically type checking + error handling
 *
 * 3️⃣ JSON Schema
 *    - Industry standard format
 *    - APIs aur frontend-backend communication mein useful
 *
 * Ye teeno methods ka main purpose hai:
 * 👉 LLM ko clearly batana ki output ka data format kya hona chahiye
 *
 * ------------------------------------------------------------
 * 🔹 High-Level Flow (Samajhne ke liye)
 * ------------------------------------------------------------
 * Step 1: Output ka structure define karo
 * Step 2: with_structured_output() lagao
 * Step 3: Phir LLM invoke karo
 * Step 4: Structured (JSON-like) response milta hai
 *
 * ------------------------------------------------------------
 * 🔹 Important Note
 * ------------------------------------------------------------
 * with_structured_output() sirf un LLMs ke saath kaam karta hai
 * jo structured output generate karne ki capability rakhte hain.
 *
 * Agar LLM ye support nahi karta,
 * toh hume Output Parsers ka use karna padta hai.
 *
 */
