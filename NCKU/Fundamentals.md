# Fundamentals.md

> Scope: **NCKU-oriented Competitive Programming Fundamentals Roadmap**
>
> Purpose:
> Define **what you need to learn in Fundamentals for NCKU**, how the chapter is structured, and which parts matter most.

---

# 1. Chapter Role 🎯

This chapter is your **contest operating system**.

It does **not** contain “advanced algorithms,” but it supports everything else:
- **Graph**
- **DP**
- **Data Structures**
- **Tree**
- **Algorithm Techniques**

If Fundamentals is weak, the usual failure modes are:
- wrong complexity judgment
- bad brute-force vs optimization decisions
- messy indexing / off-by-one
- broken simulation
- missing prefix preprocessing opportunities
- poor debugging / implementation discipline

So the goal of this chapter is:

> **Build the base layer of contest reasoning and implementation skill before moving into heavier algorithm chapters.**

---

# 2. Master Index 🧭

# 1. Complexity, Constraints, and Feasibility Sense
## 1.1 Big-O and growth rate
## 1.2 Estimating feasible complexity from constraints
## 1.3 Time vs memory tradeoff basics
## 1.4 Recognizing when brute force is still okay
## 1.5 Recognizing when optimization is required

# 2. Arrays, Vectors, and Core Iteration
## 2.1 Array / vector mental model
## 2.2 Traversal patterns
## 2.3 Indexing discipline
## 2.4 Reverse traversal / multi-array processing basics
## 2.5 Frequency counting with arrays

# 3. Simulation and State Tracking
## 3.1 Translating problem statements into state updates
## 3.2 Maintaining counters / flags / positions / states
## 3.3 Event-by-event simulation
## 3.4 Multi-variable simulation
## 3.5 Invariant thinking in simulation

# 4. Sorting and Basic Ordering Power
## 4.1 Why sorting changes problems
## 4.2 Sorting numbers / pairs / structs
## 4.3 Comparator basics
## 4.4 Common sorting-based problem transformations
## 4.5 Stability awareness / tie-breaking awareness

# 5. Prefix Preprocessing Foundations
## 5.1 Prefix sum
## 5.2 2D prefix sum basics
## 5.3 Difference array intuition
## 5.4 Prefix frequency / cumulative counting basics
## 5.5 When preprocessing beats repeated scanning

# 6. Recursion, Brute Force, and Search Foundations
## 6.1 Recursion mental model
## 6.2 Recursive enumeration
## 6.3 Brute force as a legitimate strategy
## 6.4 Pruning intuition
## 6.5 Backtracking preview

# 7. Bitwise and Integer Handling Foundations
## 7.1 Binary representation basics
## 7.2 Bit operations: &, |, ^, ~, <<, >>
## 7.3 Bitmask intuition
## 7.4 Integer overflow / long long discipline
## 7.5 Useful low-level arithmetic tricks

# 8. Contest Implementation Discipline
## 8.1 Dry-run discipline
## 8.2 Edge-case checklist
## 8.3 0-index vs 1-index discipline
## 8.4 Debugging strategy
## 8.5 Template / code organization basics

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
| **1. Complexity, Constraints, and Feasibility Sense** | ⭐⭐⭐⭐⭐ | ⭐⭐⭐⭐⭐ | Required for judging brute force vs optimization in every chapter |
| **2. Arrays, Vectors, and Core Iteration** | ⭐⭐⭐⭐⭐ | ⭐⭐⭐⭐ | Base container / iteration skill for almost all implementations |
| **3. Simulation and State Tracking** | ⭐⭐⭐⭐⭐ | ⭐⭐⭐⭐ | High contest relevance, especially for implementation-heavy problems |
| **4. Sorting and Basic Ordering Power** | ⭐⭐⭐⭐⭐ | ⭐⭐⭐⭐ | Sorting is one of the most common problem transformations |
| **5. Prefix Preprocessing Foundations** | ⭐⭐⭐⭐⭐ | ⭐⭐⭐⭐ | Prefix / difference ideas are foundational for later DS / DP / techniques |
| **6. Recursion, Brute Force, and Search Foundations** | ⭐⭐⭐⭐ | ⭐⭐⭐ | Important support for DFS, tree traversal, search, brute force sanity |
| **7. Bitwise and Integer Handling Foundations** | ⭐⭐⭐⭐ | ⭐⭐⭐ | Important for implementation safety; bitmask awareness helps later |
| **8. Contest Implementation Discipline** | ⭐⭐⭐⭐⭐ | ⭐⭐⭐⭐⭐ | Directly affects correctness and score conversion |

---

## 3.2 Node-Level Priority

