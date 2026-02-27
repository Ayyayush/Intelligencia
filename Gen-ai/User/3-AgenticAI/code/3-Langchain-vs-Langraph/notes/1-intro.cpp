/**
 * ===============================================================
 * 📘 Playlist: Agentic AI with LangGraph
 * 🎓 Instructor: CampusX (Nitish Sir)
 * 🎥 Lecture-3 | Video-4
 * 📌 Topic: LangChain vs LangGraph
 * ===============================================================
 *
 * ---------------------------------------------------------------
 * Prerequisites
 * ---------------------------------------------------------------
 *
 * Before learning LangGraph, basic knowledge of LangChain
 * is required.
 *
 * ---------------------------------------------------------------
 * LangChain Recap
 * ---------------------------------------------------------------
 *
 * LangChain is an open-source library designed to simplify
 * the process of building LLM-based applications.
 *
 * It provides modular building blocks that allow developers
 * to create sophisticated LLM-powered workflows easily.
 *
 * ---------------------------------------------------------------
 * Core Components of LangChain
 * ---------------------------------------------------------------
 *
 * LangChain consists of multiple components:
 *
 *   1. Models
 *      - LLMs like OpenAI, Claude, Gemini, etc.
 *
 *   2. Prompts
 *      - Templates used to structure input to the model
 *
 *   3. Retrievers
 *      - Used to fetch relevant information from vector databases
 *      - Commonly used in RAG systems
 *
 *   4. Memory
 *      - Stores conversation or workflow context
 *
 * ---------------------------------------------------------------
 * Biggest Offering of LangChain
 * ---------------------------------------------------------------
 *
 * The most important concept in LangChain is:
 *
 *                       🔗 CHAINS
 *
 * A chain connects multiple components together to form
 * a sequential workflow.
 *
 * Example:
 *
 *   User Input
 *       ↓
 *   Prompt Template
 *       ↓
 *   LLM
 *       ↓
 *   Output Parser
 *
 * This sequence is called a Chain.
 *
 * ---------------------------------------------------------------
 * What Can We Build with LangChain?
 * ---------------------------------------------------------------
 *
 * Using LangChain we can build:
 *
 *   1. Simple workflows
 *      - Chatbots
 *      - Text summarizers
 *      - Question answering systems
 *
 *   2. Multi-step workflows
 *      - Data processing pipelines
 *
 *   3. RAG applications
 *      - Retrieval-Augmented Generation systems
 *
 *   4. Basic-level agents
 *      - Tool calling
 *      - Simple decision-making
 *
 * 
 * 
 * 
 * 
 * ---------------------------------------------------------------
 * ! LangGraph
 * ---------------------------------------------------------------
 *
 * LangGraph is a framework built on top of LangChain.
 *
 * It was introduced to solve limitations that appear when
 * building complex agent systems using only LangChain.
 *
 * ---------------------------------------------------------------
 * Why Does LangGraph Exist?
 * ---------------------------------------------------------------
 *
 * LangChain chains are mostly linear.
 *
 * Example:
 *
 *   Step1 → Step2 → Step3 → Step4
 *
 * But real-world AI systems are rarely linear.
 *
 * They require:
 *
 *   - Loops
 *   - Branching logic
 *   - State tracking
 *   - Conditional execution
 *   - Retry mechanisms
 *
 * LangGraph enables developers to build such complex
 * workflows using graph-based execution.
 *
 * ---------------------------------------------------------------
 * Connection with Previous Example
 * ---------------------------------------------------------------
 *
 * In the previous lecture we discussed the
 * Automated Hiring Workflow.
 *
 * Now we will see:
 *
 *   How that workflow behaves in LangChain
 *   vs
 *   How it can be implemented using LangGraph
 *
 * This comparison will show why LangGraph is better
 * suited for building Agentic AI systems.
 *
 * ===============================================================
 */