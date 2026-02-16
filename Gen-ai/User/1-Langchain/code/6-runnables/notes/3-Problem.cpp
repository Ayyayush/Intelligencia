/**
 *
 * --------------------------------------------------
 * PROBLEMS WITH LOT OF CHAINS
 * --------------------------------------------------
 *
 * LangChain ke saath ek problem tab shuru hui
 * jab unhone **bahut saari chains** introduce kar di.
 *
 * Itni zyada chains aur features hone ke
 * do major disadvantages the:
 *
 * --------------------------------------------------
 * 1. CODEBASE BAHUT BADA HO GAYA
 * --------------------------------------------------
 *
 * - Codebase kaafi zyada grow kar gaya
 * - Itne bade codebase ko actively maintain karna
 *   difficult ho gaya
 *
 * --------------------------------------------------
 * 2. LEARNING CURVE STEEP HO GAYA
 * --------------------------------------------------
 *
 * - Naye AI engineers ke liye
 *   LangChain seekhna mushkil ho gaya
 * - Bahut saari chains aur concepts ki wajah se
 *   learning curve kaafi steep ho gaya
 *
 * Is wajah se:
 * - Chains ek asset ke bajay
 *   ek liability banne lagi
 *
 * --------------------------------------------------
 * ROOT CAUSE OF THE PROBLEM
 * --------------------------------------------------
 *
 * Ye problem isliye hui kyunki:
 *
 * - Components standardized nahi the
 * - Har component alag-alag time par develop hua
 * - Har component ka behavior alag tha
 *
 * --------------------------------------------------
 * COMMUNICATION PROBLEM
 * --------------------------------------------------
 *
 * LangChain ko ek aur problem face karni padi:
 *
 * - Alag-alag components ke beech
 *   seamless communication nahi ho pa rahi thi
 *
 * Isliye:
 * - Unhe components ko connect karne ke liye
 *   manual code likhna pada
 *
 * Ye approach:
 * - Manual chains par depend karti thi
 *
 * --------------------------------------------------
 * IDEAL / BEST CASE SCENARIO
 * --------------------------------------------------
 *
 * Best case ye hota agar:
 *
 * - Saare components ek common standard follow karte
 * - Sabka input-output behavior same hota
 * - Components easily plug-and-play hote
 *
 * Lekin aisa nahi hua.
 *
 * --------------------------------------------------
 * FUTURE PROBLEM
 * --------------------------------------------------
 *
 * Is wajah se:
 *
 * - Har naye chain ke liye
 *   kaafi saara manual code likhna padta tha
 *
 * --------------------------------------------------
 * FINAL SOLUTION
 * --------------------------------------------------
 *
 * Toh ye sab kaam possible kaise hua?
 *
 * 👉 Ye possible hua **RUNNABLES** ki help se.
 *
 * Runnables ne:
 * - Components ko standard interface diya
 * - Seamless composition possible banayi
 * - Manual chain code ko eliminate kiya
 *
 */
