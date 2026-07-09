# Tree.md

> Scope: **NCKU-oriented Competitive Programming Tree Roadmap**
>
> Purpose:
> Define **what you need to learn in Tree for NCKU**, how the chapter is structured, and which parts matter most.

---

# 1. Chapter Role 🎯

This chapter is about **reasoning on tree structure**.

A tree is “just a graph” in one sense, but in contests it deserves its own chapter because trees have very strong special structure:

- exactly **n - 1 edges**
- **connected**
- **no cycles**
- **unique simple path** between any two nodes

That structure makes many techniques possible:
- rooted-tree traversal
- subtree aggregation
- parent / depth / ancestor reasoning
- tree distance / diameter
- tree DP
- flattening subtree into intervals
- path queries and LCA awareness

For NCKU, Tree is important, but it is **not** the first battlefield I’d optimize compared with:
- **Graph**
- **DP**
- **Algorithm Techniques**
- **Data Structures**

So the goal here is:

> **Build strong contest tree fundamentals and the most useful NCKU tree patterns, without prematurely diving into heavy IOI-only tree machinery.**

---

# 2. Master Index 🧭

# 1. Tree Foundations
## 1.1 Tree definition and properties
## 1.2 Rooted vs unrooted tree
## 1.3 Parent / child / sibling / leaf / subtree
## 1.4 Unique simple path property
## 1.5 Weighted tree awareness

# 2. Tree Representation
## 2.1 Adjacency list representation
## 2.2 Parent array representation
## 2.3 Rooting a tree by DFS / BFS
## 2.4 Avoiding revisiting parent
## 2.5 Tree input patterns and indexing discipline

# 3. Tree Traversal Basics
## 3.1 DFS on tree
## 3.2 BFS on tree
## 3.3 Preorder / postorder mental model
## 3.4 Traversal order and aggregation timing
## 3.5 Recursive vs iterative traversal awareness

# 4. Rooted-Tree Information
## 4.1 Parent
## 4.2 Depth
## 4.3 Subtree size
## 4.4 Entry / exit timing awareness
## 4.5 Basic ancestor awareness

# 5. Tree Distance and Diameter
## 5.1 Tree distance intuition
## 5.2 Diameter by two DFS / BFS
## 5.3 Longest-path reasoning on trees
## 5.4 Farthest-node trick
## 5.5 Diameter-related problem patterns

# 6. Subtree Aggregation
## 6.1 Subtree sum
## 6.2 Counting nodes in subtree
## 6.3 Subtree min / max / property count
## 6.4 Post-order accumulation
## 6.5 Rerooting awareness preview

# 7. Tree DP Foundations
## 7.1 DP state on node
## 7.2 Merge child contributions
## 7.3 Leaf base case handling
## 7.4 Choose / not choose tree DP
## 7.5 Longest-path-style tree DP

# 8. Euler Tour / Flattening Awareness
## 8.1 Flatten tree into array
## 8.2 Subtree as interval
## 8.3 Using BIT / segtree on flattened tree
## 8.4 Entry-time based subtree queries
## 8.5 When flattening helps

# 9. LCA Awareness
## 9.1 What LCA solves
## 9.2 Binary lifting awareness
## 9.3 Distance using LCA awareness
## 9.4 Path-query awareness
## 9.5 When LCA is actually needed

# 10. Tree Problem Modeling
## 10.1 Choosing a root
## 10.2 Turning statement requirements into subtree / path / parent-depth questions
## 10.3 Distinguishing tree traversal vs tree DP vs path-query problem
## 10.4 Recognizing when a tree problem is really a graph / DP / DS problem in disguise
## 10.5 Choosing the simplest sufficient tree technique

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
| **1. Tree Foundations** | ⭐⭐⭐⭐⭐ | ⭐⭐⭐⭐ | Core vocabulary / structure understanding |
| **2. Tree Representation** | ⭐⭐⭐⭐⭐ | ⭐⭐⭐⭐ | You must be comfortable reading and building trees in contest code |
| **3. Tree Traversal Basics** | ⭐⭐⭐⭐⭐ | ⭐⭐⭐⭐⭐ | DFS / BFS on trees is the base of almost everything else |
| **4. Rooted-Tree Information** | ⭐⭐⭐⭐⭐ | ⭐⭐⭐⭐ | Parent / depth / subtree size are among the most common tree quantities |
| **5. Tree Distance and Diameter** | ⭐⭐⭐⭐ | ⭐⭐⭐ | Very common contest pattern and high ROI |
| **6. Subtree Aggregation** | ⭐⭐⭐⭐ | ⭐⭐⭐⭐ | Important bridge toward tree DP and flattened subtree queries |
| **7. Tree DP Foundations** | ⭐⭐⭐⭐ | ⭐⭐⭐⭐⭐ | One of the most important advanced tree skills for NCKU |
| **8. Euler Tour / Flattening Awareness** | ⭐⭐ | ⭐⭐⭐⭐ | Important once tree queries mix with BIT / segment tree |
| **9. LCA Awareness** | ⭐⭐ | ⭐⭐⭐ | Useful, but not first-wave NCKU priority |
| **10. Tree Problem Modeling** | ⭐⭐⭐⭐⭐ | ⭐⭐⭐⭐⭐ | The meta-skill that decides whether you even pick the right approach |

