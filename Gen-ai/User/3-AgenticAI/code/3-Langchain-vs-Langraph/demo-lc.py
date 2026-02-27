from langchain_openai import ChatOpenAI
from langchain.prompts import ChatPromptTemplate
from langchain.schema.output_parser import StrOutputParser

# ------------------------------------------------------------
# Step 1: Hiring Prompt
# ------------------------------------------------------------
hiring_prompt = "We need to hire a Software Engineer for our backend team."

# ------------------------------------------------------------
# Step 2: Create JD using LLM
# ------------------------------------------------------------
llm = ChatOpenAI(model="gpt-4", temperature=0)

jd_prompt = ChatPromptTemplate.from_template(
    "Create a job description based on the hiring request:\n\n{request}"
)

jd_chain = jd_prompt | llm | StrOutputParser()

# ------------------------------------------------------------
# Step 3: Approval function
# ------------------------------------------------------------
def approve_jd(jd: str) -> bool:
    """
    Simulate JD approval logic.
    You can add real checks here (length, keywords, etc.)
    """
    return "Approved" in jd or len(jd) > 100  # dummy logic

# ------------------------------------------------------------
# Step 4: Post JD function
# ------------------------------------------------------------
def post_jd(jd: str):
    print("JD Approved and Posted:\n")
    print(jd)

# ------------------------------------------------------------
# Step 5: Loop until JD is approved
# ------------------------------------------------------------
approved = False
jd_output = None

while not approved:
    jd_output = jd_chain.invoke({"request": hiring_prompt})
    print("Generated JD:\n")
    print(jd_output)

    approved = approve_jd(jd_output)

    if not approved:
        print("\nJD not approved. Regenerating...\n")

# ------------------------------------------------------------
# Step 6: Post the approved JD
# ------------------------------------------------------------
post_jd(jd_output)