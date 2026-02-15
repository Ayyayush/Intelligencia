# -------------------------------
# Import HuggingFace chat wrapper and endpoint
# ChatHuggingFace: makes HF model behave like a chat model
# HuggingFaceEndpoint: connects to HF Inference API (hosted model)
# -------------------------------
from langchain_huggingface import ChatHuggingFace, HuggingFaceEndpoint


# -------------------------------
# Loads environment variables from .env file
# Used to load HUGGINGFACEHUB_API_TOKEN securely
# -------------------------------
from dotenv import load_dotenv


# -------------------------------
# PromptTemplate helps us create dynamic prompts
# with variables like {place}
# -------------------------------
from langchain_core.prompts import PromptTemplate


# -------------------------------
# PydanticOutputParser converts LLM output
# into a validated Pydantic object
# -------------------------------
from langchain_core.output_parsers import PydanticOutputParser


# -------------------------------
# Pydantic BaseModel & Field
# Used to define schema + validation rules
# -------------------------------
from pydantic import BaseModel, Field


# -------------------------------
# Load environment variables
# -------------------------------
load_dotenv()


# =========================================================
# STEP 1: Define the LLM (HuggingFace Inference API)
# =========================================================

llm = HuggingFaceEndpoint(
    repo_id="google/gemma-2-2b-it",   # Model hosted on HuggingFace
    task="text-generation"           # Task type
)

# Wrap the endpoint into a chat-style model
model = ChatHuggingFace(llm=llm)


# =========================================================
# STEP 2: Define Structured Output Schema (Pydantic)
# =========================================================

# This class defines WHAT structure we want from the LLM
class Person(BaseModel):

    # Name must be a string
    name: str = Field(
        description="Name of the person"
    )

    # Age must be an integer AND greater than 18
    age: int = Field(
        gt=18,                        # validation rule
        description="Age of the person"
    )

    # City must be a string
    city: str = Field(
        description="Name of the city the person belongs to"
    )


# =========================================================
# STEP 3: Create Pydantic Output Parser
# =========================================================

# This parser will:
# 1. Tell LLM how to format output (JSON schema)
# 2. Validate output against Person model
# 3. Convert output into Person object
parser = PydanticOutputParser(
    pydantic_object=Person
)


# =========================================================
# STEP 4: Create Prompt Template
# =========================================================

template = PromptTemplate(

    # Prompt text
    template="""
Generate the name, age and city of a fictional {place} person.

{format_instruction}
""",

    # Variables expected from user
    input_variables=["place"],

    # format_instruction is injected automatically
    # This comes from PydanticOutputParser
    partial_variables={
        "format_instruction": parser.get_format_instructions()
    }
)


# =========================================================
# STEP 5: Create LCEL Chain
# =========================================================

# LCEL PIPE SYNTAX:
# template  -> model -> parser
#
# Meaning:
# Prompt → LLM → Structured & validated output
chain = template | model | parser


# =========================================================
# STEP 6: Invoke the chain
# =========================================================

# Pass value for {place}
final_result = chain.invoke({
    "place": "sri lankan"
})


# =========================================================
# STEP 7: Print result
# =========================================================

# final_result is NOT string
# It is a Person object (Pydantic model)
print(final_result)
