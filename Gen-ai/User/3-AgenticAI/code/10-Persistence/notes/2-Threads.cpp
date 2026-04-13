/**
 * Threads in Persistence 
 * 
 * 👉 Simple words me:
 * Threads ka matlab hota hai "independent execution paths"
 * yaani ek hi graph ko multiple baar run kar sakte ho 
 * different inputs ke saath, aur har run ka apna alag state hota hai.
 * 
 * Persistence ka role yaha pe ye hai ki:
 * → har thread ka state save ho sakta hai
 * → baad me usko restore karke wahi se continue kar sakte ho
 * 
 * Example:
 * Agar ek workflow 50% complete hua hai,
 * to persistence uska state store karega, taaki next time wahi se resume ho sake.
 * 
 * ===================== Threads in Persistence =====================
 *
 * ---------------------- Diagram 1 ----------------------
 *
 *                numbers: []
 *                   |
 *                 START
 *                   |
 *                NODE 1
 *            numbers: [1, 2]
 * 
 * 👉 Explanation:
 * Initially numbers empty hai.
 * START node se flow begin hota hai.
 * NODE 1 pe jaake numbers update ho jate hain → [1, 2]
 *
 *               /    |     \
 *              /     |      \
 *          NODE 3  NODE 2  NODE 4
 *
 * 👉 Ye branching hai:
 * Graph ek point pe multiple paths me split ho raha hai.
 * Har node alag logic execute karega.
 *
 *                     |
 *          numbers: [1, 2, 3, 5, 7]
 *
 * 👉 NODE 2 ke through ek specific path follow hua
 * jisme numbers aur update hue → [1, 2, 3, 5, 7]
 *
 *               \      |      /
 *                \     |     /
 *                     END
 *
 * 👉 Sare paths eventually merge hoke END pe aate hain.
 *
 *          numbers: [1, 2, 3, 4, 5]
 *
 * 👉 Final output state:
 * Graph execution ke baad final processed numbers milte hain.
 *
 *
 * ---------------------- Diagram 2 ----------------------
 *
 *                numbers: []
 *                   |
 *                 START
 *                   |
 *                NODE 1
 *            numbers: [6, 7]
 *
 * 👉 Same graph structure hai, but input different hai.
 * Is baar NODE 1 numbers ko [6, 7] me convert karta hai.
 *
 *               /    |     \
 *              /     |      \
 *          NODE 3  NODE 2  NODE 4
 *
 * 👉 Again branching same hai, graph same hai.
 *
 *                     |
 *          numbers: [6, 7, 9, 10]
 *
 * 👉 NODE 2 ke path me numbers further update hue.
 *
 *               \      |      /
 *                \     |     /
 *                     END
 *
 *          numbers: [6, 7, 8, 9]
 *
 * 👉 Final output different hai kyunki initial input different tha.
 *
 *
 * ---------------------- Key Idea ----------------------
 *
 * 👉 1. Each thread maintains its own state
 * Har execution (thread) ka apna alag "numbers array" hota hai.
 * Ye ek dusre ko affect nahi karte.
 *
 * 👉 2. Same graph structure, different data flow
 * Graph ka structure same rehta hai (same nodes & edges),
 * but data alag hone ki wajah se output alag aata hai.
 *
 * 👉 3. Persistence allows saving/restoring states
 * 
 * Persistence ka main kaam:
 * → Kisi bhi thread ka current state database ya memory me save karna
 * → Baad me usko load karke execution continue karna
 * 
 * Real-world use:
 * - Chatbots (conversation history save hoti hai)
 * - Long-running workflows (resume from middle)
 * - Multi-user systems (har user ka alag thread)
 *
 * 👉 Summary:
 * Thread = ek independent execution
 * Persistence = us execution ka memory backup
 *
 */