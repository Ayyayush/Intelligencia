/**
 * ===============================================================
 * Common LLM Workflows
 * ===============================================================
 *
 * LLM applications banate waqt kuch common workflow patterns use
 * kiye jaate hain. Ye workflows decide karte hain ki multiple LLM
 * calls kaise interact karenge aur complex behaviour kaise achieve
 * kiya jayega.
 *
 * ---------------------------------------------------------------
 * ! 1. Prompt Chaining
 * ---------------------------------------------------------------
 *
 * Is workflow mein hum multiple baar series mein LLM ko call karte hain.
 *
 * Yani ek step ka output next step ka input ban jata hai.
 *
 * Example:
 *
 * Maan lo hume kisi topic se report banani hai.
 * Hum directly topic se report nahi banwayenge.
 *
 * Steps:
 *
 * Topic → Outline → Detailed Report
 *
 * 1. Pehle topic se outline generate karenge
 * 2. Fir outline ke basis pe sections expand karenge
 * 3. Fir final report generate karenge
 *
 * Isse output zyada structured aur accurate hota hai.
 *
 * ---------------------------------------------------------------
 * ! 2. Routing
 * ---------------------------------------------------------------
 *
 * Routing ka matlab hai kisi task ko samajhna aur decide karna
 * ki us task ko kaun execute karega.
 *
 * Yani ek router input ko analyze karke decide karta hai
 * ki kaunsa model / tool use hoga.
 *
 * Example:
 *
 * User Query
 *      ↓
 * Router decide karega:
 *
 * Coding question → Code LLM
 * Math problem → Calculator Tool
 * General question → Chat LLM
 *
 * Isse specialized systems ban sakte hain.
 *
 * ---------------------------------------------------------------
 * ! 3. Parallelization
 * ---------------------------------------------------------------
 *
 * Isme ek bade task ko multiple chhote subtasks mein break kar
 * diya jata hai aur sabko parallel execute karaya jata hai.
 *
 * Fir sabke outputs ko merge karke final output banaya jata hai.
 *
 * Example: YouTube jaisi sites
 *
 * Jab koi video upload hota hai toh multiple checks parallel run
 * hote hain:
 *
 * • Kya video offensive toh nahi
 * • Kya copyright violation toh nahi
 * • Kya YouTube guidelines follow kar raha hai
 *
 * Agar sab checks pass ho gaye → video live ho jayega
 * Agar koi fail hua → video flag ho jayega
 *
 * Isse system fast aur scalable ban jata hai.
 *
 * ---------------------------------------------------------------
 * ! 4. Orchestrator – Worker Workflow
 * ---------------------------------------------------------------
 *
 * Yahan ek orchestrator hota hai jo multiple workers ko control
 * karta hai.
 *
 * Difference ye hai ki yahan tasks pehle se fixed nahi hote,
 * balki dynamically decide hote hain.
 *
 * Orchestrator decide karta hai:
 *
 * • Kaun sa worker kya kaam karega
 * • Kitne workers ki zarurat hai
 *
 * Example: Research Assistant
 *
 * Query:
 * "AI trends par research report banao"
 *
 * Orchestrator:
 *
 * 1. Query analyze karega
 * 2. Multiple subtasks generate karega
 *
 * Example:
 *
 * Worker 1 → Web search karega
 * Worker 2 → Research papers collect karega
 * Worker 3 → Data summarize karega
 *
 * Fir orchestrator sab results ko combine karke final report
 * generate karega.
 *
 * Yani task input ke basis pe dynamically divide hota hai.
 *
 * ---------------------------------------------------------------
 * ! 5. Evaluator – Optimizer Workflow
 * ---------------------------------------------------------------
 *
 * Kabhi kabhi LLM ka first output perfect nahi hota.
 *
 * Isliye ek evaluation loop use kiya jata hai.
 *
 * Isme do types ke LLM hote hain:
 *
 * 1. Generator LLM
 *    - Jo output generate karta hai
 *
 * 2. Evaluator LLM
 *    - Jo output ko evaluate karta hai
 *
 * Workflow:
 *
 * Generator → Output generate karega
 *        ↓
 * Evaluator → check karega quality
 *        ↓
 * Agar satisfy nahi hua → feedback dega
 *        ↓
 * Generator us feedback se output improve karega
 *
 * Ye loop tab tak chalta hai jab tak output satisfactory na ho.
 *
 * Example:
 * Professional email likhna
 *
 * Pehla draft perfect nahi hota,
 * evaluator feedback dekar usko improve karwata hai.
 *
 * ---------------------------------------------------------------
 * Summary
 * ---------------------------------------------------------------
 *
 * Common LLM workflow patterns:
 *
 * 1. Prompt Chaining
 * 2. Routing
 * 3. Parallelization
 * 4. Orchestrator – Worker
 * 5. Evaluator – Optimizer
 *
 * Ye patterns use karke hi complex Agentic AI systems banaye
 * jaate hain.
 *
 * ===============================================================
 */