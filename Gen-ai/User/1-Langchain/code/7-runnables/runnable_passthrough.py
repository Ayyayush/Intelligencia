from dotenv import load_dotenv
from langchain_groq import ChatGroq
from langchain_core.prompts import PromptTemplate
from langchain_core.output_parsers import StrOutputParser
from langchain_core.runnables import (
    RunnableSequence,
    RunnableParallel,
    RunnablePassthrough
)

load_dotenv()

prompt1 = PromptTemplate(
    template="Write a joke about {topic}",
    input_variables=["topic"]
)

model = ChatGroq(
    model="llama-3.1-8b-instant",
    temperature=0.7
)

parser = StrOutputParser()

prompt2 = PromptTemplate(
    template="Explain the following joke:\n{text}",
    input_variables=["text"]
)

# Step 1: Generate joke
joke_gen_chain = RunnableSequence(
    prompt1,
    model,
    parser
)

# Step 2: Parallel execution
parallel_chain = RunnableParallel({
    "joke": RunnablePassthrough(),
    "explanation": RunnableSequence(
        prompt2,
        model,
        parser
    )
})

# Final pipeline
final_chain = RunnableSequence(
    joke_gen_chain,
    parallel_chain
)

print(final_chain.invoke({"topic": "cricket"}))
