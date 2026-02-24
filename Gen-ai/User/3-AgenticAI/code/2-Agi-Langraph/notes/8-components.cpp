/**
 * ===============================================================
 * 🧩 Core Components of an Agentic AI System
 * ===============================================================
 *
 * An Agentic AI system is composed of multiple interconnected
 * components that work together to achieve a goal autonomously.
 *
 * ---------------------------------------------------------------
 * 🧠 1. Brain
 * ---------------------------------------------------------------
 *
 * The Brain is the intelligence core of the agent.
 *
 * Responsibilities:
 *   - Understanding the goal
 *   - Reasoning and decision-making
 *   - Planning and re-planning
 *
 * Typically implemented using:
 *   - Large Language Models (LLMs)
 *
 * In simple terms:
 *   Brain = Thinks and decides what to do.
 *
 * ---------------------------------------------------------------
 * 🎛️ 2. Orchestrator
 * ---------------------------------------------------------------
 *
 * The Orchestrator controls the overall workflow of the agent.
 *
 * Responsibilities:
 *   - Manages execution order
 *   - Routes decisions between components
 *   - Handles loops, retries, and branching logic
 *
 * Example:
 *   Planning → Tool Call → Observation → Re-plan
 *
 * In frameworks like LangGraph:
 *   - Orchestrator is implemented using graphs (nodes & edges)
 *
 * ---------------------------------------------------------------
 * 🛠️ 3. Tools
 * ---------------------------------------------------------------
 *
 * Tools are external capabilities that allow the agent to
 * interact with the real world.
 *
 * Examples:
 *   - APIs (LinkedIn, Email, Calendar)
 *   - Databases
 *   - Code execution environments
 *   - Search engines
 *
 * In simple terms:
 *   Tools = Hands of the agent.
 *
 * ---------------------------------------------------------------
 * 🧠 4. Memory
 * ---------------------------------------------------------------
 *
 * Memory enables context awareness and continuity.
 *
 * Types of Memory:
 *
 * 🔹 Short-Term Memory
 *    - Current task state
 *    - Recent actions and observations
 *
 * 🔹 Long-Term Memory
 *    - Past interactions
 *    - User preferences
 *    - Organizational knowledge
 *
 * Without memory:
 *   - Agent forgets progress
 *   - Decisions become inconsistent
 *
 * ---------------------------------------------------------------
 * 👨‍✈️ 5. Supervisor
 * ---------------------------------------------------------------
 *
 * The Supervisor oversees the agent’s behavior.
 *
 * Responsibilities:
 *   - Enforces policies and guardrails
 *   - Handles Human-in-the-Loop (HITL)
 *   - Monitors performance and safety
 *
 * Examples:
 *   - Approving sensitive actions
 *   - Stopping unsafe executions
 *   - Escalating decisions to humans
 *
 * ---------------------------------------------------------------
 * 🔗 How Components Work Together
 * ---------------------------------------------------------------
 *
 *   Brain → Plans & reasons
 *   Orchestrator → Controls flow
 *   Tools → Execute actions
 *   Memory → Maintains context
 *   Supervisor → Ensures safety & control
 *
 * ---------------------------------------------------------------
 * 🎯 One-Line Summary (Interview Ready)
 * ---------------------------------------------------------------
 *
 * Agentic AI = Brain + Orchestrator + Tools + Memory + Supervision
 *
 * ===============================================================
 */