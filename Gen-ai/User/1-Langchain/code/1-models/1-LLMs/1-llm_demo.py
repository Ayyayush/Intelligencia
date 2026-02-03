from langchain_groq import ChatGroq
from dotenv import load_dotenv

load_dotenv()

llm = ChatGroq(
    model="llama-3.1-8b-instant",     # ✅ supported model
    temperature=0
)

response = llm.invoke("What is the Capital of India")
print(response)
print(response.content)