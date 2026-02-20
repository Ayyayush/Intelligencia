/**
 * --------------------------------------------------
 * TYPES OF TEXT SPLITTERS (DETAILED DISCUSSION)
 * --------------------------------------------------
 *
 * Is section me hum different types of text splitters
 * ko detail me samjhenge — concept, working,
 * pros-cons aur real-world use-cases ke saath.
 *
 *
 *
 * ==================================================
 * 1️⃣ LENGTH-BASED TEXT SPLITTER
 * ==================================================
 *
 * Concept:
 * - Hum manually chunk size decide karte hain
 * - Character count ya token count ke basis par
 *   text ko tod diya jaata hai
 *
 * Examples:
 * - 500 characters ka chunk
 * - 1000 tokens ka chunk
 *
 * Ye sabse simple aur fast method hai text splitting ka.
 *
 * Important limitations:
 * - Grammar ka dhyaan nahi rakhta
 * - Semantic meaning ka dhyaan nahi rakhta
 * - Word ya sentence ke beech me cut ho sakta hai
 *
 * Isliye kabhi-kabhi:
 * - Word aadha cut ho jaata hai
 * - Sentence abruptly break ho jaata hai
 *
 * --------------------------------------------------
 * CHUNK OVERLAP KYA HOTA HAI?
 * --------------------------------------------------
 *
 * Chunk overlap ka matlab:
 * - Next chunk me previous chunk ka
 *   kuch portion repeat karna
 *
 * Example:
 * Chunk 1 → characters 0–500
 * Chunk 2 → characters 450–950
 *
 * Yahan 50 characters ka overlap hai.
 *
 * Advantage:
 * - Context continuity maintain hoti hai
 * - Adjacent chunks semantic sense banaye rakhte hain
 *
 * Disadvantage:
 * - Total chunks ki count badh jaati hai
 * - Storage aur computation cost increase hoti hai
 *
 * Ideal overlap:
 * - RAG-based applications me
 *   generally 10%–20% overlap recommended hota hai
 *
 * --------------------------------------------------
 * Use-cases:
 * - Simple pipelines
 * - Controlled datasets
 * - Jab semantic precision critical na ho
 *
 *
 *
 * ==================================================
 * 2️⃣ TEXT-STRUCTURE-BASED TEXT SPLITTING
 * ==================================================
 *
 * Ye sabse zyada real-world me use hone wali technique hai.
 *
 * Common example:
 * 👉 RecursiveCharacterTextSplitter
 *
 * Ye kya karta hai?
 *
 * - Directly characters par split nahi karta
 * - Pehle natural structure follow karta hai
 *
 * Splitting order (priority-based):
 * 1. Paragraphs   (\n\n)
 * 2. Lines        (\n)
 * 3. Words        (space)
 * 4. Characters   (last fallback)
 *
 * Goal:
 * - Abrupt breaks avoid karna
 * - Maximum possible meaning preserve karna
 *
 * --------------------------------------------------
 * Common separators:
 * - "\n\n"
 * - "\n"
 * - " "
 * - ""
 *
 * --------------------------------------------------
 * Recursive Tree Structure (Conceptual View)
 * --------------------------------------------------
 *
 *               [ FULL TEXT ]
 *                      |
 *              Try split by Paragraph (\n\n)
 *                      |
 *        --------------------------------
 *        |                              |
 *   [Paragraph 1]                  [Paragraph 2]
 *        |
 *   If chunk too large →
 *   Try split by Line (\n)
 *        |
 *   -------------------------
 *   |                       |
 * [Line 1]              [Line 2]
 *        |
 *   If still large →
 *   Try split by Space
 *        |
 *   -------------------------
 *   |                       |
 *  Word1                 Word2
 *        |
 *   If still large →
 *   Split by Characters
 *
 * Is process ko "Recursive" isliye kaha jaata hai:
 * - Ye progressively smaller separators try karta hai
 * - Jab tak chunk size limit satisfy na ho jaaye
 *
 * --------------------------------------------------
 * Advantages:
 * - Meaning zyada preserve hota hai
 * - Natural text boundaries respect hoti hain
 *
 * Disadvantages:
 * - Length-based splitter se thoda slower hota hai
 * - Computation cost thodi zyada hoti hai
 *
 *
 *
 * ==================================================
 * 3️⃣ DOCUMENT-STRUCTURE-BASED TEXT SPLITTER
 * ==================================================
 *
 * Ye approach tab use hoti hai jab:
 * - Text highly structured ho
 * - Jaise: Code files, Markdown docs, HTML, PDFs
 *
 * Problem:
 * - Agar hum sirf characters ya lines ke basis par split karein
 *   to logical structure break ho jaata hai
 *
 * Solution:
 * - Language/document-aware splitters use karna
 *
 * Examples:
 * - Python code → functions, classes ke basis par
 * - Markdown → headings, sections ke basis par
 * - HTML → tags ke basis par
 *
 * LangChain me:
 * - Language.PYTHON
 * - Language.MARKDOWN
 * jaise options milte hain
 *
 * Advantage:
 * - Code ya documentation readable rehti hai
 * - Logical units intact rehte hain
 *
 *
 *
 * 
 * 
 * ==================================================
 * 4️⃣ SEMANTIC MEANING-BASED TEXT SPLITTER
 * ==================================================
 *
 * Ye sabse advanced aur intelligent splitter hota hai.
 *
 * Ye tab use hota hai jab:
 * - Length-based fail ho jaaye
 * - Structure-based bhi clear boundaries na de
 *
 * Ye kis basis par split karta hai?
 * - Text ya structure par nahi
 * - Balki **meaning (semantic similarity)** par
 *
 * Example:
 * - Farming related sentences
 * - Sports (IPL) related sentences
 * - Terrorism / security related sentences
 *
 * Agar topics change ho jaate hain,
 * to semantic distance badh jaata hai
 * aur wahi split point ban jaata hai.
 *
 * Iske liye:
 * - Embedding models use hote hain
 * - Sentence similarity measure ki jaati hai
 *
 * Advantages:
 * - Best chunk quality
 * - RAG pipelines ke liye highest accuracy
 *
 * Disadvantages:
 * - Slow
 * - Computationally expensive
 *
 *
 *
 * --------------------------------------------------
 * SUMMARY
 * --------------------------------------------------
 *
 * Length-based splitter:
 * - Simple
 * - Fast
 * - Grammar aur meaning ignore karta hai
 *
 * Structure-based (Recursive):
 * - Intelligent
 * - Meaning preserve karta hai
 * - RAG systems me most commonly used
 *
 * Document-structure-based:
 * - Code, Markdown, HTML ke liye best
 * - Logical boundaries respect karta hai
 *
 * Semantic meaning-based:
 * - Highest quality chunks
 * - Expensive but most accurate
 *
 */