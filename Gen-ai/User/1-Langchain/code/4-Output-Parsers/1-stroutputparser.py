from langchain_huggingface import ChatHuggingFace, HuggingFaceEndpoint
from dotenv import load_dotenv
from langchain_core.prompts import PromptTemplate

load_dotenv()

# ----------------------------------
# HuggingFace LLM
# ----------------------------------
llm = HuggingFaceEndpoint(
    repo_id="google/gemma-2-2b-it",
    task="text-generation",
    max_new_tokens=512                # recommended
)

model = ChatHuggingFace(llm=llm)

# ----------------------------------
# 1st prompt -> detailed report
# ----------------------------------
template1 = PromptTemplate(
    template="Write a detailed report on {topic}",
    input_variables=["topic"]
)

# ----------------------------------
# 2nd prompt -> summary
# ----------------------------------
template2 = PromptTemplate(
    template="Write a 5 line summary on the following text:\n{text}",
    input_variables=["text"]
)

# ----------------------------------
# Step 1: Detailed report
# ----------------------------------
prompt1 = template1.invoke({"topic": "black hole"})
result = model.invoke(prompt1)

# ----------------------------------
# Step 2: Summary
# ----------------------------------
prompt2 = template2.invoke({"text": result.content})
result1 = model.invoke(prompt2)

print(result1.content)
