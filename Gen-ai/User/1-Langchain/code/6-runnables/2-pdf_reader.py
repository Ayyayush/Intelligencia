from dotenv import load_dotenv
from langchain_community.document_loaders import TextLoader
from langchain_text_splitters import RecursiveCharacterTextSplitter
from langchain_groq import ChatGroq
from langchain_community.vectorstores import FAISS
from langchain_community.embeddings import HuggingFaceEmbeddings

load_dotenv()

# -----------------------------------
# Load the document
# -----------------------------------
loader = TextLoader("docs.txt")          # ensure docs.txt exists
documents = loader.load()

# -----------------------------------
# Split the document into chunks
# -----------------------------------
text_splitter = RecursiveCharacterTextSplitter(
    chunk_size=500,
    chunk_overlap=50
)
docs = text_splitter.split_documents(documents)

# -----------------------------------
# Create embeddings and store in FAISS
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
# Manual retrieval step
# -----------------------------------
query = "What are the key takeaways from the document?"
retrieved_docs = retriever.get_relevant_documents(query)

# -----------------------------------
# Combine retrieved chunks
# -----------------------------------
retrieved_text = "\n".join(
    doc.page_content for doc in retrieved_docs
)

# -----------------------------------
# Initialize LLM
# -----------------------------------
llm = ChatGroq(
    model="llama-3.1-8b-instant",
    temperature=0.7
)

# -----------------------------------
# Manual prompt construction
# -----------------------------------
prompt = (
    f"Based on the following text, answer the question:\n"
    f"Question: {query}\n\n"
    f"Context:\n{retrieved_text}"
)

response = llm.invoke(prompt).content

# -----------------------------------
# Output
# -----------------------------------
print("Answer:\n", response)
