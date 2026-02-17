from dotenv import load_dotenv
from langchain_groq import ChatGroq
from langchain_core.prompts import PromptTemplate
from langchain_core.output_parsers import StrOutputParser
from langchain_core.runnables import (
    RunnableSequence,
    RunnableLambda,
    RunnablePassthrough,
    RunnableParallel
)

load_dotenv()

def word_count(text):
    return len(text.split())

prompt = PromptTemplate(
    template="Write a joke about {topic}",
    input_variables=["topic"]
)

model = ChatGroq(
    model="llama-3.1-8b-instant",
    temperature=0.7
)

parser = StrOutputParser()

# Joke generation chain
joke_gen_chain = RunnableSequence(
    prompt,
    model,
    parser
)

# Parallel runnable:
# - joke → passthrough
# - word_count → lambda
parallel_chain = RunnableParallel({
    "joke": RunnablePassthrough(),
    "word_count": RunnableLambda(word_count)
})

# Final pipeline
final_chain = RunnableSequence(
    joke_gen_chain,
    parallel_chain
)

result = final_chain.invoke({"topic": "AI"})

final_result = "{}\nword count - {}".format(
    result["joke"],
    result["word_count"]
)

print(final_result)
