/**
 * ---------------------------------------------------------------
 * 📘 GenAI Playlist – LangChain
 * Topic: 🔧 Agent and Agent Executor
 * ---------------------------------------------------------------
 *
 *
 * ---------------------------------------------------------------
 * ! Agent vs Agent Executor
 * ---------------------------------------------------------------
 *
 * 🔹 Agent
 *
 * - The "brain" of the system
 * - Responsible for:
 *      ✔️ Reasoning (Thought)
 *      ✔️ Deciding actions (which tool to use)
 *
 * 👉 It does NOT execute tools
 *
 *
 * ---------------------------------------------------------------
 * 🔹 Agent Executor
 * ---------------------------------------------------------------
 *
 * - The "orchestrator" / controller
 * - Responsible for:
 *      ✔️ Running the loop
 *      ✔️ Executing tools
 *      ✔️ Managing conversation history
 *
 *
 * ---------------------------------------------------------------
 * ! ReAct Loop (Core of Execution)
 * ---------------------------------------------------------------
 *
 * Thought → Action → Observation → Repeat
 *
 * 👉 This loop is orchestrated by the Agent Executor
 *
 *
 * ---------------------------------------------------------------
 * ! Step-by-Step Working
 * ---------------------------------------------------------------
 *
 * 1️⃣ Sends user input + previous messages to Agent
 *
 * 2️⃣ Agent generates:
 *      - Thought
 *      - Action (tool name + input)
 *
 * 3️⃣ Agent Executor:
 *      - Executes the tool with given input
 *
 * 4️⃣ Gets tool output (Observation)
 *
 * 5️⃣ Adds observation back to message history
 *
 * 6️⃣ Sends updated history again to Agent
 *
 * 7️⃣ Loop continues until:
 *      👉 Agent returns "Final Answer"
 *
 *
 * ---------------------------------------------------------------
 * ! Important Understanding 🔥
 * ---------------------------------------------------------------
 *
 * Agent = THINKS
 * Agent Executor = ACTS + CONTROLS LOOP
 *
 *
 * ---------------------------------------------------------------
 * ! In Modern LangChain (Very Important)
 * ---------------------------------------------------------------
 *
 * Old:
 * ❌ AgentExecutor (built-in)
 *
 * New:
 * ✔️ YOU implement the loop manually
 *
 * 👉 while loop = Agent Executor
 *
 *
 * ---------------------------------------------------------------
 * ! Interview Ready Line 🔥
 * ---------------------------------------------------------------
 *
 * "An agent is responsible for reasoning and deciding actions,
 * while the agent executor orchestrates the execution loop by
 * invoking tools, managing state, and iterating until a final
 * answer is produced."
 *
 */


 /*
============================================================
            AGENT EXECUTION FLOW (ReAct Pattern)
============================================================

                    +----------------------+
                    |    Agent Executor    |
                    +----------------------+
                               |
                               v
                    +----------------------+
                    |  Receive User Query  |
                    +----------------------+
                               |
                               v
        +---------------------------------------------+
        | Pass User Query + Agent Scratchpad to Agent |
        +---------------------------------------------+
                               |
                               v
                      +------------------+
                      |  Agent Response  |
                      |   (Thought)      |
                      +------------------+
                         /            \
                        /              \
                       v                v

        +----------------------+   +----------------------+
        |     Agent Action     |   |     Agent Finish     |
        +----------------------+   +----------------------+
                  |                         |
                  v                         v

        +----------------------+   +----------------------+
        |     Execute Tool     |   |  Return Final Output |
        +----------------------+   +----------------------+
                  |
                  v
        +----------------------+
        |  Collect Observation |
        +----------------------+
                  |
                  v
        +----------------------+
        | Update Scratchpad    |
        +----------------------+
                  |
                  |
                  +-----------------------------------+
                                                      |
                                                      v
                                  (Loop back to Agent Response)

------------------------------------------------------------
Example Internal Working (AgentAction):

AgentAction(
    tool = "search_tool",
    tool_input = "population of Paris",
    log = "Thought: Now I need to find the population of Paris"
)

------------------------------------------------------------
Example Final Step (AgentFinish):

AgentFinish(
    return_values = {"output": "Paris is the capital of France..."},
    log = "Thought: I now know the final answer"
)

============================================================
FLOW SUMMARY (Hinglish Samajh 👇)
------------------------------------------------------------
1. User query aata hai
2. Agent sochta hai (Thought)
3. Decide karta hai:
   - Tool call kare (Agent Action)
   - Ya direct answer de (Agent Finish)
4. Agar tool call:
   - Tool execute hota hai
   - Observation milta hai
   - Scratchpad update hota hai
   - Phir se agent sochta hai (loop)
5. Jab answer mil jata hai → Final output return
============================================================
*/