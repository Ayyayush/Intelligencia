from langchain_groq import ChatGroq
from langchain_anthropic import ChatAnthropic
from dotenv import load_dotenv
from langchain_core.prompts import PromptTemplate
from langchain_core.output_parsers import StrOutputParser
from langchain_core.runnables import RunnableParallel

# Load environment variables (.env should contain GROQ_API_KEY and ANTHROPIC_API_KEY)
load_dotenv()

# -------------------------------
# Models
# -------------------------------

model1 = ChatGroq(
    model="llama-3.1-8b-instant",
    temperature=0.4
)

model2 = ChatAnthropic(
    model_name="claude-3-7-sonnet-20250219",
    temperature=0.3
)

# -------------------------------
# Prompts
# -------------------------------

prompt1 = PromptTemplate(
    template="Generate short and simple notes from the following text:\n{text}",
    input_variables=["text"]
)

prompt2 = PromptTemplate(
    template="Generate 5 short question answers from the following text:\n{text}",
    input_variables=["text"]
)

prompt3 = PromptTemplate(
    template=(
        "Merge the provided notes and quiz into a single document.\n\n"
        "Notes:\n{notes}\n\n"
        "Quiz:\n{quiz}"
    ),
    input_variables=["notes", "quiz"]
)

# -------------------------------
# Output Parser
# -------------------------------

parser = StrOutputParser()

# -------------------------------
# Parallel Chain
# -------------------------------

parallel_chain = RunnableParallel({
    "notes": prompt1 | model1 | parser,
    "quiz": prompt2 | model2 | parser
})

# -------------------------------
# Merge Chain
# -------------------------------

merge_chain = prompt3 | model1 | parser

# -------------------------------
# Final Pipeline
# -------------------------------

chain = parallel_chain | merge_chain

# -------------------------------
# Input Text
# -------------------------------

text = """
Support vector machines (SVMs) are a set of supervised learning methods used for classification, regression and outliers detection.

The advantages of support vector machines are:
- Effective in high dimensional spaces.
- Still effective when dimensions exceed samples.
- Memory efficient due to support vectors.
- Versatile via different kernel functions.

The disadvantages include:
- Risk of overfitting with many features.
- No direct probability estimates.
"""

# -------------------------------
# Invoke Chain
# -------------------------------

result = chain.invoke({"text": text})

print(result)

# -------------------------------
# Optional: Chain Visualization
# Requires: pip install grandalf
# -------------------------------

chain.get_graph().print_ascii()
