# Algorithm_Techniques.md

> Scope: **NCKU-oriented Competitive Programming Algorithm Techniques Roadmap**
>
> Purpose:
> Define **what you need to learn in Algorithm Techniques for NCKU**, how the chapter is structured, and which parts matter most.

---

# 1. Chapter Role 🎯

This chapter is about **problem-transformation tools**.

Unlike:
- `Data_Structures.md`, which is about **how to maintain/query data**
- `Graph.md`, which is about **graph-state traversal / shortest path**
- `DP.md`, which is about **state transition over overlapping subproblems**

`Algorithm_Techniques.md` is about:

> **“What generic contest techniques help me turn a problem into something solvable?”**

This is one of the highest-ROI chapters for NCKU because many contest problems are not “invent a new algorithm from scratch.”  
They are often solved by recognizing one of these moves:

- turn optimization into **feasibility + binary search**
- turn repeated work into **prefix/suffix preprocessing**
- exploit **monotonicity**
- use **two pointers / sliding window**
- sort and do **offline / sweep processing**
- compress large coordinates
- search for **k-th answer / best candidate** using a standard technique

So the goal of this chapter is:

> **Build the NCKU problem-solving toolbox for transforming hard-looking problems into standard solvable forms.**

---

# 2. Master Index 🧭

# 1. Two Pointers and Window Control
## 1.1 Opposite-direction two pointers
## 1.2 Same-direction two pointers
## 1.3 Maintaining a valid interval
## 1.4 When two pointers is valid
## 1.5 When two pointers fails

# 2. Sliding Window
## 2.1 Fixed-size window
## 2.2 Variable-size window
## 2.3 Window sum / count / frequency maintenance
## 2.4 Longest valid subarray patterns
## 2.5 Shortest valid subarray patterns

# 3. Binary Search
## 3.1 Classic binary search on sorted arrays
## 3.2 lower_bound / upper_bound mental model
## 3.3 First true / last true template
## 3.4 Invariant discipline
## 3.5 Boundary bug patterns

# 4. Binary Search on Answer
## 4.1 Turning optimization into decision
## 4.2 Designing a feasibility check
## 4.3 Monotone predicate recognition
## 4.4 Minimum feasible / maximum feasible patterns
## 4.5 Common fake-monotonicity traps

# 5. Prefix / Suffix Technique Layer
## 5.1 Prefix best / suffix best
## 5.2 Prefix counts / prefix minima / prefix maxima
## 5.3 Combining left-side and right-side information
## 5.4 Remove-one / split-point style transformations
## 5.5 Prefix decomposition as DP support

# 6. Difference / Range Marking / Offline Accumulation
## 6.1 Difference array for repeated range updates
## 6.2 Reconstructing final values with prefix accumulation
## 6.3 Offline range contribution thinking
## 6.4 Event accumulation by sorted endpoints
## 6.5 Turning many updates into few sweeps

# 7. Coordinate Compression
## 7.1 Why compression exists
## 7.2 Preserving order while shrinking value range
## 7.3 Compression for BIT / segtree / offline query
## 7.4 Compression with duplicates
## 7.5 Reverse mapping awareness

# 8. Monotonicity and Feasibility Recognition
## 8.1 What monotonicity means in contests
## 8.2 Feasibility-check thinking
## 8.3 Search-space design
## 8.4 Recognizing hidden monotonicity
## 8.5 When binary search on answer is overkill

# 9. Sweep / Offline / Event Thinking
## 9.1 Sort events by coordinate / time / value
## 9.2 Answer queries offline
## 9.3 Convert interval conditions into event contributions
## 9.4 Prefix data structure + sorted events
## 9.5 Offline counting patterns

# 10. K-th / Best-First / Candidate Generation Awareness
## 10.1 Heap-based best-first generation intuition
## 10.2 K-th answer thinking
## 10.3 Counting ≤ X as an answer-search pattern
## 10.4 Merging sorted candidate streams
## 10.5 When to think heap vs binary search counting

