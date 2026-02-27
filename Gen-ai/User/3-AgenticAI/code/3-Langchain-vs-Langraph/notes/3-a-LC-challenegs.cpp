/**
 * 
 * ---------------------------------------------------------------
 * ! Building the Hiring Workflow using LangChain
 * ---------------------------------------------------------------
 *
 * Let's try to see how we would build the automated hiring workflow
 * using LangChain.
 *
 



 
 *
 * ---------------------------------------------------------------
 * ! Challenges
 * ---------------------------------------------------------------
 *
 * 1️⃣ Control Flow Complexity
 *
 * The hiring workflow we saw earlier is highly NON-LINEAR.
 *
 * It contains:
 *
 * • Conditional branching
 * • Loops
 * • Workflow jumps
 *
 * Example:
 *
 * If JD is not approved → regenerate JD again.
 *
 * Because of these behaviors, building the full workflow
 * directly in LangChain becomes difficult.
 *
 *
 * ---------------------------------------------------------------
 * ! Small Demonstration
 * ---------------------------------------------------------------
 *
 * To understand this limitation, let's implement a small part
 * of the workflow using LangChain.
 *
 * (Below code is kept exactly as-is for demonstration.)
 *
 * ---------------------------------------------------------------
 *
 * from langchain_openai import ChatOpenAI
 * from langchain.prompts import ChatPromptTemplate
 * from langchain.schema.output_parser import StrOutputParser
 *
 * # ------------------------------------------------------------
 * # Step 1: Hiring Prompt
 * # ------------------------------------------------------------
 * hiring_prompt = "We need to hire a Software Engineer for our backend team."
 *
 * # ------------------------------------------------------------
 * # Step 2: Create JD using LLM
 * # ------------------------------------------------------------
 * llm = ChatOpenAI(model="gpt-4", temperature=0)
 *
 * jd_prompt = ChatPromptTemplate.from_template(
 *     "Create a job description based on the hiring request:\n\n{request}"
 * )
 *
 * jd_chain = jd_prompt | llm | StrOutputParser()
 *
 * # ------------------------------------------------------------
 * # Step 3: Approval function
 * # ------------------------------------------------------------
 * def approve_jd(jd: str) -> bool:
 *     """
 *     Simulate JD approval logic.
 *     You can add real checks here (length, keywords, etc.)
 *     """
 *     return "Approved" in jd or len(jd) > 100
 *
 * # ------------------------------------------------------------
 * # Step 4: Post JD function
 * # ------------------------------------------------------------
 * def post_jd(jd: str):
 *     print("JD Approved and Posted:\n")
 *     print(jd)
 *
 * # ------------------------------------------------------------
 * # Step 5: Loop until JD is approved
 * # ------------------------------------------------------------
 * approved = False
 * jd_output = None
 *
 * while not approved:
 *     jd_output = jd_chain.invoke({"request": hiring_prompt})
 *
 *     print("Generated JD:\n")
 *     print(jd_output)
 *
 *     approved = approve_jd(jd_output)
 *
 *     if not approved:
 *         print("\nJD not approved. Regenerating...\n")
 *
 * # ------------------------------------------------------------
 * # Step 6: Post the approved JD
 * # ------------------------------------------------------------
 * post_jd(jd_output)
 *
 *
 * ---------------------------------------------------------------
 * ! What is happening here?
 * ---------------------------------------------------------------
 *
 * Notice that we had to write a lot of custom Python code
 * around the LangChain chain.
 *
 * Example:
 *
 * • Loop logic (while loop)
 * • Approval checks
 * • Control flow decisions
 *
 * This happens because LangChain does NOT provide built-in
 * constructs for handling:
 *
 *   - Loops
 *   - Conditional branching
 *   - Complex state transitions
 *
 *
 * ---------------------------------------------------------------
 * ! Glue Code
 * ---------------------------------------------------------------
 *
 * The custom code written outside the LangChain library
 * to manage workflow logic is called:
 *
 *                        "Glue Code"
 *
 * It connects different components manually.
 *
 * Problem:
 *
 * In large workflows this glue code grows very large
 * and becomes difficult to manage.
 *
 *
 * ---------------------------------------------------------------
 * ! Core Limitation of LangChain
 * ---------------------------------------------------------------
 *
 * LangChain works very well for:
 *
 * • Linear workflows
 * • Sequential pipelines
 *
 * Example:
 *
 * Prompt → LLM → Output
 *
 * But it struggles with:
 *
 * • Non-linear workflows
 * • Complex branching
 * • Stateful loops
 * • Long-running agent systems
 *
 *
 * ---------------------------------------------------------------
 * ! Why LangGraph Was Introduced
 * ---------------------------------------------------------------
 *
 * LangGraph solves this exact problem by providing:
 *
 * • Graph-based execution
 * • Native loop support
 * • Conditional edges
 * • State management
 *
 * This makes it ideal for building Agentic AI systems.
 *
 *
 * ===============================================================
 */