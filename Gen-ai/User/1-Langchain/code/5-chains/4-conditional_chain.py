from langchain_groq import ChatGroq
from dotenv import load_dotenv
from langchain_core.prompts import PromptTemplate
from langchain_core.output_parsers import StrOutputParser, PydanticOutputParser
from langchain_core.runnables import RunnableBranch, RunnableLambda
from pydantic import BaseModel, Field
from typing import Literal

load_dotenv()

# -------------------------------
# Model
# -------------------------------

model = ChatGroq(
    model="llama-3.1-8b-instant",
    temperature=0.3
)

parser = StrOutputParser()

# -------------------------------
# Structured Output (Classifier)
# -------------------------------

class Feedback(BaseModel):
    sentiment: Literal["positive", "negative"] = Field(
        description="Sentiment of the feedback"
    )

parser2 = PydanticOutputParser(pydantic_object=Feedback)

# -------------------------------
# Sentiment Classification Prompt
# -------------------------------

prompt1 = PromptTemplate(
    template=(
        "Classify the sentiment of the following feedback as positive or negative.\n"
        "{feedback}\n\n"
        "{format_instructions}"
    ),
    input_variables=["feedback"],
    partial_variables={
        "format_instructions": parser2.get_format_instructions()
    }
) 

classifier_chain = prompt1 | model | parser2

# -------------------------------
# Response Prompts
# -------------------------------

prompt2 = PromptTemplate(
    template="Write an appropriate response to this positive feedback:\n{feedback}",
    input_variables=["feedback"]
)

prompt3 = PromptTemplate(
    template="Write an appropriate response to this negative feedback:\n{feedback}",
    input_variables=["feedback"]
)

# -------------------------------
# Conditional Branch
# -------------------------------

branch_chain = RunnableBranch(
    (lambda x: x.sentiment == "positive", prompt2 | model | parser),
    (lambda x: x.sentiment == "negative", prompt3 | model | parser),
    RunnableLambda(lambda _: "Could not determine sentiment")
)

# -------------------------------
# Final Pipeline
# -------------------------------

chain = classifier_chain | branch_chain

# -------------------------------
# Run
# -------------------------------

print(chain.invoke({"feedback": "This is a beautiful phone"}))

# Optional visualization (requires: pip install grandalf)
chain.get_graph().print_ascii()
