/**
 * ===============================================================
 * 📘 Playlist: Agentic AI with LangGraph
 * 🎓 Instructor: CampusX (Nitish Sir)
 * 🎥 Lecture-4 | Video-5
 * 📌 Topic: LangGraph Core Concepts
 * ===============================================================
 *
 * ---------------------------------------------------------------
 * LangGraph Core Concepts
 * ---------------------------------------------------------------
 *
 * Before studying the core concepts of LangGraph,
 * let's briefly revise what LangGraph is.
 *
 * ---------------------------------------------------------------
 * LangGraph Overview
 * ---------------------------------------------------------------
 *
 * LangGraph is an orchestration framework used to build
 * intelligent, stateful, and multi-step LLM applications.
 *
 * It enables advanced capabilities such as:
 *
 * • Parallel execution
 * • Conditional branching
 * • Memory/state handling
 * • Reusability of components
 *
 * Instead of modeling workflows as a linear chain,
 * LangGraph models logic as a graph consisting of:
 *
 *   Nodes  → Tasks or operations
 *   Edges  → Routing logic between nodes
 *
 * After constructing the graph:
 *
 * 1. Input is provided to the first node
 * 2. Nodes execute according to the defined edges
 * 3. The workflow progresses automatically until completion
 *
 * 
 * 
 * 
 * ---------------------------------------------------------------
 * ! Concept 1: LLM Workflows
 * ---------------------------------------------------------------
 *
 * 📌 What are LLM Workflows?
 *
 * LLM workflows are step-by-step processes used to build
 * complex LLM-powered applications.
 *
 * Each step in the workflow performs a distinct task such as:
 *
 * • Prompting the model
 * • Reasoning over outputs
 * • Tool calling
 * • Accessing memory
 * • Making decisions
 *
 * ---------------------------------------------------------------
 * Structure of an LLM Workflow
 * ---------------------------------------------------------------
 *
 * A workflow consists of multiple interconnected steps.
 *
 * Example:
 *
 * User Input
 *      ↓
 * Prompt Generation
 *      ↓
 * LLM Response
 *      ↓
 * Tool Call (optional)
 *      ↓
 * Memory Update
 *      ↓
 * Final Output
 *
 * 
 * 
 * 
 * 
 * ---------------------------------------------------------------
 * ! Types of LLM Workflows
 * ---------------------------------------------------------------
 *
 * LLM workflows can take different structures:
 *
 * 1️⃣ Linear Workflow
 *      Step1 → Step2 → Step3
 *
 * 2️⃣ Branched Workflow
 *      Step1 → Decision → Step2A / Step2B
 *
 * 3️⃣ Parallel Workflow
 *      Multiple steps executed simultaneously
 *
 * 4️⃣ Looping Workflow
 *      Steps repeat until a condition is satisfied
 *
 * ---------------------------------------------------------------
 * Why Workflows Matter
 * ---------------------------------------------------------------
 *
 * Workflows enable complex behaviors such as:
 *
 * • Retry mechanisms
 * • Multi-agent communication
 * • Tool-augmented reasoning
 * • Iterative improvement of outputs
 *
 * These workflows form the foundation of modern
 * Agentic AI systems.
 *
 * ---------------------------------------------------------------
 * Note
 * ---------------------------------------------------------------
 *
 * In upcoming sections we will study these workflows
 * in detail and see how LangGraph helps implement them
 * efficiently.
 *
 * ===============================================================
 */