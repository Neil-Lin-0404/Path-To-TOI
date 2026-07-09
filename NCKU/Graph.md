# Graph.md

> Scope: **NCKU-oriented Competitive Programming Graph Roadmap**
>
> Purpose:
> Define **what you need to learn in Graph for NCKU**, how the chapter is structured, and which parts matter most.

---

# 1. Chapter Role 🎯

This chapter is about **modeling states and transitions as graphs, then traversing / optimizing over them**.

Graph is one of the most important chapters for NCKU because it covers several major contest families:

- **reachability / connected components**
- **grid traversal**
- **BFS shortest path**
- **weighted shortest path**
- **dependency / DAG reasoning**
- **state-space graph modeling**
- **shortest path with extra state**

Compared with Tree, Graph is broader and less structured.  
A tree gives you special guarantees; a general graph does not.  
So Graph problems often demand stronger judgment about:

- what the node should represent
- what the edges mean
- whether the graph is weighted / unweighted / directed / undirected
- whether the right tool is DFS / BFS / Dijkstra / topological processing / state expansion

For NCKU, Graph is one of the **core battlefields**, especially once problems stop being “plain BFS/DFS” and start becoming:

- **shortest path with conditions**
- **state-augmented shortest path**
- **graph modeling from a non-graph statement**
- **grid or transition systems disguised as graph problems**

So the goal here is:

> **Build strong graph fundamentals, shortest-path competence, and enough state-graph modeling ability to handle serious NCKU graph problems.**

---

# 2. Master Index 🧭

# 1. Graph Foundations
## 1.1 Directed vs undirected graph
## 1.2 Weighted vs unweighted graph
## 1.3 Adjacency list / edge list
## 1.4 Graph as state-transition model
## 1.5 Graph size and complexity awareness

# 2. DFS
## 2.1 DFS mental model
## 2.2 Connected components
## 2.3 DFS on grids
## 2.4 Parent tracking
## 2.5 Entry / exit style traversal thinking

# 3. BFS
## 3.1 BFS mental model
## 3.2 Shortest path in unweighted graph
## 3.3 BFS on grids
## 3.4 Multi-source BFS
## 3.5 Distance array discipline

# 4. Traversal Applications
## 4.1 Reachability
## 4.2 Flood fill / region problems
## 4.3 Bipartite graph checking
## 4.4 Cycle detection basics
## 4.5 Layered exploration patterns

# 5. Topological and DAG Basics
## 5.1 Topological sort
## 5.2 Cycle detection in directed graph
## 5.3 Dependency graph thinking
## 5.4 DP on DAG awareness
## 5.5 Longest / shortest path on DAG awareness

# 6. Shortest Path Core
## 6.1 Dijkstra mental model
## 6.2 Relaxation
## 6.3 Priority queue usage
## 6.4 Stale-state handling
## 6.5 When BFS is enough and Dijkstra is not needed

# 7. 0-1 BFS and Small-Weight Awareness
## 7.1 When edge weights are only 0/1
## 7.2 Deque-based shortest path
## 7.3 Distinguishing 0-1 BFS from Dijkstra
## 7.4 Small-weight graph patterns
## 7.5 Choosing BFS / 0-1 BFS / Dijkstra correctly

# 8. State-Space Graph Modeling
## 8.1 Node = (position, extra state)
## 8.2 State graph for used-resources / last-color / mode / cooldown
## 8.3 Shortest path on expanded state graph
## 8.4 Dist array over multiple dimensions
## 8.5 Controlling state explosion

# 9. Bitmask-on-Graph / Small-State Shortest Path
## 9.1 Node = (u, mask)
## 9.2 Used-color / used-key / visited-type state
## 9.3 BFS / Dijkstra on state graph
## 9.4 State compression with small k
## 9.5 Transition design under state augmentation

# 10. Graph Problem Modeling
## 10.1 Turning a statement into nodes and edges
## 10.2 Grid as graph
## 10.3 State transition as graph
## 10.4 Choosing what the node represents
## 10.5 Choosing traversal vs shortest path vs DAG vs DP-style interpretation

