/**
 *
 * ---------------------------------------------------------------
 * ! Challenge 4 : Fault Tolerance
 * ---------------------------------------------------------------
 *
 * Fault tolerance means the ability of a system to continue
 * working or recover even when some error or failure occurs.
 *
 * In long running workflows this becomes extremely important.
 *
 * Example:
 *
 * If a workflow runs for 2 hours and crashes at the last step,
 * we should NOT have to restart the entire workflow again.
 *
 * A good system should recover and continue execution
 * from the point where the failure happened.
 *
 *
 * ---------------------------------------------------------------
 * ! Types of Faults
 * ---------------------------------------------------------------
 *
 * In general, faults can be divided into two categories:
 *
 *
 * 1️⃣ Small Faults
 *
 * These are temporary or minor issues that occur during execution.
 *
 * Example:
 *
 * • API timeout
 * • LLM response failure
 * • network interruption
 * • temporary database connection issue
 *
 * In such cases, the system should retry the failed step
 * instead of stopping the entire workflow.
 *
 *
 * ---------------------------------------------------------------
 *
 * 2️⃣ Big Faults
 *
 * These are serious failures that stop the entire system.
 *
 * Example:
 *
 * • Server crash
 * • System shutdown
 * • Power failure
 * • Container restart
 *
 * In such situations, the workflow execution stops completely.
 *
 * When the system starts again, it should resume from
 * the last successful step instead of starting from scratch.
 *
 *
 * ---------------------------------------------------------------
 * ! Problem in LangChain
 * ---------------------------------------------------------------
 *
 * LangChain does not provide built-in fault tolerance
 * for workflows.
 *
 * Consider a chain with multiple steps:
 *
 * Step1 → Step2 → Step3 → Step4 → Step5
 *
 *
 * Suppose the system fails at Step5.
 *
 * When the system restarts, LangChain cannot automatically
 * resume from Step5.
 *
 * Instead, the entire chain has to run again from Step1.
 *
 *
 * Example problem:
 *
 * Step1 : Generate JD
 * Step2 : Approve JD
 * Step3 : Post Job
 * Step4 : Collect Applications
 * Step5 : Interview Candidates
 *
 * If failure happens at Step5,
 * the workflow must restart from Step1.
 *
 * This becomes inefficient for long workflows.
 *
 *
 * ---------------------------------------------------------------
 * ! Why LangGraph Solves This
 * ---------------------------------------------------------------
 *
 * LangGraph introduces a concept called:
 *
 *                    CHECKPOINTING
 *
 * Checkpointing means saving the workflow state
 * at different stages of execution.
 *
 *
 * Example:
 *
 * Step1 completed  → checkpoint saved
 * Step2 completed  → checkpoint saved
 * Step3 completed  → checkpoint saved
 *
 *
 * If the system crashes at Step5,
 * LangGraph can reload the last saved checkpoint
 * and resume execution from that step.
 *
 *
 * ---------------------------------------------------------------
 * ! Benefits of Fault Tolerance in LangGraph
 * ---------------------------------------------------------------
 *
 * • Automatic recovery from failures
 * • Retry mechanisms for small faults
 * • Resume execution from checkpoints
 * • Reliable long-running workflows
 *
 *
 * Because of these capabilities, LangGraph is
 * much more suitable for building:
 *
 * • Agentic AI systems
 * • Production workflows
 * • Long-running automation systems
 *
 *
 * ===============================================================
 */