/**
 *
 * ---------------------------------------------------------------
 * ! Challenge 5 : Human in the Loop
 * ---------------------------------------------------------------
 *
 * Human-in-the-loop means that at certain stages of a workflow,
 * the system must wait for human approval before proceeding.
 *
 * In real-world systems, this is very common because
 * some decisions are risky and require human accountability.
 *
 *
 * ---------------------------------------------------------------
 * ! Example
 * ---------------------------------------------------------------
 *
 * Hiring Workflow Example:
 *
 * Generate Job Description
 *        ↓
 * HR Approval Required
 *        ↓
 * Post Job
 *
 *
 * Until HR approves the Job Description,
 * the workflow should NOT continue to the next step.
 *
 * The system must pause and wait for human input.
 *
 *
 * ---------------------------------------------------------------
 * ! Why Human in the Loop Is Important
 * ---------------------------------------------------------------
 *
 * Many real-world workflows require human oversight.
 *
 * Example scenarios:
 *
 * • Approving job descriptions
 * • Approving financial transactions
 * • Reviewing generated reports
 * • Approving candidate hiring decisions
 *
 * In these cases, automation must pause until
 * a human decision is received.
 *
 *
 * ---------------------------------------------------------------
 * ! Problem in LangChain
 * ---------------------------------------------------------------
 *
 * LangChain does not provide a built-in mechanism
 * for human-in-the-loop workflows.
 *
 * There is no native feature that allows:
 *
 * • pausing a chain
 * • waiting for human approval
 * • resuming execution later
 *
 *
 * ---------------------------------------------------------------
 * ! Possible Workaround
 * ---------------------------------------------------------------
 *
 * One possible approach is to manually ask for
 * human input inside the chain.
 *
 * Example:
 *
 * Step1 → Step2 → Ask Human → Step3
 *
 * But this approach has a major limitation.
 *
 * If the human response takes a long time
 * (for example 24 hours), the workflow will remain
 * blocked during that entire time.
 *
 *
 * ---------------------------------------------------------------
 * ! Problem with Long Running Workflows
 * ---------------------------------------------------------------
 *
 * Many real-world systems require long running workflows.
 *
 * Example:
 *
 * Job posted
 *        ↓
 * Wait for applications (7 days)
 *        ↓
 * HR reviews candidates
 *        ↓
 * HR approves final candidate
 *
 * These workflows may take days or even weeks.
 *
 * LangChain was not originally designed for
 * such long-running processes.
 *
 *
 * ---------------------------------------------------------------
 * ! Conclusion
 * ---------------------------------------------------------------
 *
 * In short:
 *
 * LangChain does NOT provide built-in support for
 * human-in-the-loop workflows.
 *
 * Because of this, implementing such workflows
 * becomes complex and requires additional code.
 *
 * This is another reason why LangGraph was introduced,
 * as it supports pausing, state persistence,
 * and human interaction within workflows.
 *
 *
 * ===============================================================
 */