# 11. Graph Technique Selection Skill
## 11.1 DFS vs BFS
## 11.2 BFS vs Dijkstra
## 11.3 Traversal problem vs shortest-path problem
## 11.4 Normal graph vs state-expanded graph
## 11.5 Choosing the simplest sufficient graph model

---

# 3. NCKU Priority Table ⭐

## Priority Legend
- ⭐⭐⭐⭐⭐ = **must be very stable**
- ⭐⭐⭐⭐ = **important**
- ⭐⭐⭐ = **useful support**
- ⭐⭐ = **lower priority for current NCKU phase**
- ⭐ = **awareness only**

---

## 3.1 Section-Level Priority

| Section | NCKU Core | NCKU Advanced | Notes |
|---|---:|---:|---|
| **1. Graph Foundations** | ⭐⭐⭐⭐⭐ | ⭐⭐⭐⭐ | Required to even parse graph problems correctly |
| **2. DFS** | ⭐⭐⭐⭐⭐ | ⭐⭐⭐⭐ | Core traversal tool; also foundational for tree and many graph tasks |
| **3. BFS** | ⭐⭐⭐⭐⭐ | ⭐⭐⭐⭐⭐ | One of the highest-ROI graph tools for NCKU |
| **4. Traversal Applications** | ⭐⭐⭐⭐ | ⭐⭐⭐⭐ | Very common graph problem family |
| **5. Topological and DAG Basics** | ⭐⭐⭐⭐ | ⭐⭐⭐⭐ | Important for dependency-style problems and DAG reasoning |
| **6. Shortest Path Core** | ⭐⭐⭐⭐⭐ | ⭐⭐⭐⭐⭐ | Dijkstra is one of the most important NCKU graph skills |
| **7. 0-1 BFS and Small-Weight Awareness** | ⭐⭐ | ⭐⭐⭐⭐ | Very useful once shortest-path problems get trickier |
| **8. State-Space Graph Modeling** | ⭐⭐⭐ | ⭐⭐⭐⭐⭐ | One of the most important advanced NCKU graph topics |
| **9. Bitmask-on-Graph / Small-State Shortest Path** | ⭐⭐ | ⭐⭐⭐⭐ | Advanced but very relevant for harder state-constrained shortest path |
| **10. Graph Problem Modeling** | ⭐⭐⭐⭐⭐ | ⭐⭐⭐⭐⭐ | The meta-skill that often decides the solve |
| **11. Graph Technique Selection Skill** | ⭐⭐⭐⭐⭐ | ⭐⭐⭐⭐⭐ | Essential for deciding whether to use DFS/BFS/Dijkstra/state expansion |

---

## 3.2 Node-Level Priority

