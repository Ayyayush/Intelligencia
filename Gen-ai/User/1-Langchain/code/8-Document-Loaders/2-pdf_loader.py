from langchain_community.document_loaders import PyPDFLoader

# Load PDF from same directory
loader = PyPDFLoader("dl-curriculum.pdf")

docs = loader.load()

print("Total pages:", len(docs))
print("\n--- Page 1 Content ---\n")
print(docs[0].page_content)

print("\n--- Page 1 Metadata ---\n")
print(docs[0].metadata)
