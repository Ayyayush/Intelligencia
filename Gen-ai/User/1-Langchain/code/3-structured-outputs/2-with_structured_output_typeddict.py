from langchain_groq import ChatGroq                    # Correct Groq LangChain integration
from dotenv import load_dotenv                         # Loads environment variables
from typing import TypedDict, Annotated, Optional, Literal


# =====================================================
# Load environment variables (.env file)
# =====================================================
# This will load GROQ_API_KEY from your .env file
load_dotenv()

#========================================
# Initialize Groq model (UPDATED MODEL NAME)
# =====================================================
# Old model `llama3-8b-8192` is decommissioned
# Using a currently supported Groq model
model = ChatGroq(
    model="llama-3.1-8b-instant",     # ✅ supported model
    temperature=0                    # deterministic structured output
)

# =====================================================
# Define schema using TypedDict
# =====================================================
# TypedDict defines the expected structured output format
class Review(TypedDict):

    key_themes: Annotated[
        list[str],
        "Write down all the key themes discussed in the review in a list"
    ]

    summary: Annotated[
        str,
        "A brief summary of the review"
    ]

    sentiment: Annotated[
        Literal["pos", "neg", "neutral"],    # Added neutral to match description
        "Return sentiment of the review either negative, positive or neutral"
    ]

    pros: Annotated[
        Optional[list[str]],
        "Write down all the pros inside a list"
    ]

    cons: Annotated[
        Optional[list[str]],
        "Write down all the cons inside a list"
    ]

    name: Annotated[
        Optional[str],
        "Write the name of the reviewer"
    ]


# =====================================================
# Bind schema to model (Structured Output)
# =====================================================
# This forces the LLM to return data in Review format
structured_model = model.with_structured_output(Review)


# =====================================================
# Invoke model with input review text
# =====================================================
result = structured_model.invoke(
    """
    I recently upgraded to the Samsung Galaxy S24 Ultra, and I must say, it’s an absolute powerhouse!
    The Snapdragon 8 Gen 3 processor makes everything lightning fast—whether I’m gaming, multitasking,
    or editing photos. The 5000mAh battery easily lasts a full day even with heavy use, and the 45W fast
    charging is a lifesaver.

    The S-Pen integration is a great touch for note-taking and quick sketches, though I don't use it often.
    What really blew me away is the 200MP camera—the night mode is stunning, capturing crisp, vibrant images
    even in low light. Zooming up to 100x actually works well for distant objects, but anything beyond 30x
    loses quality.

    However, the weight and size make it a bit uncomfortable for one-handed use. Also, Samsung’s One UI
    still comes with bloatware. The $1,300 price tag is also a hard pill to swallow.

    Review by Nitish Singh
    """
)


# =====================================================
# Access structured output
# =====================================================
print(result["sentiment"])                                   # Prints reviewer name
