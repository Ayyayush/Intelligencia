from dotenv import load_dotenv
from langchain_core.prompts import PromptTemplate
from langchain_core.output_parsers import StrOutputParser
from langchain_core.runnables import RunnablePassthrough
from langchain_groq import ChatGroq

load_dotenv()

# -------------------------------
# Model
# -------------------------------
model = ChatGroq(model="llama3-8b-8192")

# -------------------------------
# 1st prompt -> detailed report
# -------------------------------
template1 = PromptTemplate(
    template="Write a detailed report on {topic}",
    input_variables=["topic"]
)

# -------------------------------
# 2nd prompt -> summary
# -------------------------------
template2 = PromptTemplate(
    template="Write a 5 line summary on the following text:\n{text}",
    input_variables=["text"]
)

# -------------------------------
# Output parser
# -------------------------------
parser = StrOutputParser()

# -------------------------------
# Chain
# -------------------------------
chain = (
    template1
    | model
    | parser
    | {"text": RunnablePassthrough()}   # mapping output to 'text'
    | template2
    | model
    | parser
)

# -------------------------------
# Run chain
# -------------------------------
result = chain.invoke({"topic": "black hole"})

print(result)
