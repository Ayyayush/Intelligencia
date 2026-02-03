from langchain_groq import ChatGroq
from dotenv import load_dotenv

load_dotenv()

# Ab hum ChatModel pe kaam karna seekh rahe hain

llm = ChatGroq(
     model="llama-3.1-8b-instant",   # ✅ supported Groq model
    temperature=1.5
)

response = llm.invoke("Suggest me 5 indian male names")
print(response.content)
