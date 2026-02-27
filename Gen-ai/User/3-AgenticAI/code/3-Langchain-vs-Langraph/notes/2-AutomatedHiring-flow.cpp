/**
 * ============================================================================
 * Automated Hiring Workflow
 * ============================================================================
 *
 * This example explains how a real-world hiring process can be modeled
 * as an AI workflow.
 *
 * Later we will see how the same workflow can be implemented using
 * frameworks like LangChain or LangGraph.
 *
 * ============================================================================
 * Difference Between Workflows and Agents
 * ============================================================================
 *
 * Workflow
 * --------
 * • Predefined sequence of steps
 * • Deterministic execution
 * • Control flow is fixed
 * • Usually implemented with condition checks
 *
 * Example:
 * Step1 → Step2 → Step3 → Decision → Step4
 *
 * Agent
 * -----
 * • Goal driven
 * • Can decide next action dynamically
 * • Uses reasoning and tools
 * • Execution path is not fixed
 *
 * Example:
 * Goal → Plan → Tool → Observation → Re-plan
 *
 * In this example we first model the hiring process as a WORKFLOW.
 *
 * ============================================================================
 * Automated Hiring Workflow
 * Flowchart : v1.0
 * ============================================================================
 *
 *                               ( START )
 *                                   |
 *                                   v
 *                           +----------------+
 *                           | Hiring request |
 *                           +----------------+
 *                                   |
 *                                   v
 *                           +----------------+
 *                           |   Create job   |
 *                           +----------------+
 *                                   |
 *                                   v
 *                              /-----------\
 *                             /   Find ID   \
 *                            /---------------\
 *                              ^         |
 *                              | Yes     |
 *                              +---------+
 *                                   |
 *                                   v
 *                           +----------------+
 *                           |    Post job    |
 *                           +----------------+
 *                                   |
 *                                   v
 *                           +----------------------+
 *                           |   Invite candidates  |
 *                           +----------------------+
 *                                   |
 *                                   v
 *                            /----------------------\
 *                           /   Review applications  \
 *                          /--------------------------\
 *                             / Yes            No \
 *                            v                     v
 *
 *                   +----------------+      +----------------+
 *                   |    Invite ID   |      |   Schedule ID  |
 *                   +----------------+      +----------------+
 *                           |                     |
 *                           v                     v
 *                   +----------------+      +----------------------+
 *                   |  Send "No"     |      |   Conduct interviews |
 *                   |     email      |      +----------------------+
 *                   +----------------+                |
 *                           |                         v
 *                           |                  /---------------\
 *                           |                 /   Send offer    \
 *                           |                /-------------------\
 *                           |                 / Yes        No \
 *                           |                v               v
 *                           |        +--------------+   +----------------+
 *                           |        |  Send offer  |   |  Reject email  |
 *                           |        +--------------+   +----------------+
 *                           |                |                 |
 *                           |                v                 |
 *                           |         /-----------------\      |
 *                           |        /   Sign contract   \     |
 *                           |       /---------------------\    |
 *                           |        / Yes           No \      |
 *                           |       v                 v       |
 *                           | +-------------+    +------------+
 *                           | |  Onboarding |    | Renegotiate|
 *                           | +-------------+    +------------+
 *                           |        |                 |
 *                           |        v                 |
 *                           |       ( END ) <----------+
 *                           |
 *                           +----------------------------------
 *
 * ============================================================================
 *
 * Explanation of Workflow Steps
 *
 * 1. Hiring request
 *    HR raises requirement for a backend engineer.
 *
 * 2. Create job
 *    HR prepares job description and role details.
 *
 * 3. Find ID
 *    System checks if job ID already exists.
 *
 * 4. Post job
 *    Job is posted on hiring platforms (LinkedIn, job portals).
 *
 * 5. Invite candidates
 *    Candidates are notified about the opening.
 *
 * 6. Review applications
 *    HR reviews resumes and decides:
 *      • Suitable candidates
 *      • Unsuitable candidates
 *
 * 7. Invite / Reject
 *    • Reject → Send rejection email
 *    • Accept → Schedule interview
 *
 * 8. Conduct interviews
 *    Technical + HR interview rounds.
 *
 * 9. Send offer
 *    If candidate clears interviews.
 *
 * 10. Sign contract
 *     Candidate accepts offer and signs agreement.
 *
 * 11. Onboarding
 *     Candidate joins company and onboarding begins.
 *
 * ============================================================================
 *
 * Next Step:
 *
 * We will implement this workflow using LangChain
 * to understand how AI workflows can be automated.
 *
 * ============================================================================
 */