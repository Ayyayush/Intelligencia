from dotenv import load_dotenv
from langchain_groq import ChatGroq
from langchain_core.prompts import PromptTemplate
from langchain_core.output_parsers import StrOutputParser
from langchain_core.runnables import (
    RunnableSequence,
    RunnableBranch,
    RunnablePassthrough
)

load_dotenv()

prompt1 = PromptTemplate(
    template="Write a detailed report on {topic}",
    input_variables=["topic"]
)

prompt2 = PromptTemplate(
    template="Summarize the following text:\n{text}",
    input_variables=["text"]
)

model = ChatGroq(
    model="llama-3.1-8b-instant",
    temperature=0.5
)

parser = StrOutputParser()

# Generates the detailed report
report_gen_chain = prompt1 | model | parser

# Conditional logic:
# If report is too long → summarize
# Else → pass as-is
branch_chain = RunnableBranch(
    (lambda x: len(x.split()) > 300, prompt2 | model | parser),
    RunnablePassthrough()
)

# Sequential pipeline
final_chain = RunnableSequence(
    report_gen_chain,
    branch_chain
)

print(final_chain.invoke({"topic": "Russia vs Ukraine"}))
