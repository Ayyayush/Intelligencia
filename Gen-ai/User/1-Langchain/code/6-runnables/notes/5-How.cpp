/**
 * --------------------------------------------------
 * CUSTOM COMPONENTS: LLM & PROMPT TEMPLATE
 * --------------------------------------------------
 *
 * Ab hum conceptually 2 classes bana kar samajhne
 * ki koshish karenge:
 *
 * 1️⃣ Ek LLM ke liye
 * 2️⃣ Ek Prompt Template ke liye
 *
 * Idea ye hai:
 * - LangChain ke andar jo components hote hain
 * - Unko hum simplified form me khud implement karke dekhein
 *
 * 
 * 
 * 
 * 
 * --------------------------------------------------
 * ! EXAMPLE 1: CUSTOM (NAKLI) LLM CLASS
 * --------------------------------------------------
 *
 * Maan lo hume apna khud ka LLM component banana hai.
 *
 * Pseudo-code:
 *
 * class NakliLLM:
 *
 *     def __init__(self):
 *         print("LLM created")
 *
 *     def predict(self, prompt):
 *         response_list = [
 *             "Delhi is the capital of India",
 *             "IPL is a cricket league",
 *             "AI stands for Artificial Intelligence"
 *         ]
 *
 *         return {
 *             "response": random.choice(response_list)
 *         }
 *
 * Usage:
 *
 * llm = NakliLLM()
 * llm.predict("What is the capital of India?")
 *
 * 
 * 
 * 
 * 
 * --------------------------------------------------
 * ! OBSERVATION
 * --------------------------------------------------
 *
 * - LLM ek input (prompt) leta hai
 * - Kuch processing karta hai
 * - Ek response return karta hai
 *
 * Ye exactly wahi behavior hai
 * jo real LLMs (OpenAI, Groq, Claude) follow karte hain.
 *
 * 
 * 
 * 
 * 
 * 
 * --------------------------------------------------
 * ! EXAMPLE 2: CUSTOM PROMPT TEMPLATE CLASS
 * --------------------------------------------------
 *
 * Ab maan lo hume apna PromptTemplate banana hai.
 *
 * Pseudo-code:
 *
 * class NakliPromptTemplate:
 *
 *     def __init__(self, template, input_variables):
 *         self.template = template
 *         self.input_variables = input_variables
 *
 *     def format(self, input_dict):
 *         return self.template.format(**input_dict)
 *
 * Usage:
 *
 * prompt = NakliPromptTemplate(
 *     template = "Write a poem about {topic}",
 *     input_variables = ["topic"]
 * )
 *
 * formatted_prompt = prompt.format(
 *     {"topic": "nature"}
 * )
 *
 * 
 * 
 * 
 * 
 * --------------------------------------------------
 * ! KEY TAKEAWAY
 * --------------------------------------------------
 *
 * - LLM aur PromptTemplate dono hi
 *   ek well-defined behavior follow karte hain
 * - Isi standard behavior ke wajah se
 *   LangChain inhe easily connect kar paata hai
 *
 * Yehi foundation hai:
 * - Chains
 * - Runnables
 * - Composable workflows
 *
 * 
 * 
 * 
 * 
 * --------------------------------------------------
 * ! COMMON INTERFACE INTRODUCTION
 * --------------------------------------------------
 *
 * Ab hume in dono classes ko
 * ek common interface ke through interact karana hai.
 *
 * Example (conceptually):
 *
 * from abc import ABC, abstractmethod
 *
 * class Runnable(ABC):
 *
 *     @abstractmethod
 *     def invoke(self, input_data):
 *         pass
 *
 * Ab hum:
 * - NakliLLM class ko is abstract class se inherit karwaayenge
 * - NakliPromptTemplate class ko bhi isi interface ke saath align karenge
 *
 * Dono classes ke andar:
 * - `invoke()` naam ka function define kar diya jaayega
 *
 * 
 * 
 * 
 * 
 * --------------------------------------------------
 * ! IMPORTANT NOTE (LEGACY SUPPORT)
 * --------------------------------------------------
 *
 * Hume turant `predict()` method ko hataana nahi chahiye,
 * kyunki:
 *
 * - Legacy code abhi bhi use kar raha ho sakta hai
 *
 * Isliye:
 * - `predict()` method ko retain kiya jaayega
 * - Saath me warning print ki jaayegi:
 *
 *   "This method is going to be deprecated"
 *
 * 
 * 
 * 
 * 
 * 
 * --------------------------------------------------
 * CONCLUSION
 * --------------------------------------------------
 *
 * Isi approach se:
 * - LangChain ne runnables introduce kiye
 * - Saare components ko ek common contract diya
 * - Future chains aur workflows ko scalable banaya
 *
 */