---

## 3.2 Node-Level Priority

| Concept | NCKU Core | NCKU Advanced |
|---|---:|---:|
| **1.1 Tree definition and properties** | ⭐⭐⭐⭐⭐ | ⭐⭐⭐⭐ |
| **1.2 Rooted vs unrooted tree** | ⭐⭐⭐⭐⭐ | ⭐⭐⭐⭐ |
| **1.3 Parent / child / sibling / leaf / subtree** | ⭐⭐⭐⭐⭐ | ⭐⭐⭐⭐ |
| **1.4 Unique simple path property** | ⭐⭐⭐⭐ | ⭐⭐⭐ |
| **1.5 Weighted tree awareness** | ⭐⭐⭐ | ⭐⭐⭐ |
| **2.1 Adjacency list representation** | ⭐⭐⭐⭐⭐ | ⭐⭐⭐⭐ |
| **2.2 Parent array representation** | ⭐⭐⭐⭐ | ⭐⭐⭐ |
| **2.3 Rooting a tree by DFS / BFS** | ⭐⭐⭐⭐⭐ | ⭐⭐⭐⭐ |
| **2.4 Avoiding revisiting parent** | ⭐⭐⭐⭐⭐ | ⭐⭐⭐⭐ |
| **2.5 Tree input patterns and indexing discipline** | ⭐⭐⭐⭐⭐ | ⭐⭐⭐⭐ |
| **3.1 DFS on tree** | ⭐⭐⭐⭐⭐ | ⭐⭐⭐⭐⭐ |
| **3.2 BFS on tree** | ⭐⭐⭐⭐ | ⭐⭐⭐ |
| **3.3 Preorder / postorder mental model** | ⭐⭐⭐⭐ | ⭐⭐⭐⭐ |
| **3.4 Traversal order and aggregation timing** | ⭐⭐⭐⭐⭐ | ⭐⭐⭐⭐⭐ |
| **3.5 Recursive vs iterative traversal awareness** | ⭐⭐⭐ | ⭐⭐⭐ |
| **4.1 Parent** | ⭐⭐⭐⭐⭐ | ⭐⭐⭐⭐ |
| **4.2 Depth** | ⭐⭐⭐⭐⭐ | ⭐⭐⭐⭐ |
| **4.3 Subtree size** | ⭐⭐⭐⭐⭐ | ⭐⭐⭐⭐⭐ |
| **4.4 Entry / exit timing awareness** | ⭐⭐ | ⭐⭐⭐⭐ |
| **4.5 Basic ancestor awareness** | ⭐⭐ | ⭐⭐⭐ |
| **5.1 Tree distance intuition** | ⭐⭐⭐⭐ | ⭐⭐⭐ |
| **5.2 Diameter by two DFS / BFS** | ⭐⭐⭐⭐ | ⭐⭐⭐ |
| **5.3 Longest-path reasoning on trees** | ⭐⭐⭐⭐ | ⭐⭐⭐⭐ |
| **5.4 Farthest-node trick** | ⭐⭐⭐ | ⭐⭐⭐ |
| **5.5 Diameter-related problem patterns** | ⭐⭐⭐ | ⭐⭐⭐ |
| **6.1 Subtree sum** | ⭐⭐⭐⭐ | ⭐⭐⭐⭐ |
| **6.2 Counting nodes in subtree** | ⭐⭐⭐⭐ | ⭐⭐⭐⭐ |
| **6.3 Subtree min / max / property count** | ⭐⭐⭐ | ⭐⭐⭐⭐ |
| **6.4 Post-order accumulation** | ⭐⭐⭐⭐ | ⭐⭐⭐⭐ |
| **6.5 Rerooting awareness preview** | ⭐ | ⭐⭐⭐ |
| **7.1 DP state on node** | ⭐⭐⭐⭐ | ⭐⭐⭐⭐⭐ |
| **7.2 Merge child contributions** | ⭐⭐⭐⭐ | ⭐⭐⭐⭐⭐ |
| **7.3 Leaf base case handling** | ⭐⭐⭐⭐ | ⭐⭐⭐⭐ |
| **7.4 Choose / not choose tree DP** | ⭐⭐⭐ | ⭐⭐⭐⭐ |
| **7.5 Longest-path-style tree DP** | ⭐⭐⭐ | ⭐⭐⭐⭐ |
| **8.1 Flatten tree into array** | ⭐⭐ | ⭐⭐⭐⭐ |
| **8.2 Subtree as interval** | ⭐⭐ | ⭐⭐⭐⭐ |
| **8.3 Using BIT / segtree on flattened tree** | ⭐ | ⭐⭐⭐⭐ |
| **8.4 Entry-time based subtree queries** | ⭐⭐ | ⭐⭐⭐⭐ |
| **8.5 When flattening helps** | ⭐⭐ | ⭐⭐⭐⭐ |
| **9.1 What LCA solves** | ⭐⭐ | ⭐⭐⭐ |
| **9.2 Binary lifting awareness** | ⭐ | ⭐⭐⭐ |
| **9.3 Distance using LCA awareness** | ⭐⭐ | ⭐⭐⭐ |
| **9.4 Path-query awareness** | ⭐⭐ | ⭐⭐⭐ |
| **9.5 When LCA is actually needed** | ⭐⭐ | ⭐⭐⭐ |
| **10.1 Choosing a root** | ⭐⭐⭐⭐ | ⭐⭐⭐⭐ |
| **10.2 Turning statement requirements into subtree / path / parent-depth questions** | ⭐⭐⭐⭐⭐ | ⭐⭐⭐⭐⭐ |
| **10.3 Distinguishing tree traversal vs tree DP vs path-query problem** | ⭐⭐⭐⭐⭐ | ⭐⭐⭐⭐⭐ |
| **10.4 Recognizing when a tree problem is really a graph / DP / DS problem in disguise** | ⭐⭐⭐⭐ | ⭐⭐⭐⭐⭐ |
| **10.5 Choosing the simplest sufficient tree technique** | ⭐⭐⭐⭐⭐ | ⭐⭐⭐⭐⭐ |

