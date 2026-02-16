from dotenv import load_dotenv
from langchain_community.document_loaders import TextLoader
from langchain_text_splitters import RecursiveCharacterTextSplitter
from langchain_community.vectorstores import FAISS
from langchain_community.embeddings import HuggingFaceEmbeddings
from langchain_groq import ChatGroq
from langchain.chains import RetrievalQA

load_dotenv()

# -----------------------------------
# Load the document
# -----------------------------------
loader = TextLoader("docs.txt")            # make sure docs.txt exists
documents = loader.load()

# -----------------------------------
# Split text into chunks
# -----------------------------------
text_splitter = RecursiveCharacterTextSplitter(
    chunk_size=500,
    chunk_overlap=50
)
docs = text_splitter.split_documents(documents)

# -----------------------------------
# Create embeddings & store in FAISS
# -----------------------------------
embeddings = HuggingFaceEmbeddings(
    model_name="sentence-transformers/all-MiniLM-L6-v2"
)

vectorstore = FAISS.from_documents(
    docs,
    embeddings
)

# -----------------------------------
# Create retriever
# -----------------------------------
retriever = vectorstore.as_retriever()

# -----------------------------------
# Initialize LLM
# -----------------------------------
llm = ChatGroq(
    model="llama-3.1-8b-instant",
    temperature=0.7
)

# -----------------------------------
# Create RetrievalQA Chain
# -----------------------------------
qa_chain = RetrievalQA.from_chain_type(
    llm=llm,
    retriever=retriever,
    chain_type="stuff"                     # simplest retrieval strategy
)

# -----------------------------------
# Ask a question
# -----------------------------------
query = "What are the key takeaways from the document?"
answer = qa_chain.invoke({"query": query})

# -----------------------------------
# Output
# -----------------------------------
print("Answer:\n", answer["result"])
