/**
 * ---------------------------------------------------------------
 * ! Tool Creation in LangChain
 * ---------------------------------------------------------------
 *
 * Tool Creation is the process of defining a function
 * that the LLM can use during reasoning.
 *
 * A tool is basically:
 * 👉 A normal Python function
 * BUT wrapped in a special way so that
 * the LLM understands:
 *
 * 1️⃣ What the tool does
 * 2️⃣ What inputs it needs
 * 3️⃣ What output it returns
 *
 *
 * ---------------------------------------------------------------
 * ! Why Do We Need Tools?
 * ---------------------------------------------------------------
 *
 * LLMs cannot:
 * ❌ Access real-time data
 * ❌ Call APIs directly
 * ❌ Perform accurate math
 * ❌ Query databases
 *
 * So we create tools to give them external powers.
 *
 *
 * ---------------------------------------------------------------
 * ! How Tool Creation Works in LangChain
 * ---------------------------------------------------------------
 *
 * Step 1️⃣ : Define a Python function
 * Step 2️⃣ : Add @tool decorator
 * Step 3️⃣ : Bind it to the LLM
 *
 *
 * ---------------------------------------------------------------
 * ! Basic Example
 * ---------------------------------------------------------------
 * 
 * from langchain_core.tools import tool

@tool
def multiply(a: int, b: int) -> int:
    """
    Multiply two numbers and return the result.
    """
    return a * b

    {
  "name": "multiply",
  "description": "Multiply two numbers and return the result.",
  "parameters": {
    "a": "integer",
    "b": "integer"
  }
}


from pydantic import BaseModel
from langchain_core.tools import tool

class MultiplyInput(BaseModel):
    a: int
    b: int

@tool(args_schema=MultiplyInput)
def multiply(a: int, b: int) -> int:
    return a * b
 */