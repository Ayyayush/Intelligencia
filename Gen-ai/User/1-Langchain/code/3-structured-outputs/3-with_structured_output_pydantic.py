from langchain_groq import ChatGroq
from dotenv import load_dotenv
from typing import Optional, Literal
from pydantic import BaseModel, Field


# =====================================================
# Load environment variables (.env)
# =====================================================
# Must contain GROQ_API_KEY
load_dotenv()


# =====================================================
# Initialize Groq LLM (SUPPORTED MODEL ONLY)
# =====================================================
# Using llama-3.1-8b-instant (stable & supported)
model = ChatGroq(
    model="llama-3.1-8b-instant",
    temperature=0            # Low temperature for reliable structured output
)


# =====================================================
# Define schema using Pydantic BaseModel
# =====================================================
# Pydantic provides runtime validation (unlike TypedDict)
class Review(BaseModel):

    key_themes: list[str] = Field(
        description="Write down all the key themes discussed in the review in a list"
    )

    summary: str = Field(
        description="A brief summary of the review"
    )

    sentiment: Literal["pos", "neg", "neutral"] = Field(
        description="Return sentiment of the review either negative, positive or neutral"
    )

    pros: Optional[list[str]] = Field(
        default=None,
        description="Write down all the pros inside a list"
    )

    cons: Optional[list[str]] = Field(
        default=None,
        description="Write down all the cons inside a list"
    )

    name: Optional[str] = Field(
        default=None,
        description="Write the name of the reviewer"
    )


# =====================================================
# Bind schema to model (Structured Output)
# =====================================================
structured_model = model.with_structured_output(Review)


# =====================================================
# Invoke model with review text
# =====================================================
result = structured_model.invoke(
    """
    I recently upgraded to the Samsung Galaxy S24 Ultra, and I must say, it’s an absolute powerhouse!
    The Snapdragon 8 Gen 3 processor makes everything lightning fast.

    The camera is incredible, but the phone is heavy and expensive.

    Review by Nitish Singh
    """
)


# =====================================================
# Output (Pydantic object)
# =====================================================
print(result)
print(result.name)
print(result.sentiment)
