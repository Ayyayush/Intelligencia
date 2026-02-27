/**
 *
 * ---------------------------------------------------------------
 * ! Challenge 7 : Observability
 * ---------------------------------------------------------------
 *
 * Observability refers to how easily we can:
 *
 * • Debug a system
 * • Monitor workflow execution
 * • Understand what the system is doing at runtime
 *
 * In complex AI workflows, observability becomes extremely
 * important because many components interact with each other.
 *
 *
 * ---------------------------------------------------------------
 * ! What Observability Helps With
 * ---------------------------------------------------------------
 *
 * Observability allows developers to track things like:
 *
 * • Which step of the workflow is currently running
 * • What inputs were given to the model
 * • What outputs were generated
 * • Where an error occurred
 * • How long each step took
 *
 * This makes debugging and monitoring much easier.
 *
 *
 * ---------------------------------------------------------------
 * ! Observability in LangChain
 * ---------------------------------------------------------------
 *
 * LangChain provides observability support through a tool
 * called:
 *
 *                         LangSmith
 *
 * LangSmith helps developers monitor and debug
 * LangChain applications.
 *
 *
 * Example features of LangSmith:
 *
 * • Trace visualization
 * • Step-by-step execution tracking
 * • Input/output inspection
 * • Error monitoring
 * • Performance analysis
 *
 *
 * ---------------------------------------------------------------
 * ! The Problem with LangSmith
 * ---------------------------------------------------------------
 *
 * The limitation is that LangSmith can only monitor
 * the parts of the system that are inside LangChain.
 *
 * However, as we discussed earlier, when building
 * complex workflows using LangChain we often need
 * to write a lot of additional code.
 *
 * This extra code is called:
 *
 *                         Glue Code
 *
 *
 * Example of glue code:
 *
 * • Control flow logic
 * • Loops
 * • Conditional routing
 * • State handling
 * • Event triggers
 *
 *
 * ---------------------------------------------------------------
 * ! Observability Gap
 * ---------------------------------------------------------------
 *
 * LangSmith can track:
 *
 *     LangChain chains
 *
 * But it cannot track:
 *
 *     External glue code written outside the chain.
 *
 *
 * Example:
 *
 * while loop controlling workflow
 *        ↓
 * conditional logic
 *        ↓
 * LangChain chain execution
 *
 *
 * LangSmith will only observe the chain,
 * but the surrounding workflow logic remains invisible.
 *
 *
 * ---------------------------------------------------------------
 * ! Why This Is a Problem
 * ---------------------------------------------------------------
 *
 * Because large AI systems contain a lot of glue code,
 * debugging becomes difficult when only a small part
 * of the workflow is observable.
 *
 * Developers cannot easily see the full execution flow.
 *
 *
 * ---------------------------------------------------------------
 * ! How LangGraph Improves Observability
 * ---------------------------------------------------------------
 *
 * In LangGraph, the entire workflow is defined
 * inside a graph structure.
 *
 * Because of this:
 *
 * • Nodes represent steps
 * • Edges represent transitions
 * • State changes are tracked
 *
 * This allows the entire workflow to be monitored
 * more easily.
 *
 * When integrated with LangSmith, LangGraph provides
 * better visibility into the full workflow execution.
 *
 *
 * ---------------------------------------------------------------
 * ! Conclusion
 * ---------------------------------------------------------------
 *
 * Observability is essential for debugging and monitoring
 * complex AI workflows.
 *
 * While LangChain provides observability through LangSmith,
 * it cannot track glue code written outside the chain.
 *
 * LangGraph improves this by structuring the entire
 * workflow as a graph, making monitoring and debugging
 * much easier.
 *
 *
 * ===============================================================
 */