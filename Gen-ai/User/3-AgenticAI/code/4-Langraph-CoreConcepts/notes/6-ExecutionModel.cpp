/**
 * ===============================================================
 * ! LangGraph Execution Model
 * ===============================================================
 *
 * Ab dekhte hain ki backend mein LangGraph kisi workflow ko
 * execute kaise karta hai.
 *
 * LangGraph ka execution model Google ke Pregel model se inspired hai.
 * Ye concept distributed systems mein use hota hai aur Google
 * ke bahut saare products mein internally use kiya gaya hai.
 *
 * ---------------------------------------------------------------
 * 1> Graph Creation
 * ---------------------------------------------------------------
 *
 * Sabse pehle hum graph define karte hain.
 *
 * Is step mein hum:
 *
 * • Nodes define karte hain (tasks)
 * • Edges define karte hain (routing logic)
 * • State schema define karte hain
 *
 * Yani poora workflow graph structure ke form mein
 * define ho jata hai.
 *
 * Example mentally:
 *
 * Node A → Node B → Node C
 *
 * ---------------------------------------------------------------
 * ! 2> Compilation
 * ---------------------------------------------------------------
 *
 * Graph banane ke baad hum StateGraph ko compile karte hain.
 *
 * Example:
 *
 * graph.compile()
 *
 * Compilation ka kaam:
 *
 * • Graph structure validate karna
 * • Missing nodes / edges check karna
 * • Execution engine prepare karna
 *
 * Compilation ke baad graph executable ban jata hai.
 *
 * ---------------------------------------------------------------
 * ! 3> Invocation
 * ---------------------------------------------------------------
 *
 * Graph ko run karne ke liye hum use invoke karte hain.
 *
 * Example:
 *
 * graph.invoke(initial_state)
 *
 * Is step mein:
 *
 * • Initial state first node ko pass hota hai
 * • First node activate ho jata hai
 * • Us node ka attached function run hota hai
 *
 * Fir updated state next node ko pass hoti hai.
 *
 * ---------------------------------------------------------------
 * ! 4> Super Steps Begin
 * ---------------------------------------------------------------
 *
 * LangGraph execution rounds mein hota hai.
 *
 * Har round ko bola jata hai:
 *
 *                  "Super Step"
 *
 * Super step ka matlab:
 *
 * Ek phase jisme active nodes execute karte hain
 * aur messages pass karte hain.
 *
 * ---------------------------------------------------------------
 * ! 5> Message Passing & Node Activation
 * ---------------------------------------------------------------
 *
 * Har node execution ke baad:
 *
 * • State update karta hai
 * • Messages next nodes ko bhejta hai
 *
 * Jinke paas message aata hai:
 *
 * Wo nodes next super step mein activate ho jate hain.
 *
 * Example:
 *
 * Node A execute hua
 *      ↓
 * Message bheja Node B aur Node C ko
 *      ↓
 * Next super step mein B aur C run karenge
 *
 * ---------------------------------------------------------------
 * ! 6> Halting Condition
 * ---------------------------------------------------------------
 *
 * Graph execution tab tak chalta rehta hai jab tak:
 *
 * • koi active node remaining hai
 *
 * Agar kisi super step mein koi node active nahi bacha,
 * toh graph execution stop ho jata hai.
 *
 * Isko bolte hain:
 *
 *              Halting Condition
 *
 * ---------------------------------------------------------------
 * Summary
 * ---------------------------------------------------------------
 *
 * LangGraph execution steps:
 *
 * 1. Graph Creation
 * 2. Compilation
 * 3. Invocation
 * 4. Super Steps Begin
 * 5. Message Passing & Node Activation
 * 6. Halting Condition
 *
 * ===============================================================
 */