---

# 4. NCKU Study Emphasis 📌

If you need to prioritize inside Tree for NCKU, the order should roughly be:

## Tier S — stabilize early
1. **Tree foundations + representation**
2. **DFS on tree**
3. **Parent / depth / subtree size**
4. **Traversal order and aggregation timing**
5. **Tree distance / diameter basics**
6. **Subtree aggregation**
7. **Tree problem modeling**

## Tier A — strong support / likely high ROI
8. **Tree DP foundations**
9. **Post-order accumulation patterns**
10. **Longest-path-style tree DP**
11. **Choosing root / subtree-vs-path interpretation skill**

## Tier B — advanced NCKU pressure points
12. **Euler tour / flattening awareness**
13. **Subtree as interval**
14. **Using BIT / segtree on flattened tree**
15. **LCA awareness**
16. **Rerooting awareness preview**

---

# 5. Chapter Boundary Notes 🧱

To keep Tree clean, the following topics should **not** be expanded deeply here:

## Move to **Fundamentals.md**
- recursion basics
- brute-force basics
- implementation discipline
- arrays / prefix / sorting basics

## Move to **Graph.md**
- DFS / BFS as general graph algorithms
- connected components / shortest path / topological sort
- state-space graph modeling

## Move to **Data_Structures.md**
- Fenwick Tree / BIT itself
- Segment Tree itself
- DSU
- heap / priority queue
- monotonic stack

## Move to **Algorithm_Techniques.md**
- binary search on answer
- sweep / offline as a general pattern
- coordinate compression
- two pointers / sliding window

## Move to **DP.md**
- general DP foundations
- sequence DP / knapsack / counting DP
- state design outside tree context

So Tree should stay focused on:
- **tree structure**
- **tree traversal**
- **subtree / path reasoning**
- **tree DP foundations**
- **flattening / LCA awareness**
- **tree-specific modeling skill**

---
