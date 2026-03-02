/**
 * ---------------------------------------------------------------
 * 📘 Toolkit in LangChain
 * ---------------------------------------------------------------
 *
 * Toolkit ka concept samajhna bahut simple hai.
 *
 * Toolkit basically:
 *
 * 👉 Related tools ka ek collection (bundle) hota hai
 *    jo ek common purpose serve karte hain.
 *
 * Matlab:
 * - Multiple tools ko ek saath package kar diya jaata hai
 * - Taaki unhe reuse karna aur use karna easy ho jaye
 *
 *
 * ---------------------------------------------------------------
 * ! Simple Analogy
 * ---------------------------------------------------------------
 *
 * Real life example:
 *
 * Ek mechanic ka toolbox socho.
 *
 * Usme hota hai:
 * - screwdriver
 * - wrench
 * - pliers
 *
 * Ye sab tools alag alag kaam karte hain
 * lekin sab ek toolbox mein organized hote hain.
 *
 * Isi tarah:
 *
 * LangChain mein bhi related tools ko
 * ek toolkit mein bundle kar diya jaata hai.
 *
 *
 * ---------------------------------------------------------------
 * ! Toolkit in LangChain
 * ---------------------------------------------------------------
 *
 * LangChain mein toolkit ka use hota hai
 * jab kisi specific system ya service ke saath
 * multiple tools ka interaction ho.
 *
 * Example:
 *
 * Google Drive Toolkit
 *
 * Is toolkit ke andar multiple tools ho sakte hain:
 *
 * • List files in Google Drive
 * • Upload file
 * • Download file
 * • Delete file
 * • Search files
 *
 *
 * ---------------------------------------------------------------
 * ! Example Toolkit
 * ---------------------------------------------------------------
 *
 * Google Drive Toolkit ke andar ye tools ho sakte hain:
 *
 * 🔹 list_files_tool
 *    → Drive ke andar files list karne ke liye
 *
 * 🔹 upload_file_tool
 *    → Drive mein file upload karne ke liye
 *
 * 🔹 download_file_tool
 *    → Drive se file download karne ke liye
 *
 * 🔹 delete_file_tool
 *    → Drive se file delete karne ke liye
 *
 *
 * ---------------------------------------------------------------
 * ! Why Toolkits are Useful
 * ---------------------------------------------------------------
 *
 * Toolkits ka use karne ke benefits:
 *
 * ✔ Tools organized rehte hain
 * ✔ Reusability increase hoti hai
 * ✔ Integration easy ho jata hai
 * ✔ Agent ko multiple related tools ek saath mil jaate hain
 *
 *
 * ---------------------------------------------------------------
 * ! Final Insight
 * ---------------------------------------------------------------
 *
 * Tool  → Single function / capability
 *
 * Toolkit → Related tools ka bundle
 *
 * Agents usually toolkits use karte hain
 * taaki wo ek system ke saath multiple actions perform kar saken.
 *
 */