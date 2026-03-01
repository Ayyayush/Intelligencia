/**
 * ===============================================================
 * ! Graph Nodes and Edges
 * ===============================================================
 *
 * Ye LangGraph ka sabse important concept hai.
 *
 * LangGraph mein poora workflow ek graph ki tarah represent hota hai
 * jisme:
 *
 * Nodes → tasks represent karte hain
 * Edges → execution flow ya routing decide karte hain
 *
 * ---------------------------------------------------------------
 * Example
 * ---------------------------------------------------------------
 *
 * Maan lo hum ek website bana rahe hain jaha UPSC aspirants ko
 * essay likhne mein help milti hai.
 *
 * Kyunki essay evaluation subjective hota hai, isliye hum
 * multiple evaluation parameters use karenge.
 *
 * Workflow kuch iss tarah hoga:
 *
 * ! 1. Generate Topic
 *      User ko ek essay topic diya jayega.
 *
 * ! 2. Collect Essay
 *      User apna essay submit karega.
 *
 * ! 3. Evaluate Essay (Parallel Execution)
 *
 *      Essay ko multiple parameters par evaluate kiya jayega:
 *
 *      • Clarity of thought
 *      • Depth of analysis
 *      • Language quality
 *
 *      Ye teen evaluation tasks parallel run karenge.
 *
 * ! 4. Aggregate Results
 *      Sab evaluation scores ko combine kiya jayega.
 *
 * ! 5. Control Routing
 *      System decide karega:
 *
 *      Agar score accha hai → Success
 *      Agar score low hai → Feedback
 *
 * ! 6. Give Feedback
 *      Student ko bataya jayega kaha improvement chahiye.
 *
 * ! 7. Collect Revision
 *      Student fir se essay improve karke submit karega.
 *
 * ! 8. Show Success
 *      Jab essay satisfactory ho jaye tab success message
 *      show hoga.
 *
 * ===============================================================
 * ESSAY EVALUATION FLOW — LANGUAGE NODES GRAPH
 * ===============================================================
 *
 *                        +-------------------+
 *                        |  Generate Topic   |
 *                        +-------------------+
 *                                  |
 *                                  v
 *                        +-------------------+
 *                        |   Write Essay     |<----------------------.
 *                        +-------------------+                       |
 *                           /        |        \                      |
 *                          /         |         \                     |
 *                         v          v          v                    |
 *              +----------------+ +------------------+ +-------------+----+
 *              | Clarity of     | | Depth of         | |  Language        |
 *              | Thought        | | Analysis         | |                 |
 *              +----------------+ +------------------+ +-----------------+
 *                         \           |           /
 *                          \          |          /
 *                           \         |         /
 *                            v        v        v
 *                        +----------------------+
 *                        |   Final Evaluation   |
 *                        +----------------------+
 *                             /           \
 *                            /             \
 *                           v               v
 *                 +----------------+   +-------------------+
 *                 |    Success     |   |  Fail, Feedback   |
 *                 +----------------+   +-------------------+
 *                        |                     |
 *                        v                     v
 *                      END                 +----------+
 *                                          | Retake?  |
 *                                          +----------+
 *                                                |
 *                                                '-----------> Write Essay
 *
 * ===============================================================
 * Graph Notes
 * ===============================================================
 *
 * • Nodes  → Process / task stages
 * • Edges  → Directional control flow
 * • Loop   → Retry mechanism
 * • Parallel nodes → Multiple evaluations together
 *
 * ---------------------------------------------------------------
 * Important Understanding
 * ---------------------------------------------------------------
 *
 * LangGraph mein internally:
 *
 * Node → ek simple Python function hota hai
 *
 * Example mental model:
 *
 * node(state):
 *     # task perform karo
 *     return updated_state
 *
 * Nodes basically batate hain:
 *
 *      "Kya kaam karna hai?"
 *
 * Edges batate hain:
 *
 *      "Next kaun sa node execute hoga?"
 *
 * Example:
 *
 * Node A complete hua
 *      ↓
 * Edge decide karega
 *      ↓
 * Node B ya Node C
 *
 * Matlab edges control karte hain:
 *
 * • kab kya execute hoga
 * • kaunsa path follow hoga
 * • loop kab chalega
 *
 * ===============================================================
 */