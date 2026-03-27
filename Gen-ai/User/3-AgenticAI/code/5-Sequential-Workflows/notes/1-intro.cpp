/**
 *  ===============================================================
 * 📘 Playlist: Agentic AI with LangGraph
 * 🎓 Instructor: CampusX (Nitish Sir)
 * 🎥 Lecture-5 | Video-6
 * 📌 Topic: Sequential Workflows
 * ===============================================================
 * 
 * ! WHAT IS SEQUENTIAL WORKFLOW ?
 * ---------------------------------------------------------------
 * Sequential workflow ka matlab hota hai:
 * 👉 Tasks ek fixed order (linear flow) mein execute hote hain
 * 👉 Ek task khatam hone ke baad hi next task start hota hai
 * 
 * Example:
 * START → Task1 → Task2 → Task3 → END
 * 
 * ! IN CONTEXT OF LANGGRAPH
 * ---------------------------------------------------------------
 * LangGraph ek framework hai jisme hum AI workflows ko graph ki form mein define karte hain
 * 
 * Yahan:
 * 👉 Nodes = Functions (tasks)
 * 👉 Edges = Flow (execution order)
 * 👉 State = Shared data jo har node ke beech pass hota hai
 * 
 * Sequential workflow mein:
 * 👉 Koi branching ya condition nahi hoti
 * 👉 Flow strictly linear hota hai
 * 
 * ! WHAT WE ARE LEARNING IN THIS LECTURE
 * ---------------------------------------------------------------
 * 👉 LangGraph install karna
 * 👉 Basic graph banana
 * 👉 State define karna (TypedDict)
 * 👉 Nodes create karna (functions)
 * 👉 Nodes ko connect karna using edges
 * 👉 Graph ko compile karna
 * 👉 Workflow ko run (invoke) karna
 * 
 * ! STEP-BY-STEP FLOW (IMPORTANT)
 * ---------------------------------------------------------------
 * 1. State define karo (input + output structure)
 * 2. LLM ya logic define karo (brain of system)
 * 3. Node functions likho (tasks)
 * 4. Graph banao using StateGraph
 * 5. Nodes add karo
 * 6. Edges define karo (START → ... → END)
 * 7. Graph compile karo
 * 8. Input state ke saath invoke karo
 * 
 * ! INTERNAL WORKING (INTERVIEW POINT)
 * ---------------------------------------------------------------
 * Jab hum workflow.invoke() call karte hain:
 * 
 * 👉 Initial state create hota hai
 * 👉 Execution START node se begin hota hai
 * 👉 Har node state ko read + update karta hai
 * 👉 Updated state next node ko pass hota hai
 * 👉 Finally END pe jaake final state return hota hai
 * 
 * ! KEY CONCEPT SUMMARY
 * ---------------------------------------------------------------
 * 👉 State → Data container (input/output)
 * 👉 Node → Processing unit (function)
 * 👉 Edge → Flow control
 * 👉 Graph → Complete workflow
 * 
 * ! WHY IMPORTANT ?
 * ---------------------------------------------------------------
 * 👉 Real-world AI agents isi pattern pe kaam karte hain
 * 👉 Easy debugging (step-by-step execution)
 * 👉 Modular design (har node independent hota hai)
 * 👉 Scalable (baad mein branching, loops add kar sakte hain)
 * 
 * 
 * 
 * ===============================================================
 */