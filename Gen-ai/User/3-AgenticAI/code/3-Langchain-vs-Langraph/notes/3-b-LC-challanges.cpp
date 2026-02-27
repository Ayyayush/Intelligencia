/**
 *
 * ---------------------------------------------------------------
 * ! Challenge 2 : Handling State
 * ---------------------------------------------------------------
 *
 * In a complex workflow if we try to build the system using
 * LangChain, we start facing problems related to STATE HANDLING.
 *
 * Why?
 *
 * Because a real workflow needs to track many pieces of information
 * at different stages of execution.
 *
 * Example:
 *
 * • Job description generated or not
 * • JD approved or not
 * • Number of applicants
 * • Candidate interview results
 * • Offer accepted or renegotiated
 * • Onboarding completed
 *
 * All of this information together forms the WORKFLOW STATE.
 *
 *
 * ---------------------------------------------------------------
 * ! Example Workflow State
 * ---------------------------------------------------------------
 *
 * state = {
 *
 *     "goal": "Hire a backend software engineer",
 *
 *
 *     # -------------------------------------------------
 *     # Job Description Phase
 *     # -------------------------------------------------
 *     "jd": "",                  # Job description text
 *     "jd_approved": False,      # Whether HR approved JD
 *     "jd_posted": False,        # Whether JD is posted online
 *
 *
 *     # -------------------------------------------------
 *     # Applications Phase
 *     # -------------------------------------------------
 *     "num_applicants": 5,       # Expected applicants
 *     "num_applications": 0,     # Applications received so far
 *
 *     "shortlisted_candidates": {
 *
 *         # candidate_id : candidate_data
 *
 *         # "candidate_id": {
 *         #     "name": "",
 *         #     "score": "",
 *         #     "status": ""
 *         # }
 *
 *     },
 *
 *
 *     # -------------------------------------------------
 *     # Interview Phase
 *     # -------------------------------------------------
 *     "interview_questions": [],
 *
 *
 *     # -------------------------------------------------
 *     # Offer Phase
 *     # -------------------------------------------------
 *     "offer_status": {
 *         "sent": False,
 *         "accepted": False,
 *         "negotiated": False
 *     },
 *
 *
 *     # -------------------------------------------------
 *     # Onboarding Phase
 *     # -------------------------------------------------
 *     "onboarding_status": {
 *         "completed": False,
 *         "start_date": None,
 *         "employee_id": None
 *     }
 * }
 *
 *
 * ---------------------------------------------------------------
 * ! Problems When Handling This State in LangChain
 * ---------------------------------------------------------------
 *
 * When we try to manage this large state object in LangChain,
 * several problems appear.
 *
 *
 * 1️⃣ State Passing Problem
 *
 * Every chain step must manually receive and return the updated state.
 *
 * Example:
 *
 *     state → JD generator → updated state
 *     state → approval step → updated state
 *     state → posting step → updated state
 *
 * So we constantly pass the state object between functions.
 *
 *
 * ---------------------------------------------------------------
 *
 * 2️⃣ State Mutation Problems
 *
 * Different parts of the workflow update different keys.
 *
 * Example:
 *
 * • JD generator modifies:
 *      state["jd"]
 *
 * • Approval step modifies:
 *      state["jd_approved"]
 *
 * • Interview stage modifies:
 *      state["shortlisted_candidates"]
 *
 * Managing these updates manually becomes messy.
 *
 *
 * ---------------------------------------------------------------
 *
 * 3️⃣ State Consistency Issues
 *
 * If one step forgets to update the state correctly,
 * the workflow breaks.
 *
 * Example:
 *
 * If:
 *
 *      state["jd_posted"] = False
 *
 * but the system continues to the application stage,
 * the workflow becomes logically incorrect.
 *
 *
 * ---------------------------------------------------------------
 *
 * 4️⃣ Difficult Debugging
 *
 * When the workflow becomes large, it becomes difficult
 * to track:
 *
 * • which step modified the state
 * • what the previous state was
 * • where the workflow broke
 *
 *
 * ---------------------------------------------------------------
 *
 * 5️⃣ Scaling Problem
 *
 * As the workflow grows, the state object becomes larger
 * and the glue code required to manage it increases rapidly.
 *
 * Example:
 *
 * Hiring Workflow
 *        ↓
 * 20+ workflow steps
 *        ↓
 * 50+ state variables
 *        ↓
 * Hundreds of lines of glue code
 *
 *
 * ---------------------------------------------------------------
 * ! Why LangGraph Solves This
 * ---------------------------------------------------------------
 *
 * LangGraph introduces a structured way to manage state:
 *
 * • Typed State Objects
 * • Automatic State Propagation
 * • Node-based updates
 * • Graph transitions
 *
 * Instead of manually passing state everywhere,
 * LangGraph automatically tracks and updates it.
 *
 *
 * ===============================================================
 */