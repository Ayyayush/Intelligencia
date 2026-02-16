from langchain_groq import ChatGroq
from langchain_core.prompts import PromptTemplate
from dotenv import load_dotenv

load_dotenv()

# -----------------------------------
# Initialize the LLM
# -----------------------------------
llm = ChatGroq(
    model="llama-3.1-8b-instant",        # supported Groq model
    temperature=0.7
)

# -----------------------------------
# Create a Prompt Template
# -----------------------------------
prompt = PromptTemplate(
    input_variables=["topic"],
    template="Suggest a catchy blog title about {topic}."
)

# -----------------------------------
# Take input from user
# -----------------------------------
topic = input("Enter a topic: ")

# -----------------------------------
# Manually format the prompt
# -----------------------------------
formatted_prompt = prompt.format(topic=topic)
# PromptTemplate yahan sirf string generate kar raha hai

# -----------------------------------
# Call the LLM directly
# -----------------------------------
blog_title = llm.invoke(formatted_prompt).content
# invoke() returns a message object, so .content is used

# -----------------------------------
# Print the output
# -----------------------------------
print("Generated Blog Title:", blog_title)
