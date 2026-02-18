/**
 * --------------------------------------------------
 * DOCUMENT LOADERS – CONCEPT & TYPES
 * --------------------------------------------------
 *
 * --------------------------------------------------
 * WHAT EXACTLY ARE DOCUMENT LOADERS?
 * --------------------------------------------------
 *
 * Document Loaders LangChain ke aise components hote hain
 * jo data ko **multiple sources** se load karke
 * ek **standardized format** me convert kar dete hain.
 *
 * Ye standardized format hota hai:
 *
 * 👉 **Document object**
 *
 * Jise aage use kiya ja sakta hai:
 * - Text chunking
 * - Embeddings
 * - Retrieval
 * - Generation (RAG pipelines)
 *
 * --------------------------------------------------
 * WHY STANDARDIZATION IS IMPORTANT
 * --------------------------------------------------
 *
 * Data alag-alag sources se aa sakta hai:
 * - Text files
 * - PDFs
 * - Web pages
 * - CSV files
 *
 * Agar data standardized format me na ho,
 * to:
 * - Uspar common operations apply karna mushkil ho jaata hai
 *
 * Isliye LangChain:
 * - Har loader ka output **Document** banata hai
 *
 * --------------------------------------------------
 * DOCUMENT OBJECT (REMINDER)
 * --------------------------------------------------
 *
 * Document object me mainly do cheezein hoti hain:
 *
 * - page_content → actual text
 * - metadata     → source, page number, etc.
 *
 * --------------------------------------------------
 * TYPES OF DOCUMENT LOADERS
 * --------------------------------------------------
 *
 * Ab hum important document loaders ko dekhenge.
 *
 * --------------------------------------------------
 * 1️⃣ TEXT LOADER
 * --------------------------------------------------
 *
 * Definition:
 * - Simple text files (.txt) load karne ke liye use hota hai
 *
 * Use-case:
 * - Notes
 * - Logs
 * - Plain text documents
 *
 * Limitation:
 * - Sirf plain text support karta hai
 * - PDFs, CSVs, HTML handle nahi karta
 *
 * --------------------------------------------------
 * 2️⃣ PYPDF LOADER
 * --------------------------------------------------
 *
 * Definition:
 * - PDF documents ko page-wise load karta hai
 *
 * Use-case:
 * - Books
 * - Research papers
 * - Reports
 *
 * Limitation:
 * - Scanned PDFs me text extraction weak ho sakta hai
 * - Tables/images ka support limited hota hai
 *
 * --------------------------------------------------
 * 3️⃣ DIRECTORY LOADER
 * --------------------------------------------------
 *
 * Definition:
 * - Ek poori directory ke andar ke
 *   multiple files ko load karta hai
 *
 * Use-case:
 * - Large document collections
 * - Knowledge bases
 *
 * Limitation:
 * - File-type specific loaders ke saath use karna padta hai
 *
 * 
 * --------------------------------------------------
 * 4️⃣ CSV LOADER
 * --------------------------------------------------
 *
 * Definition:
 * - CSV files se structured data load karta hai
 *
 * Use-case:
 * - Tabular data
 * - Logs
 * - Reports
 *
 * Limitation:
 * - Hierarchical text ke liye ideal nahi
 *
 * --------------------------------------------------
 * 5️⃣ WEB PAGE LOADER
 * --------------------------------------------------
 *
 * Definition:
 * - Web pages se content extract karta hai
 *
 * Use-case:
 * - Live web data
 * - Product pages
 * - Blogs
 *
 * Limitation:
 * - HTML noise (ads, scripts)
 * - Dynamic content kabhi-kabhi miss ho sakta hai
 *
 * --------------------------------------------------
 * SUMMARY
 * --------------------------------------------------
 *
 * - Document Loaders data ingestion ka entry point hote hain
 * - Ye raw data ko standardized Document format me convert karte hain
 * - Har loader ka use-case aur limitation hota hai
 *
 * Ye RAG pipeline ka **first and most important step** hai.
 *
 * 
 */
 




 
 
 /**
 * --------------------------------------------------
 * LOAD vs LAZY LOAD (DOCUMENT LOADERS)
 * --------------------------------------------------
 *
 * LangChain ke almost **har document loader** me
 * do important methods available hote hain:
 *
 * - load()
 * - lazy_load()
 *
 * --------------------------------------------------
 * WHAT IS LAZY LOADING?
 * --------------------------------------------------
 *
 * Lazy loading ka matlab hota hai:
 * - Data ko **ek saath load na karna**
 * - Balki **jab zaroorat ho tab**
 *   thoda-thoda load karna
 *
 * --------------------------------------------------
 * load() METHOD
 * --------------------------------------------------
 *
 * - load() poora data
 *   **ek hi baar memory me load** kar deta hai
 *
 * - Ye ek list return karta hai:
 *   [Document, Document, Document, ...]
 *
 * Use-case:
 * - Small files
 * - Jab data size manageable ho
 *
 * Limitation:
 * - Large files me zyada memory consume hoti hai
 *
 * --------------------------------------------------
 * lazy_load() METHOD
 * --------------------------------------------------
 *
 * - lazy_load() data ko
 *   **incrementally load** karta hai
 *
 * - Ye ek generator return karta hai
 *   jo documents ko ek-ek karke deta hai
 *
 * Use-case:
 * - Large PDFs
 * - Large directories
 * - Streaming type processing
 *
 * Advantage:
 * - Memory efficient
 * - Better performance for large datasets
 *
 * --------------------------------------------------
 * SIMPLE COMPARISON
 * --------------------------------------------------
 *
 * load():
 * - Eager loading
 * - All documents at once
 * - High memory usage
 *
 * lazy_load():
 * - On-demand loading
 * - One document at a time
 * - Low memory usage
 *
 * --------------------------------------------------
 * REAL-WORLD ANALOGY
 * --------------------------------------------------
 *
 * load():
 * - Poori kitab ek baar me padhna
 *
 * lazy_load():
 * - Har page tab padhna
 *   jab uski zaroorat pade
 *
 * --------------------------------------------------
 * SUMMARY
 * --------------------------------------------------
 *
 * - load() → simple but memory heavy
 * - lazy_load() → scalable and efficient
 *
 * Production-level RAG systems me
 * lazy loading ko zyada prefer kiya jaata hai.
 *
 */
