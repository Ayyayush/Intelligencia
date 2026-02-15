from langchain_groq import ChatGroq
from dotenv import load_dotenv
from langchain_core.prompts import PromptTemplate
from langchain_core.output_parsers import StrOutputParser

load_dotenv()

prompt1 = PromptTemplate(
    template="Generate a detailed report on {topic}",
    input_variables=["topic"]
)

prompt2 = PromptTemplate(
    template="Generate a 5 point summary from the following text:\n{text}",
    input_variables=["text"]
)

model = ChatGroq(
    model="llama-3.1-8b-instant",          # supported Groq model
    temperature=0.5                        # balanced creativity
)

parser = StrOutputParser()

# Sequential chain:
# topic → detailed report → summary
chain = prompt1 | model | parser | prompt2 | model | parser

result = chain.invoke(
    {"topic": "Unemployment in India"}      # input only for the first prompt
)

print(result)

# Optional: requires `pip install grandalf`
chain.get_graph().print_ascii()
