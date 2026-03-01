/**
 * ===============================================================
 * ! Reducers (LangGraph)
 * ===============================================================
 *
 * Reducers ka concept State ke sath closely connected hota hai.
 *
 * Jaise humne dekha tha:
 *
 * State ki properties hoti hain:
 *
 * 1. Accessible to every node
 * 2. Mutable (nodes state ko modify kar sakte hain)
 *
 * ---------------------------------------------------------------
 * Problem Scenario
 * ---------------------------------------------------------------
 *
 * Maan lo ek simple workflow hai jisme:
 *
 * User 2 numbers deta hai
 * Aur system unko multiply karke result deta hai.
 *
 * State mein hume kya kya information store karni padegi?
 *
 * State keys:
 *
 * first_num
 * second_num
 * result
 *
 * Workflow:
 *
 * Node1 → state update karega
 *
 * state.first_num = 4
 * state.second_num = 5
 *
 * Node2 → multiplication karega
 *
 * state.result = first_num * second_num
 *
 * ---------------------------------------------------------------
 * Multiple Nodes Updating Same State
 * ---------------------------------------------------------------
 *
 * LangGraph mein multiple nodes same state value ko update kar sakte hain.
 *
 * Lekin kuch scenarios mein ye problem create kar sakta hai.
 *
 * Example: Simple Chatbot
 *
 * Workflow:
 *
 * Human → message bhejta hai
 * LLM → reply karta hai
 *
 * Ye conversation loop mein chalta rehta hai.
 *
 * State kya hoga?
 *
 * state = {
 *     messages : []
 * }
 *
 * Har node messages list ko update karega:
 *
 * Human node → user message add karega
 * LLM node → response add karega
 *
 * ---------------------------------------------------------------
 * Reducer kya karta hai?
 * ---------------------------------------------------------------
 *
 * Reducer define karta hai ki jab state update ho
 * toh existing value ke sath kya karna hai.
 *
 * Example:
 *
 * New value aayi hai toh:
 *
 * • overwrite karna hai?
 * • merge karna hai?
 * • append karna hai?
 *
 * Reducer decide karta hai ki state update ka behaviour kya hoga.
 *
 * ---------------------------------------------------------------
 * Example (Chatbot)
 * ---------------------------------------------------------------
 *
 * Agar user message aaye:
 *
 * "Hello"
 *
 * Aur LLM reply kare:
 *
 * "Hi, how can I help you?"
 *
 * Agar reducer "append" type ka hai toh:
 *
 * messages = [
 *   "Hello",
 *   "Hi, how can I help you?"
 * ]
 *
 * ---------------------------------------------------------------
 * Important Concept
 * ---------------------------------------------------------------
 *
 * LangGraph mein:
 *
 * Each key in the state can have its own reducer.
 *
 * Matlab:
 *
 * topic key → overwrite reducer
 * messages key → append reducer
 * scores key → merge reducer
 *
 * Reducer decide karta hai:
 *
 * state update hone par exactly kya behaviour hona chahiye.
 *
 * ---------------------------------------------------------------
 * Summary
 * ---------------------------------------------------------------
 *
 * Reducer = rule that defines how state updates happen.
 *
 * Without reducer:
 * state conflicts ho sakte hain.
 *
 * Reducer ensure karta hai ki multiple nodes safely state update
 * kar saken.
 *
 * ===============================================================
 */