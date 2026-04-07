/**
 * 
 * ===============================================================
 * ! 1st: SIMPLE PARALLEL WORKFLOW (NON-LLM)
 * ===============================================================
 * 
 * ! PROBLEM STATEMENT
 * ---------------------------------------------------------------
 * 👉 Cricket based workflow banayenge
 * 👉 Input mein batsman ke performance data milega:
 * 
 * - runs scored
 * - balls faced
 * - number of fours
 * - number of sixes
 * 
 * 
 * ! WHAT WE NEED TO CALCULATE
 * ---------------------------------------------------------------
 * 👉 3 cheezein calculate karni hain:
 * 
 * 1. Strike Rate
 *    = (runs / balls) * 100
 * 
 * 2. Boundary Runs Percentage
 *    = (runs from fours + sixes) / total runs * 100
 * 
 * 3. Balls Per Boundary (BPB)
 *    = balls / total boundaries
 * 
 * 👉 Ye teeno calculations independent hain
 * 👉 Isliye inhe parallel mein run kar sakte hain
 * 
 * 
 * ! WORKFLOW STRUCTURE
 * ---------------------------------------------------------------
 * 
 * START
 *   ↓
 * ┌───────────────┬──────────────────┬────────────────────┐
 * │ Strike Rate   │ Boundary %       │ Balls per Boundary │
 * │ Calculation   │ Calculation      │ Calculation        │
 * └───────────────┴──────────────────┴────────────────────┘
 *   ↓ (parallel execution)
 * 
 * Combine Results (Summary Node)
 *   ↓
 * END
 * 
 * 
 * ! HOW IT WORKS IN LANGGRAPH
 * ---------------------------------------------------------------
 * 👉 START se 3 nodes parallel trigger honge:
 *    - calculate_strike_rate
 *    - calculate_boundary_percentage
 *    - calculate_bpb
 * 
 * 👉 Har node apna output state mein add karega
 * 
 * 👉 Fir ek final node (summary) sab outputs ko combine karega
 * 
 * 
 * ! STATE STRUCTURE
 * ---------------------------------------------------------------
 * 👉 State mein ye fields honge:
 * 
 * Input:
 * - runs
 * - balls
 * - fours
 * - sixes
 * 
 * Output:
 * - strike_rate
 * - boundary_percentage
 * - balls_per_boundary
 * 
 * 
 * ! WHY PARALLEL HERE ?
 * ---------------------------------------------------------------
 * 👉 Kyunki teeno calculations independent hain
 * 👉 Ek dusre pe depend nahi karte
 * 👉 Isliye ek saath run karna efficient hai
 * 
 * 
 * ! INTERVIEW POINT (IMPORTANT)
 * ---------------------------------------------------------------
 * 👉 Agar tasks independent ho → use parallel workflow
 * 👉 Agar tasks dependent ho → use sequential workflow
 * 
 * 
 * ! FINAL FLOW (ONE LINE)
 * ---------------------------------------------------------------
 * 👉 START → [3 parallel calculations] → combine → END
 * 
 * ===============================================================
 */