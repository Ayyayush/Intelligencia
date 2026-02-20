# -------------------------------------------------------------
# Semantic Meaning-Based Text Splitting using LangChain
# -------------------------------------------------------------

from dotenv import load_dotenv
from langchain_experimental.text_splitter import SemanticChunker
from langchain_community.embeddings import HuggingFaceEmbeddings

# -------------------------------------------------------------
# Load environment variables
# -------------------------------------------------------------
load_dotenv()

# -------------------------------------------------------------
# Initialize embedding model
# -------------------------------------------------------------
# Converts text into vectors for semantic similarity comparison
embeddings = HuggingFaceEmbeddings(
    model_name="sentence-transformers/all-MiniLM-L6-v2"
)

# -------------------------------------------------------------
# Initialize semantic chunker
# -------------------------------------------------------------
# Splits text when semantic meaning changes
text_splitter = SemanticChunker(
    embeddings,
    breakpoint_threshold_type="standard_deviation",
    breakpoint_threshold_amount=3
)

# -------------------------------------------------------------
# Sample text with multiple topics
# -------------------------------------------------------------
sample_text = """
Farmers were working hard in the fields, preparing the soil and planting seeds for the next season.
The sun was bright, and the air smelled of earth and fresh grass.

The Indian Premier League (IPL) is the biggest cricket league in the world.
People all over the world watch the matches and cheer for their favourite teams.

Terrorism is a big danger to peace and safety.
It causes harm to people and creates fear in cities and villages.
When such attacks happen, they leave behind pain and sadness.
To fight terrorism, we need strong laws, alert security forces,
and support from people who care about peace and safety.
"""

# -------------------------------------------------------------
# Create semantic chunks
# -------------------------------------------------------------
documents = text_splitter.create_documents([sample_text])

# -------------------------------------------------------------
# Output results
# -------------------------------------------------------------
print(f"\nTotal Semantic Chunks Created: {len(documents)}")

for i, doc in enumerate(documents):
    print(f"\n------------ Chunk {i+1} ------------\n")
    print(doc.page_content)