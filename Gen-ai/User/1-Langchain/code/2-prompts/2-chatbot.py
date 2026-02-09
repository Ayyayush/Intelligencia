from langchain_groq import ChatGroq
from langchain_core.messages import (
    SystemMessage,
    HumanMessage,
    AIMessage
)
from dotenv import load_dotenv
import os

# Load environment variables (.env -> GROQ_API_KEY)
load_dotenv()

GROQ_API_KEY = os.getenv("GROQ_API_KEY")

# Initialize model
model = ChatGroq(
    groq_api_key=GROQ_API_KEY,
    model_name="llama-3.1-8b-instant"
)

# Initialize chat history with system message
chat_history = [
    SystemMessage(content="You are a helpful AI assistant")
]

# Chat loop
while True:
    user_input = input("You: ")

    if user_input.lower() == "exit":
        break

    # Add user message
    chat_history.append(HumanMessage(content=user_input))

    # Invoke model with full chat history
    result = model.invoke(chat_history)

    # Add AI response to history
    chat_history.append(AIMessage(content=result.content))

    print("AI:", result.content)

# Print full conversation history (optional)
print(chat_history)
