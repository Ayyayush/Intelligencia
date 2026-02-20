# -------------------------------------------------------------
# Recursive Text Splitting for Python Code
# -------------------------------------------------------------
# This example demonstrates how to split Python source code
# using a language-aware RecursiveCharacterTextSplitter.
# -------------------------------------------------------------

from langchain.text_splitter import RecursiveCharacterTextSplitter, Language


# -------------------------------------------------------------
# Sample Python Code (Input Text)
# -------------------------------------------------------------
# This is a simple class-based example.
# NOTE: The earlier version had a syntax error:
#       return self.name"
# It has now been corrected.

text = """
class Student:
    def __init__(self, name, age, grade):
        self.name = name
        self.age = age
        self.grade = grade  # Grade is a float (like 8.5 or 9.2)

    def get_details(self):
        return self.name

    def is_passing(self):
        return self.grade >= 6.0


# Example usage
student1 = Student("Aarav", 20, 8.2)
print(student1.get_details())

if student1.is_passing():
    print("The student is passing.")
else:
    print("The student is not passing.")
"""


# -------------------------------------------------------------
# Initialize Python-Aware Recursive Splitter
# -------------------------------------------------------------
# Using Language.PYTHON ensures:
# - Splitting respects Python structure
# - Functions and class boundaries are prioritized
# - Code readability is preserved

splitter = RecursiveCharacterTextSplitter.from_language(
    language=Language.PYTHON,   # Tells LangChain this is Python code
    chunk_size=300,             # Maximum characters per chunk
    chunk_overlap=0             # No overlapping between chunks
)


# -------------------------------------------------------------
# Perform Splitting
# -------------------------------------------------------------
# split_text() returns a list of string chunks.
# Since chunk_size=300, this code will likely remain
# in 1 or 2 chunks depending on total length.

chunks = splitter.split_text(text)


# -------------------------------------------------------------
# Output Results
# -------------------------------------------------------------
print(f"\nTotal Chunks Created: {len(chunks)}\n")

for i, chunk in enumerate(chunks):
    print(f"---------------- Chunk {i+1} ----------------\n")
    print(chunk)
    print("\n")