from langchain_groq import ChatGroq                         # Groq-based LLM interface
from dotenv import load_dotenv                              # Loads API keys from .env
from langchain_core.prompts import PromptTemplate           # Used to create prompt templates
from langchain_core.output_parsers import StrOutputParser   # Converts LLM output to string


# step -1
load_dotenv()                                                # Loads GROQ_API_KEY from .env file

# -----------------------------------------------
# STEP 2: Create a Prompt Template
# -----------------------------------------------

prompt = PromptTemplate(
    template="Generate 5 interesting facts about {topic}",  # Prompt with placeholder
    input_variables=["topic"]                                # Variables to be filled at runtime
)

# -----------------------------------------------
# STEP 3: Initialize the LLM
# -----------------------------------------------

model = ChatGroq(
    model="llama-3.1-8b-instant",                            # ✅ Supported model
    temperature=0.7                                         # Controls creativity
)

# -----------------------------------------------
# STEP 4: Initialize Output Parser
# -----------------------------------------------

parser = StrOutputParser()                                   # Ensures output is plain text

# -----------------------------------------------
# STEP 5: Create a Simple Sequential Chain
# -----------------------------------------------

chain = prompt | model | parser                              # Prompt → LLM → Parser

# -----------------------------------------------
# STEP 6: Invoke the Chain
# -----------------------------------------------

result = chain.invoke({"topic": "cricket"})                  # Injects topic into prompt

# -----------------------------------------------
# STEP 7: Print the Result
# -----------------------------------------------

print(result)                                                # Prints 5 facts about cricket

# -----------------------------------------------
# STEP 8: Visualize the Chain
# -----------------------------------------------

chain.get_graph().print_ascii()                               # Displays chain structure