# 11. Technique Selection Skill
## 11.1 Recognizing “scan every time” as a red flag
## 11.2 Distinguishing two pointers vs binary search vs prefix preprocessing
## 11.3 Distinguishing online vs offline approach
## 11.4 Recognizing when DS is needed and when a technique alone is enough
## 11.5 Choosing the simplest sufficient transformation

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
| **1. Two Pointers and Window Control** | ⭐⭐⭐⭐ | ⭐⭐⭐ | Common and high ROI, especially in array/string-style tasks |
| **2. Sliding Window** | ⭐⭐⭐⭐ | ⭐⭐⭐ | Closely tied to two pointers and interval maintenance |
| **3. Binary Search** | ⭐⭐⭐⭐⭐ | ⭐⭐⭐⭐ | Must be very stable; one of the most common contest tools |
| **4. Binary Search on Answer** | ⭐⭐⭐⭐⭐ | ⭐⭐⭐⭐⭐ | One of the highest-ROI NCKU techniques |
| **5. Prefix / Suffix Technique Layer** | ⭐⭐⭐⭐⭐ | ⭐⭐⭐⭐ | Very common transformation tool, often easier than DS |
| **6. Difference / Range Marking / Offline Accumulation** | ⭐⭐⭐⭐ | ⭐⭐⭐⭐⭐ | Important bridge between Fundamentals and harder offline problems |
| **7. Coordinate Compression** | ⭐⭐⭐⭐ | ⭐⭐⭐⭐⭐ | Extremely useful support tool for DS / offline / value-based tasks |
| **8. Monotonicity and Feasibility Recognition** | ⭐⭐⭐⭐⭐ | ⭐⭐⭐⭐⭐ | Core meta-skill behind binary search on answer |
| **9. Sweep / Offline / Event Thinking** | ⭐⭐⭐ | ⭐⭐⭐⭐⭐ | Very important for harder NCKU tasks |
| **10. K-th / Best-First / Candidate Generation Awareness** | ⭐⭐ | ⭐⭐⭐⭐ | Advanced but useful for stronger deciding-round problems |
| **11. Technique Selection Skill** | ⭐⭐⭐⭐⭐ | ⭐⭐⭐⭐⭐ | One of the most important goals of the chapter |

---

## 3.2 Node-Level Priority