| Concept | NCKU Core | NCKU Advanced |
|---|---:|---:|
| **1.1 Directed vs undirected graph** | ⭐⭐⭐⭐⭐ | ⭐⭐⭐⭐ |
| **1.2 Weighted vs unweighted graph** | ⭐⭐⭐⭐⭐ | ⭐⭐⭐⭐ |
| **1.3 Adjacency list / edge list** | ⭐⭐⭐⭐⭐ | ⭐⭐⭐⭐ |
| **1.4 Graph as state-transition model** | ⭐⭐⭐⭐ | ⭐⭐⭐⭐⭐ |
| **1.5 Graph size and complexity awareness** | ⭐⭐⭐⭐⭐ | ⭐⭐⭐⭐⭐ |
| **2.1 DFS mental model** | ⭐⭐⭐⭐⭐ | ⭐⭐⭐⭐ |
| **2.2 Connected components** | ⭐⭐⭐⭐⭐ | ⭐⭐⭐ |
| **2.3 DFS on grids** | ⭐⭐⭐⭐ | ⭐⭐⭐ |
| **2.4 Parent tracking** | ⭐⭐⭐⭐ | ⭐⭐⭐ |
| **2.5 Entry / exit style traversal thinking** | ⭐⭐⭐ | ⭐⭐⭐⭐ |
| **3.1 BFS mental model** | ⭐⭐⭐⭐⭐ | ⭐⭐⭐⭐⭐ |
| **3.2 Shortest path in unweighted graph** | ⭐⭐⭐⭐⭐ | ⭐⭐⭐⭐⭐ |
| **3.3 BFS on grids** | ⭐⭐⭐⭐ | ⭐⭐⭐ |
| **3.4 Multi-source BFS** | ⭐⭐⭐⭐ | ⭐⭐⭐⭐ |
| **3.5 Distance array discipline** | ⭐⭐⭐⭐⭐ | ⭐⭐⭐⭐⭐ |
| **4.1 Reachability** | ⭐⭐⭐⭐⭐ | ⭐⭐⭐ |
| **4.2 Flood fill / region problems** | ⭐⭐⭐⭐ | ⭐⭐⭐ |
| **4.3 Bipartite graph checking** | ⭐⭐⭐⭐ | ⭐⭐⭐ |
| **4.4 Cycle detection basics** | ⭐⭐⭐⭐ | ⭐⭐⭐ |
| **4.5 Layered exploration patterns** | ⭐⭐⭐⭐ | ⭐⭐⭐⭐ |
| **5.1 Topological sort** | ⭐⭐⭐⭐ | ⭐⭐⭐⭐ |
| **5.2 Cycle detection in directed graph** | ⭐⭐⭐⭐ | ⭐⭐⭐⭐ |
| **5.3 Dependency graph thinking** | ⭐⭐⭐⭐ | ⭐⭐⭐⭐ |
| **5.4 DP on DAG awareness** | ⭐⭐⭐ | ⭐⭐⭐⭐ |
| **5.5 Longest / shortest path on DAG awareness** | ⭐⭐ | ⭐⭐⭐⭐ |
| **6.1 Dijkstra mental model** | ⭐⭐⭐⭐⭐ | ⭐⭐⭐⭐⭐ |
| **6.2 Relaxation** | ⭐⭐⭐⭐⭐ | ⭐⭐⭐⭐⭐ |
| **6.3 Priority queue usage** | ⭐⭐⭐⭐⭐ | ⭐⭐⭐⭐⭐ |
| **6.4 Stale-state handling** | ⭐⭐⭐⭐⭐ | ⭐⭐⭐⭐⭐ |
| **6.5 When BFS is enough and Dijkstra is not needed** | ⭐⭐⭐⭐⭐ | ⭐⭐⭐⭐⭐ |
| **7.1 When edge weights are only 0/1** | ⭐⭐ | ⭐⭐⭐⭐ |
| **7.2 Deque-based shortest path** | ⭐⭐ | ⭐⭐⭐⭐ |
| **7.3 Distinguishing 0-1 BFS from Dijkstra** | ⭐⭐ | ⭐⭐⭐⭐ |
| **7.4 Small-weight graph patterns** | ⭐⭐ | ⭐⭐⭐ |
| **7.5 Choosing BFS / 0-1 BFS / Dijkstra correctly** | ⭐⭐⭐⭐ | ⭐⭐⭐⭐⭐ |
| **8.1 Node = (position, extra state)** | ⭐⭐⭐ | ⭐⭐⭐⭐⭐ |
| **8.2 State graph for used-resources / last-color / mode / cooldown** | ⭐⭐⭐ | ⭐⭐⭐⭐⭐ |
| **8.3 Shortest path on expanded state graph** | ⭐⭐⭐ | ⭐⭐⭐⭐⭐ |
| **8.4 Dist array over multiple dimensions** | ⭐⭐⭐ | ⭐⭐⭐⭐⭐ |
| **8.5 Controlling state explosion** | ⭐⭐ | ⭐⭐⭐⭐⭐ |
| **9.1 Node = (u, mask)** | ⭐⭐ | ⭐⭐⭐⭐ |
| **9.2 Used-color / used-key / visited-type state** | ⭐⭐ | ⭐⭐⭐⭐ |
| **9.3 BFS / Dijkstra on state graph** | ⭐⭐ | ⭐⭐⭐⭐⭐ |
| **9.4 State compression with small k** | ⭐⭐ | ⭐⭐⭐⭐ |
| **9.5 Transition design under state augmentation** | ⭐⭐ | ⭐⭐⭐⭐ |
| **10.1 Turning a statement into nodes and edges** | ⭐⭐⭐⭐⭐ | ⭐⭐⭐⭐⭐ |
| **10.2 Grid as graph** | ⭐⭐⭐⭐ | ⭐⭐⭐⭐ |
| **10.3 State transition as graph** | ⭐⭐⭐⭐ | ⭐⭐⭐⭐⭐ |
| **10.4 Choosing what the node represents** | ⭐⭐⭐⭐⭐ | ⭐⭐⭐⭐⭐ |
| **10.5 Choosing traversal vs shortest path vs DAG vs DP-style interpretation** | ⭐⭐⭐⭐⭐ | ⭐⭐⭐⭐⭐ |
| **11.1 DFS vs BFS** | ⭐⭐⭐⭐⭐ | ⭐⭐⭐⭐⭐ |
| **11.2 BFS vs Dijkstra** | ⭐⭐⭐⭐⭐ | ⭐⭐⭐⭐⭐ |
| **11.3 Traversal problem vs shortest-path problem** | ⭐⭐⭐⭐⭐ | ⭐⭐⭐⭐⭐ |
| **11.4 Normal graph vs state-expanded graph** | ⭐⭐⭐⭐ | ⭐⭐⭐⭐⭐ |
| **11.5 Choosing the simplest sufficient graph model** | ⭐⭐⭐⭐⭐ | ⭐⭐⭐⭐⭐ |

