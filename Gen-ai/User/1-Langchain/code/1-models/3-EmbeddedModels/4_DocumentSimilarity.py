from dotenv import load_dotenv
import os
import numpy as np
from sklearn.metrics.pairwise import cosine_similarity

from langchain_groq import GroqEmbeddings

# ----------------------------------------
# Load environment variables
# ----------------------------------------
load_dotenv()

# ----------------------------------------
# Initialize Groq Embeddings using API key
# ----------------------------------------
embedding = GroqEmbeddings(
    groq_api_key=os.getenv("GROQ_API_KEY")
)

# ----------------------------------------
# Documents
# ----------------------------------------
documents = [
    "Virat Kohli is an Indian cricketer known for his aggressive batting and leadership.",
    "MS Dhoni is a former Indian captain famous for his calm demeanor and finishing skills.",
    "Sachin Tendulkar, also known as the God of Cricket, holds many batting records.",
    "Rohit Sharma is known for his elegant batting and record-breaking double centuries.",
    "Jasprit Bumrah is an Indian fast bowler known for his unorthodox action and yorkers."
]

# ----------------------------------------
# Query
# ----------------------------------------
query = "tell me about virat kohli"

# ----------------------------------------
# Generate embeddings
# ----------------------------------------
doc_embeddings = embedding.embed_documents(documents)
query_embedding = embedding.embed_query(query)

# ----------------------------------------
# Cosine similarity
# ----------------------------------------
scores = cosine_similarity([query_embedding], doc_embeddings)[0]

# ----------------------------------------
# Best matching document
# ----------------------------------------
best_index = np.argmax(scores)

print("Most similar document:")
print(documents[best_index])
