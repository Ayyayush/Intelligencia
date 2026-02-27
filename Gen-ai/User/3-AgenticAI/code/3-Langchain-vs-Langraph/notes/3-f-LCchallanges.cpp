/**
 *
 * ---------------------------------------------------------------
 * ! Nested Workflows Concept in LangGraph
 * ---------------------------------------------------------------
 *
 * In LangGraph, a single node of a graph can be replaced
 * with another graph.
 *
 * This means we can build a graph inside another graph.
 *
 * This concept is called:
 *
 *                     Nested Workflows
 *
 * or
 *
 *                     Subgraphs
 *
 *
 * ---------------------------------------------------------------
 * ! What is a Subgraph?
 * ---------------------------------------------------------------
 *
 * A subgraph is a graph that is used as a NODE inside
 * another graph.
 *
 * In simple terms:
 *
 * Main Graph
 *      ↓
 * Some node
 *      ↓
 * Instead of a simple function,
 * that node executes another graph.
 *
 *
 * Example:
 *
 * Main Graph
 *
 * Node1 → Node2 → Node3
 *
 *
 * If Node2 itself contains a workflow:
 *
 * Node1 → [Subgraph] → Node3
 *
 *
 * ---------------------------------------------------------------
 * ! Concept Behind Subgraphs
 * ---------------------------------------------------------------
 *
 * Subgraphs follow the concept of:
 *
 *                      ENCAPSULATION
 *
 * Just like in software engineering, we encapsulate
 * complex logic into reusable modules.
 *
 * Similarly, LangGraph allows us to encapsulate
 * complex workflows into subgraphs.
 *
 *
 * ---------------------------------------------------------------
 * ! State Communication Problem
 * ---------------------------------------------------------------
 *
 * When we have:
 *
 * • Parent Graph
 * • Subgraph
 *
 * Both graphs may need to communicate using STATE.
 *
 * The important question becomes:
 *
 * How will state flow between the parent graph
 * and the subgraph?
 *
 *
 * In LangGraph:
 *
 * • Parent graph passes state to the subgraph
 * • Subgraph can read and update that state
 * • Updated state is returned back to the parent graph
 *
 *
 * ---------------------------------------------------------------
 * ! Real World Example : Self Driving Car
 * ---------------------------------------------------------------
 *
 * A self-driving car system is a good example
 * of a multi-agent architecture.
 *
 * Different agents handle different responsibilities.
 *
 *
 * Example Agents:
 *
 * • Navigation Agent
 * • Obstacle Detection Agent
 * • Traffic Sign Detection Agent
 * • Lane Detection Agent
 * • Speed Control Agent
 *
 *
 * Each of these agents handles a different task.
 *
 * Instead of building everything in one huge workflow,
 * we can create separate subgraphs for each system.
 *
 *
 * Example:
 *
 * Self Driving System (Main Graph)
 *
 * ├── Navigation Subgraph
 * ├── Obstacle Detection Subgraph
 * ├── Traffic Rules Subgraph
 * └── Driving Control Subgraph
 *
 *
 * This structure makes the system modular
 * and easier to maintain.
 *
 *
 * ---------------------------------------------------------------
 * ! Reusability with Subgraphs
 * ---------------------------------------------------------------
 *
 * Another important benefit of subgraphs is reusability.
 *
 * Example:
 *
 * Suppose we create an Approval Workflow.
 *
 * Approval Subgraph:
 *
 * Request Approval
 *       ↓
 * Wait for Human Response
 *       ↓
 * Approved / Rejected
 *
 *
 * Now this approval logic may be required
 * in multiple workflows.
 *
 * Instead of rewriting the same logic again,
 * we can reuse the same Approval Subgraph.
 *
 *
 * Example:
 *
 * Hiring Workflow
 *        ↓
 * Approval Subgraph
 *
 *
 * Finance Workflow
 *        ↓
 * Approval Subgraph
 *
 *
 * Content Publishing Workflow
 *        ↓
 * Approval Subgraph
 *
 *
 * This greatly improves system design.
 *
 *
 * ---------------------------------------------------------------
 * ! Advantage Over LangChain
 * ---------------------------------------------------------------
 *
 * LangChain does not provide built-in support
 * for nested workflows or subgraphs.
 *
 * If we want to reuse workflow logic in LangChain,
 * we usually have to manually combine chains
 * and manage the flow using custom code.
 *
 *
 * LangGraph solves this by allowing:
 *
 * • Graph inside graph
 * • Modular workflows
 * • Reusable workflow components
 *
 *
 * ---------------------------------------------------------------
 * ! Conclusion
 * ---------------------------------------------------------------
 *
 * Subgraphs enable:
 *
 * • Modular design
 * • Reusable workflows
 * • Multi-agent architectures
 * • Better workflow organization
 *
 * Which makes LangGraph powerful for building
 * large AI systems.
 *
 *
 * ===============================================================
 */