| Concept | NCKU Core | NCKU Advanced |
|---|---:|---:|
| **1.1 Big-O and growth rate** | ⭐⭐⭐⭐⭐ | ⭐⭐⭐⭐⭐ |
| **1.2 Estimating feasible complexity from constraints** | ⭐⭐⭐⭐⭐ | ⭐⭐⭐⭐⭐ |
| **1.3 Time vs memory tradeoff basics** | ⭐⭐⭐⭐ | ⭐⭐⭐⭐ |
| **1.4 Recognizing when brute force is still okay** | ⭐⭐⭐⭐⭐ | ⭐⭐⭐⭐ |
| **1.5 Recognizing when optimization is required** | ⭐⭐⭐⭐⭐ | ⭐⭐⭐⭐⭐ |
| **2.1 Array / vector mental model** | ⭐⭐⭐⭐⭐ | ⭐⭐⭐⭐ |
| **2.2 Traversal patterns** | ⭐⭐⭐⭐⭐ | ⭐⭐⭐⭐ |
| **2.3 Indexing discipline** | ⭐⭐⭐⭐⭐ | ⭐⭐⭐⭐⭐ |
| **2.4 Reverse traversal / multi-array processing basics** | ⭐⭐⭐⭐ | ⭐⭐⭐⭐ |
| **2.5 Frequency counting with arrays** | ⭐⭐⭐⭐ | ⭐⭐⭐ |
| **3.1 Translating problem statements into state updates** | ⭐⭐⭐⭐⭐ | ⭐⭐⭐⭐ |
| **3.2 Maintaining counters / flags / positions / states** | ⭐⭐⭐⭐⭐ | ⭐⭐⭐⭐ |
| **3.3 Event-by-event simulation** | ⭐⭐⭐⭐⭐ | ⭐⭐⭐⭐ |
| **3.4 Multi-variable simulation** | ⭐⭐⭐⭐ | ⭐⭐⭐ |
| **3.5 Invariant thinking in simulation** | ⭐⭐⭐⭐ | ⭐⭐⭐⭐ |
| **4.1 Why sorting changes problems** | ⭐⭐⭐⭐⭐ | ⭐⭐⭐⭐ |
| **4.2 Sorting numbers / pairs / structs** | ⭐⭐⭐⭐⭐ | ⭐⭐⭐⭐ |
| **4.3 Comparator basics** | ⭐⭐⭐⭐ | ⭐⭐⭐ |
| **4.4 Common sorting-based problem transformations** | ⭐⭐⭐⭐⭐ | ⭐⭐⭐⭐ |
| **4.5 Stability awareness / tie-breaking awareness** | ⭐⭐⭐ | ⭐⭐⭐ |
| **5.1 Prefix sum** | ⭐⭐⭐⭐⭐ | ⭐⭐⭐⭐⭐ |
| **5.2 2D prefix sum basics** | ⭐⭐⭐⭐ | ⭐⭐⭐ |
| **5.3 Difference array intuition** | ⭐⭐⭐⭐⭐ | ⭐⭐⭐⭐ |
| **5.4 Prefix frequency / cumulative counting basics** | ⭐⭐⭐⭐ | ⭐⭐⭐ |
| **5.5 When preprocessing beats repeated scanning** | ⭐⭐⭐⭐⭐ | ⭐⭐⭐⭐ |
| **6.1 Recursion mental model** | ⭐⭐⭐⭐ | ⭐⭐⭐ |
| **6.2 Recursive enumeration** | ⭐⭐⭐ | ⭐⭐ |
| **6.3 Brute force as a legitimate strategy** | ⭐⭐⭐⭐⭐ | ⭐⭐⭐ |
| **6.4 Pruning intuition** | ⭐⭐ | ⭐⭐ |
| **6.5 Backtracking preview** | ⭐ | ⭐ |
| **7.1 Binary representation basics** | ⭐⭐⭐ | ⭐⭐ |
| **7.2 Bit operations** | ⭐⭐⭐ | ⭐⭐ |
| **7.3 Bitmask intuition** | ⭐⭐ | ⭐⭐⭐ |
| **7.4 Integer overflow / long long discipline** | ⭐⭐⭐⭐⭐ | ⭐⭐⭐⭐⭐ |
| **7.5 Useful low-level arithmetic tricks** | ⭐⭐⭐ | ⭐⭐ |
| **8.1 Dry-run discipline** | ⭐⭐⭐⭐⭐ | ⭐⭐⭐⭐⭐ |
| **8.2 Edge-case checklist** | ⭐⭐⭐⭐⭐ | ⭐⭐⭐⭐⭐ |
| **8.3 0-index vs 1-index discipline** | ⭐⭐⭐⭐⭐ | ⭐⭐⭐⭐⭐ |
| **8.4 Debugging strategy** | ⭐⭐⭐⭐⭐ | ⭐⭐⭐⭐⭐ |
| **8.5 Template / code organization basics** | ⭐⭐⭐⭐ | ⭐⭐⭐ |

---

# 4. NCKU Study Emphasis 📌

If you need to prioritize inside Fundamentals for NCKU, the order should roughly be:

## Tier S — stabilize early
1. **Complexity / constraints / feasibility sense**
2. **Arrays / indexing / traversal discipline**
3. **Simulation and state tracking**
4. **Sorting and sorting-based transformations**
5. **Prefix sum / difference array / preprocessing instinct**
6. **Contest implementation discipline**
7. **Integer overflow / long long discipline**

## Tier A — strong support
8. **Brute force judgment**
9. **Recursion basics**
10. **Frequency counting / reverse traversal / multi-array handling**

## Tier B — awareness first
11. **2D prefix basics**
12. **Bit operations / bitmask intuition**
13. **Pruning / backtracking preview**

---

# 5. Chapter Boundary Notes 🧱

To keep Fundamentals clean, the following topics should **not** be expanded deeply here:

## Move to **Data_Structures.md**
- Fenwick Tree / BIT
- Segment Tree
- Heap / priority queue
- DSU
- map / unordered_map deeper usage

## Move to **Algorithm_Techniques.md**
- binary search on answer
- two pointers
- sliding window
- coordinate compression
- sweep / offline event processing

## Move to **Graph.md**
- DFS / BFS as graph algorithms
- shortest path
- state-space graph modeling

## Move to **Tree.md**
- DFS on tree
- subtree size / tree DP / Euler tour

## Move to **DP.md**
- DP optimization and state design

So Fundamentals should stay focused on:
- **judgment**
- **implementation base**
- **preprocessing base**
- **simulation base**

---