| Concept | NCKU Core | NCKU Advanced |
|---|---:|---:|
| **1.1 Opposite-direction two pointers** | ⭐⭐⭐⭐ | ⭐⭐⭐ |
| **1.2 Same-direction two pointers** | ⭐⭐⭐⭐ | ⭐⭐⭐ |
| **1.3 Maintaining a valid interval** | ⭐⭐⭐⭐ | ⭐⭐⭐ |
| **1.4 When two pointers is valid** | ⭐⭐⭐⭐ | ⭐⭐⭐⭐ |
| **1.5 When two pointers fails** | ⭐⭐⭐⭐ | ⭐⭐⭐⭐ |
| **2.1 Fixed-size window** | ⭐⭐⭐ | ⭐⭐ |
| **2.2 Variable-size window** | ⭐⭐⭐⭐ | ⭐⭐⭐ |
| **2.3 Window sum / count / frequency maintenance** | ⭐⭐⭐⭐ | ⭐⭐⭐ |
| **2.4 Longest valid subarray patterns** | ⭐⭐⭐⭐ | ⭐⭐⭐ |
| **2.5 Shortest valid subarray patterns** | ⭐⭐⭐ | ⭐⭐⭐ |
| **3.1 Classic binary search on sorted arrays** | ⭐⭐⭐⭐⭐ | ⭐⭐⭐⭐ |
| **3.2 lower_bound / upper_bound mental model** | ⭐⭐⭐⭐⭐ | ⭐⭐⭐⭐ |
| **3.3 First true / last true template** | ⭐⭐⭐⭐⭐ | ⭐⭐⭐⭐⭐ |
| **3.4 Invariant discipline** | ⭐⭐⭐⭐⭐ | ⭐⭐⭐⭐⭐ |
| **3.5 Boundary bug patterns** | ⭐⭐⭐⭐⭐ | ⭐⭐⭐⭐⭐ |
| **4.1 Turning optimization into decision** | ⭐⭐⭐⭐⭐ | ⭐⭐⭐⭐⭐ |
| **4.2 Designing a feasibility check** | ⭐⭐⭐⭐⭐ | ⭐⭐⭐⭐⭐ |
| **4.3 Monotone predicate recognition** | ⭐⭐⭐⭐⭐ | ⭐⭐⭐⭐⭐ |
| **4.4 Minimum feasible / maximum feasible patterns** | ⭐⭐⭐⭐⭐ | ⭐⭐⭐⭐⭐ |
| **4.5 Common fake-monotonicity traps** | ⭐⭐⭐⭐ | ⭐⭐⭐⭐⭐ |
| **5.1 Prefix best / suffix best** | ⭐⭐⭐⭐ | ⭐⭐⭐⭐ |
| **5.2 Prefix counts / prefix minima / prefix maxima** | ⭐⭐⭐⭐ | ⭐⭐⭐⭐ |
| **5.3 Combining left-side and right-side information** | ⭐⭐⭐⭐ | ⭐⭐⭐⭐ |
| **5.4 Remove-one / split-point style transformations** | ⭐⭐⭐⭐ | ⭐⭐⭐⭐ |
| **5.5 Prefix decomposition as DP support** | ⭐⭐⭐ | ⭐⭐⭐⭐ |
| **6.1 Difference array for repeated range updates** | ⭐⭐⭐⭐ | ⭐⭐⭐⭐ |
| **6.2 Reconstructing final values with prefix accumulation** | ⭐⭐⭐⭐ | ⭐⭐⭐⭐ |
| **6.3 Offline range contribution thinking** | ⭐⭐⭐ | ⭐⭐⭐⭐⭐ |
| **6.4 Event accumulation by sorted endpoints** | ⭐⭐⭐ | ⭐⭐⭐⭐⭐ |
| **6.5 Turning many updates into few sweeps** | ⭐⭐⭐⭐ | ⭐⭐⭐⭐⭐ |
| **7.1 Why compression exists** | ⭐⭐⭐⭐ | ⭐⭐⭐⭐ |
| **7.2 Preserving order while shrinking value range** | ⭐⭐⭐⭐ | ⭐⭐⭐⭐ |
| **7.3 Compression for BIT / segtree / offline query** | ⭐⭐⭐⭐ | ⭐⭐⭐⭐⭐ |
| **7.4 Compression with duplicates** | ⭐⭐⭐⭐ | ⭐⭐⭐⭐ |
| **7.5 Reverse mapping awareness** | ⭐⭐ | ⭐⭐ |
| **8.1 What monotonicity means in contests** | ⭐⭐⭐⭐⭐ | ⭐⭐⭐⭐⭐ |
| **8.2 Feasibility-check thinking** | ⭐⭐⭐⭐⭐ | ⭐⭐⭐⭐⭐ |
| **8.3 Search-space design** | ⭐⭐⭐⭐⭐ | ⭐⭐⭐⭐⭐ |
| **8.4 Recognizing hidden monotonicity** | ⭐⭐⭐⭐ | ⭐⭐⭐⭐⭐ |
| **8.5 When binary search on answer is overkill** | ⭐⭐⭐⭐ | ⭐⭐⭐⭐⭐ |
| **9.1 Sort events by coordinate / time / value** | ⭐⭐⭐ | ⭐⭐⭐⭐⭐ |
| **9.2 Answer queries offline** | ⭐⭐⭐ | ⭐⭐⭐⭐⭐ |
| **9.3 Convert interval conditions into event contributions** | ⭐⭐ | ⭐⭐⭐⭐⭐ |
| **9.4 Prefix data structure + sorted events** | ⭐⭐ | ⭐⭐⭐⭐⭐ |
| **9.5 Offline counting patterns** | ⭐⭐ | ⭐⭐⭐⭐⭐ |
| **10.1 Heap-based best-first generation intuition** | ⭐⭐ | ⭐⭐⭐⭐ |
| **10.2 K-th answer thinking** | ⭐⭐ | ⭐⭐⭐⭐ |
| **10.3 Counting ≤ X as an answer-search pattern** | ⭐⭐ | ⭐⭐⭐⭐⭐ |
| **10.4 Merging sorted candidate streams** | ⭐ | ⭐⭐⭐ |
| **10.5 When to think heap vs binary search counting** | ⭐⭐ | ⭐⭐⭐⭐ |
| **11.1 Recognizing “scan every time” as a red flag** | ⭐⭐⭐⭐⭐ | ⭐⭐⭐⭐⭐ |
| **11.2 Distinguishing two pointers vs binary search vs prefix preprocessing** | ⭐⭐⭐⭐⭐ | ⭐⭐⭐⭐⭐ |
| **11.3 Distinguishing online vs offline approach** | ⭐⭐⭐⭐ | ⭐⭐⭐⭐⭐ |
| **11.4 Recognizing when DS is needed and when a technique alone is enough** | ⭐⭐⭐⭐⭐ | ⭐⭐⭐⭐⭐ |
| **11.5 Choosing the simplest sufficient transformation** | ⭐⭐⭐⭐⭐ | ⭐⭐⭐⭐⭐ |