---

# 4. NCKU Study Emphasis 📌

If you need to prioritize inside Graph for NCKU, the order should roughly be:

## Tier S — stabilize early
1. **Graph foundations + representation**
2. **DFS**
3. **BFS**
4. **Reachability / components / grid traversal**
5. **Dijkstra**
6. **BFS vs Dijkstra judgment**
7. **Graph problem modeling**
8. **Technique-selection skill inside graph problems**

## Tier A — strong support / likely high ROI
9. **Topological sort / DAG basics**
10. **Multi-source BFS**
11. **Bipartite / cycle detection basics**
12. **Weighted vs unweighted shortest-path distinction**
13. **State-transition-as-graph viewpoint**

## Tier B — advanced NCKU pressure points
14. **0-1 BFS**
15. **State-space shortest path**
16. **Dist array over multiple dimensions**
17. **Bitmask-on-graph / small-state shortest path**
18. **Controlling state explosion**
19. **Choosing normal graph vs expanded-state graph**

---

# 5. Chapter Boundary Notes 🧱

To keep Graph clean, the following topics should **not** be expanded deeply here:

## Move to **Fundamentals.md**
- complexity basics
- arrays / prefix / simulation basics
- recursion basics
- implementation discipline

## Move to **Data_Structures.md**
- priority queue / heap implementation itself
- deque as a data structure itself
- DSU
- BIT / segment tree
- monotonic stack / offline DS patterns

## Move to **Algorithm_Techniques.md**
- binary search on answer
- sweep / offline processing as a general technique
- coordinate compression
- two pointers / sliding window
- monotonicity / feasibility framework

## Move to **Tree.md**
- rooted-tree traversal
- subtree aggregation
- tree diameter
- tree DP
- Euler tour / LCA in tree context

## Move to **DP.md**
- general DP state design
- counting DP
- bitmask DP
- DP on DAG in full detail
- transition compression / matrix transition

So Graph should stay focused on:
- **graph representation**
- **traversal**
- **shortest path**
- **state-space graph modeling**
- **DAG basics**
- **graph modeling / graph technique selection**

---
