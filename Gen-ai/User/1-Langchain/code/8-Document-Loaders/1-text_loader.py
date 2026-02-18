from dotenv import load_dotenv
from langchain_community.document_loaders import TextLoader
from langchain_groq import ChatGroq
from langchain_core.prompts import PromptTemplate
from langchain_core.output_parsers import StrOutputParser

load_dotenv()



# LLM
model = ChatGroq(
    model="llama-3.1-8b-instant",
    temperature=0.5
)



# Prompt
prompt = PromptTemplate(
    template="Write a summary for the following poem:\n{poem}",
    input_variables=["poem"]
)

parser = StrOutputParser()



# Document Loader
loader = TextLoader("cricket.txt", encoding="utf-8")
docs = loader.load()



# Inspect loaded documents
print(type(docs))                 # list
print(len(docs))                  # number of documents
print(type(docs[0])) 
print(docs[0].page_content)       # actual text
print(docs[0].metadata)           # metadata (source, etc.)



# Chain
chain = prompt | model | parser



# Run chain on loaded document
print(chain.invoke({"poem": docs[0].page_content}))