---

# 4. NCKU Study Emphasis 📌

If you need to prioritize inside Algorithm Techniques for NCKU, the order should roughly be:

## Tier S — stabilize early
1. **Binary Search**
2. **Binary Search on Answer**
3. **Monotonicity / feasibility recognition**
4. **Prefix / suffix decomposition**
5. **Technique selection skill**
6. **Two pointers / sliding window**
7. **Difference / offline accumulation basics**
8. **Coordinate compression**

## Tier A — strong support / likely high ROI
9. **Offline range contribution thinking**
10. **Event accumulation by sorted endpoints**
11. **Recognizing when a DS is needed vs when preprocessing is enough**
12. **Counting ≤ X as an answer-search pattern**
13. **Remove-one / split-point transformations**

## Tier B — advanced NCKU pressure points
14. **Full sweep / offline event thinking**
15. **Prefix data structure + sorted events**
16. **K-th / best-first generation awareness**
17. **Heap vs binary-search counting judgment**
18. **More advanced offline counting patterns**

---

# 5. Chapter Boundary Notes 🧱

To keep Algorithm Techniques clean, the following topics should **not** be expanded deeply here:

## Move to **Fundamentals.md**
- Big-O basics
- basic prefix sum / difference array foundations
- implementation safety
- basic simulation and indexing discipline

## Move to **Data_Structures.md**
- Fenwick Tree / BIT itself
- Segment Tree itself
- heap / priority queue itself
- DSU
- monotonic stack as a data-structure pattern

## Move to **Graph.md**
- BFS / DFS
- Dijkstra / 0-1 BFS
- state-space shortest path
- graph modeling

## Move to **Tree.md**
- tree traversal
- subtree flattening in full tree context
- LCA / tree DP

## Move to **DP.md**
- DP state design
- sequence / knapsack / counting DP
- transition compression / matrix transition
- DP-specific optimizations

So Algorithm Techniques should stay focused on:
- **search-space reduction**
- **problem transformation**
- **monotonicity / feasibility**
- **interval / prefix-suffix tricks**
- **offline / sweep thinking**
- **technique-selection skill**

---
