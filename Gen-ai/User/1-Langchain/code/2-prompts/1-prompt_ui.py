import streamlit as st
import os
from dotenv import load_dotenv
from langchain_groq import ChatGroq
from langchain_core.prompts import PromptTemplate

# -----------------------------------------
# Load environment variables
# -----------------------------------------
load_dotenv()
GROQ_API_KEY = os.getenv("GROQ_API_KEY")

# -----------------------------------------
# Streamlit UI
# -----------------------------------------
st.header("🔬 Research Tool")

# -----------------------------------------
# Initialize Groq LLM
# -----------------------------------------
model = ChatGroq(
    groq_api_key=GROQ_API_KEY,
    model_name="llama-3.1-8b-instant"
)


# -----------------------------------------
# User Inputs
# -----------------------------------------
paper_input = st.selectbox(
    "Select Research Paper Name",
    [
        "Select...",
        "Attention Is All You Need",
        "BERT: Pre-training of Deep Bidirectional Transformers",
        "GPT-3: Language Models are Few-Shot Learners",
        "Diffusion Models Beat GANs on Image Synthesis"
    ]
)

style_input = st.selectbox(
    "Select Explanation Style",
    [
        "Beginner-Friendly",
        "Technical",
        "Code-Oriented",
        "Mathematical"
    ]
)

length_input = st.selectbox(
    "Select Explanation Length",
    [
        "Short (1-2 paragraphs)",
        "Medium (3-5 paragraphs)",
        "Long (detailed explanation)"
    ]
)

# -----------------------------------------
# Prompt Template (Dynamic Prompt)
# -----------------------------------------
ptemplate = PromptTemplate(
    input_variables=["paper", "style", "length"],
    template="""
    Explain the research paper titled "{paper}"
    in a {style} manner.
    The explanation should be {length}.
    """
)

# -----------------------------------------
# Button Action
# -----------------------------------------
if st.button("Generate Explanation"):
    if paper_input == "Select...":
        st.warning("Please select a research paper")
    else:
        final_prompt = ptemplate.format(
            paper=paper_input,
            style=style_input,
            length=length_input
        )

        result = model.invoke(final_prompt)

        st.subheader("📄 Explanation")
        st.write(result.content)
