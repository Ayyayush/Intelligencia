/**
 *
 * ---------------------------------------------------------------
 * ! Challenge 3 : Event Driven Execution
 * ---------------------------------------------------------------
 *
 * Workflows can generally be of two types:
 *
 * 1️⃣ Sequential Workflow
 * 2️⃣ Event Driven Workflow
 *
 *
 * ---------------------------------------------------------------
 * ! Sequential Workflow
 * ---------------------------------------------------------------
 *
 * In a sequential workflow, execution happens step by step.
 *
 * Example flow:
 *
 * Step 1 → Step 2 → Step 3 → Step 4 → Step 5
 *
 * Each step runs immediately after the previous step finishes.
 *
 * Example:
 *
 * Hiring Request
 *        ↓
 * Generate Job Description
 *        ↓
 * Approve JD
 *        ↓
 * Post Job
 *
 * Here every step runs one after another in order.
 *
 *
 * ---------------------------------------------------------------
 * ! Event Driven Workflow
 * ---------------------------------------------------------------
 *
 * In an event-driven workflow, execution does NOT always
 * continue immediately.
 *
 * Sometimes the workflow pauses and waits for an external event
 * before continuing.
 *
 * Example triggers:
 *
 * • Time based trigger
 * • Human approval
 * • Email response
 * • New data arrival
 * • API callback
 *
 *
 * ---------------------------------------------------------------
 * ! Example in Hiring Workflow
 * ---------------------------------------------------------------
 *
 * In the automated hiring workflow, some steps depend on events.
 *
 * Example:
 *
 * Job Description Posted
 *         ↓
 * Wait for applications
 *         ↓
 * Monitor applications AFTER 7 days
 *
 * Here the workflow must pause until a trigger occurs.
 *
 * That trigger could be:
 *
 * • 7 days completed
 * • Minimum number of applicants reached
 * • HR manually triggering the next step
 *
 *
 * ---------------------------------------------------------------
 * ! Why This Is Difficult in LangChain
 * ---------------------------------------------------------------
 *
 * LangChain was originally designed for building
 * LLM pipelines.
 *
 * Example pipeline:
 *
 * Prompt → LLM → Output
 *
 * These pipelines are naturally sequential.
 *
 * Because of this, LangChain does NOT have native support for:
 *
 * • Event listeners
 * • Workflow pausing
 * • External triggers
 * • Long running workflows
 *
 *
 * ---------------------------------------------------------------
 * ! Problem When Implementing Hiring Workflow in LangChain
 * ---------------------------------------------------------------
 *
 * If we try to implement the hiring workflow using LangChain,
 * we often need to break it into multiple chains.
 *
 * Example:
 *
 * Chain 1
 * Generate JD → Approve JD → Post JD
 *
 * Chain 2
 * Monitor Applications → Shortlist Candidates → Interview
 *
 * Chain 3
 * Send Offer → Handle Negotiation → Onboarding
 *
 *
 * Now we must manually handle:
 *
 * • State transfer between chains
 * • Event triggers
 * • Workflow resumption
 * • Loop handling
 *
 * This requires writing a lot of extra Python code.
 *
 *
 * ---------------------------------------------------------------
 * ! Additional Glue Code Required
 * ---------------------------------------------------------------
 *
 * To make this work we must implement:
 *
 * • State storage
 * • Event listeners
 * • Workflow triggers
 * • Loop control
 *
 * All of this logic exists OUTSIDE LangChain.
 *
 * This again increases the amount of glue code.
 *
 *
 * ---------------------------------------------------------------
 * ! Why This Is Not Ideal
 * ---------------------------------------------------------------
 *
 * In large systems this approach becomes messy because:
 *
 * • Too many chains
 * • Too much state management
 * • Too much external logic
 *
 * The workflow becomes difficult to maintain and debug.
 *
 *
 * ---------------------------------------------------------------
 * ! Why LangGraph Solves This
 * ---------------------------------------------------------------
 *
 * LangGraph was designed to support:
 *
 * • Event driven workflows
 * • Graph based execution
 * • Persistent state
 * • Long running agents
 * • Conditional transitions
 *
 * This makes it much better suited for complex workflows
 * like the automated hiring system.
 *
 *
 * ===============================================================
 */