/**
 * ===================== Benefits of Persistence =====================
 *
 * 👉 Persistence ka matlab:
 * Workflow ka state save karna taaki baad me use kar sake / resume kar sake
 *
 *
 * 
 * 
 * ---------------------- 1. Short Term Memory ----------------------
 *
 * 👉 Iska matlab:
 * System apni current conversation ya workflow ka data yaad rakhta hai
 *
 * Example:
 * - Chatbot ko user ne bola: "mera naam Rahul hai"
 * - Next prompt me agar user bole "mera naam kya hai?"
 * → system yaad rakhega (state me stored hai)
 *
 * 👉 Basically:
 * Temporary memory jo workflow ke dauran kaam aati hai
 *
 *
 * 
 * 
 * 
 * ---------------------- 2. Fault Tolerance ----------------------
 *
 * 👉 Fault tolerant hone ka matlab:
 * Agar workflow beech me crash ho jaye ❌
 * → to hum usko EXACT wahi se resume kar sakte hain ✅
 *
 * 👉 Kaise?
 * - Har step ka state save hota rehta hai (checkpointing)
 * - Hume pata hota hai:
 *      → crash kaha hua
 *      → us time state ki kya value thi
 *
 * 👉 Example:
 * Step1 ✔️
 * Step2 ✔️
 * Step3 ❌ (crash)
 *
 * → Dubara run karoge:
 * directly Step3 se continue hoga (Step1 & Step2 dobara nahi chalenge)
 *
 * 👉 Benefit:
 * - Time save hota hai
 * - Resources waste nahi hote
 * - Long workflows safe ho jaate hain
 *
 * 
 * 
 *
 * 
 * ---------------------- 3. HITL (Human In The Loop) ----------------------
 *
 * 👉 Iska matlab:
 * Beech me human intervention allow karna
 *
 * Example:
 * - AI ne kuch decision liya
 * - Human usko approve/reject/edit kar sakta hai
 *
 * 👉 Persistence ka role:
 * - System pause ho sakta hai
 * - Human input ke baad wahi se resume ho sakta hai
 *
 * 
 * 
 * 
 *
 * ---------------------- 4. Time Travel ----------------------
 *
 * 👉 Iska matlab:
 * Past ke kisi bhi checkpoint pe wapas jaana ⏪
 *
 * Example:
 * - Workflow ka state galat ho gaya
 * - Tum kisi purane checkpoint pe jaake dobara run kar sakte ho
 *
 * 👉 Features:
 * - Debugging easy ho jati hai
 * - Experiment kar sakte ho different flows ke saath
 *
 *
 * ---------------------- Summary ----------------------
 *
 * 👉 Persistence kya deta hai:
 *
 * 1. Memory (short term context store)
 * 2. Safety (crash hone pe resume)
 * 3. Control (human intervene kar sakta hai)
 * 4. Flexibility (past me jaa sakte ho)
 *
 * 👉 One Line:
 * "Persistence = Workflow ka backup + memory + resume system"
 *
 */