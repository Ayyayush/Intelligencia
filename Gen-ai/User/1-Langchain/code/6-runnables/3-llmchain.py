from dotenv import load_dotenv
from langchain_groq import ChatGroq
from langchain_core.prompts import PromptTemplate
from langchain_core.output_parsers import StrOutputParser

load_dotenv()

# -----------------------------------
# Initialize the LLM
# -----------------------------------
llm = ChatGroq(
    model="llama-3.1-8b-instant",
    temperature=0.7
)

# -----------------------------------
# Create Prompt Template
# -----------------------------------
prompt = PromptTemplate(
    input_variables=["topic"],
    template="Suggest a catchy blog title about {topic}."
)

parser = StrOutputParser()

# -----------------------------------
# Runnable-based Chain (Modern LLMChain)
# -----------------------------------
chain = prompt | llm | parser

# -----------------------------------
# Run the chain
# -----------------------------------
topic = input("Enter a topic: ")
output = chain.invoke({"topic": topic})

# -----------------------------------
# Output
# -----------------------------------
print("Generated Blog Title:", output)
