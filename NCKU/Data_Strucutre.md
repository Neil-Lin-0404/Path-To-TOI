# Data_Structures.md

> Scope: **NCKU-oriented Competitive Programming Data Structures Roadmap**
>
> Purpose:
> Define **what you need to learn in Data Structures for NCKU**, how the chapter is structured, and which parts matter most.

---

# 1. Chapter Role 🎯

This chapter is about **how to store, maintain, and query information efficiently** during contest problem solving.

Compared with `Fundamentals.md`, which is more about:
- complexity judgment
- simulation
- sorting
- prefix preprocessing
- implementation discipline

`Data_Structures.md` is about:

> **“What structure should I use when I need to dynamically maintain data or answer repeated queries efficiently?”**

This chapter becomes especially important when:
- brute-force repeated scanning is too slow
- the problem has many updates / many queries
- you need to repeatedly retrieve a best candidate
- you need to maintain connectivity
- you need dynamic prefix / range information
- you need offline query processing with a supporting structure

For NCKU, this chapter is **not just support knowledge**.  
It is one of the main scoring battlefields, especially once problems start mixing:
- **Fenwick Tree / BIT**
- **Segment Tree**
- **heap / priority queue**
- **DSU**
- **offline query / event processing**
- **monotonic stack / boundary reasoning**

---

# 2. Master Index 🧭

# 1. Linear Containers
## 1.1 Stack mental model and LIFO behavior
## 1.2 Queue mental model and FIFO behavior
## 1.3 Deque mental model and double-ended operations
## 1.4 Choosing between stack / queue / deque / vector
## 1.5 Container-operation complexity awareness

# 2. Stack / Monotonic Stack Patterns
## 2.1 Next greater / next smaller
## 2.2 Previous greater / previous smaller
## 2.3 Monotonic stack invariant
## 2.4 Contribution / boundary awareness
## 2.5 Histogram-style awareness

# 3. Queue / Deque Patterns
## 3.1 BFS queue usage awareness
## 3.2 Process-order simulation with queue
## 3.3 Deque for 0-1 BFS awareness
## 3.4 Double-ended maintenance patterns
## 3.5 Window / deque pattern awareness

# 4. Priority Queue / Heap
## 4.1 Min-heap vs max-heap
## 4.2 Repeated best-candidate extraction
## 4.3 Heap in Dijkstra
## 4.4 Heap in scheduling / greedy
## 4.5 K-th / merge / best-first generation awareness

# 5. Frequency Structures
## 5.1 Frequency array
## 5.2 map / unordered_map
## 5.3 Maintaining distinct counts
## 5.4 Presence / visited / count maps
## 5.5 Compression + frequency structure combination

# 6. DSU / Union-Find
## 6.1 Parent representation
## 6.2 Find
## 6.3 Union / merge
## 6.4 Path compression
## 6.5 Union by size / rank
## 6.6 Component maintenance thinking

# 7. Fenwick Tree / BIT
## 7.1 Why BIT exists
## 7.2 Point update + prefix query
## 7.3 Range sum by prefix subtraction
## 7.4 Coordinate compression + BIT
## 7.5 BIT for counting / inversion / order-style tasks awareness

# 8. Segment Tree
## 8.1 Why segment tree exists
## 8.2 Node meaning
## 8.3 Build
## 8.4 Point update
## 8.5 Range query
## 8.6 Sum / min / max segment tree
## 8.7 When segtree beats prefix / BIT
## 8.8 Lazy propagation awareness

# 9. Offline Query / Event Processing
## 9.1 Sort queries by right endpoint / value / time
## 9.2 Sweep events and update data structure
## 9.3 Answer queries offline with BIT / segtree
## 9.4 Interval contribution counting
## 9.5 Transforming many online-looking queries into offline process

# 10. Choosing the Right Structure
## 10.1 Prefix sum vs BIT vs segment tree
## 10.2 map vs unordered_map vs array
## 10.3 Heap vs sorted container vs binary search
## 10.4 Offline sweep vs online structure
## 10.5 “Don’t overbuild” judgment

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
| **1. Linear Containers** | ⭐⭐⭐⭐ | ⭐⭐⭐ | Basic but essential implementation tools |
| **2. Stack / Monotonic Stack Patterns** | ⭐⭐⭐ | ⭐⭐⭐⭐ | Important for next greater/smaller, boundary contributions, some DP/array problems |
| **3. Queue / Deque Patterns** | ⭐⭐⭐ | ⭐⭐⭐ | Queue itself is fundamental; deque patterns become more important with graph / sliding window / 0-1 BFS |
| **4. Priority Queue / Heap** | ⭐⭐⭐⭐⭐ | ⭐⭐⭐⭐⭐ | Very high value for Dijkstra, scheduling, repeated best-choice extraction |
| **5. Frequency Structures** | ⭐⭐⭐⭐ | ⭐⭐⭐ | Common support structure for counting / maintaining state |
| **6. DSU / Union-Find** | ⭐⭐⭐⭐ | ⭐⭐⭐ | High-value connectivity tool; important but narrower than heap / BIT / segtree |
| **7. Fenwick Tree / BIT** | ⭐⭐⭐⭐ | ⭐⭐⭐⭐⭐ | One of the most important NCKU DS tools |
| **8. Segment Tree** | ⭐⭐⭐ | ⭐⭐⭐⭐⭐ | High ceiling; especially important for harder deciding-round style problems |
| **9. Offline Query / Event Processing** | ⭐⭐ | ⭐⭐⭐⭐⭐ | Very important for stronger NCKU problems, but sits on top of BIT / segtree / sorting maturity |
| **10. Choosing the Right Structure** | ⭐⭐⭐⭐⭐ | ⭐⭐⭐⭐⭐ | One of the most important meta-skills in this chapter |

---

## 3.2 Node-Level Priority

| Concept | NCKU Core | NCKU Advanced |
|---|---:|---:|
| **1.1 Stack mental model and LIFO behavior** | ⭐⭐⭐⭐ | ⭐⭐⭐ |
| **1.2 Queue mental model and FIFO behavior** | ⭐⭐⭐⭐ | ⭐⭐⭐ |
| **1.3 Deque mental model and double-ended operations** | ⭐⭐⭐ | ⭐⭐⭐ |
| **1.4 Choosing between stack / queue / deque / vector** | ⭐⭐⭐⭐ | ⭐⭐⭐ |
| **1.5 Container-operation complexity awareness** | ⭐⭐⭐⭐ | ⭐⭐⭐ |
| **2.1 Next greater / next smaller** | ⭐⭐⭐ | ⭐⭐⭐⭐ |
| **2.2 Previous greater / previous smaller** | ⭐⭐⭐ | ⭐⭐⭐⭐ |
| **2.3 Monotonic stack invariant** | ⭐⭐⭐ | ⭐⭐⭐⭐ |
| **2.4 Contribution / boundary awareness** | ⭐⭐ | ⭐⭐⭐⭐ |
| **2.5 Histogram-style awareness** | ⭐ | ⭐⭐ |
| **3.1 BFS queue usage awareness** | ⭐⭐⭐⭐ | ⭐⭐⭐ |
| **3.2 Process-order simulation with queue** | ⭐⭐⭐ | ⭐⭐ |
| **3.3 Deque for 0-1 BFS awareness** | ⭐ | ⭐⭐⭐ |
| **3.4 Double-ended maintenance patterns** | ⭐⭐ | ⭐⭐⭐ |
| **3.5 Window / deque pattern awareness** | ⭐⭐ | ⭐⭐⭐ |
| **4.1 Min-heap vs max-heap** | ⭐⭐⭐⭐⭐ | ⭐⭐⭐⭐ |
| **4.2 Repeated best-candidate extraction** | ⭐⭐⭐⭐⭐ | ⭐⭐⭐⭐⭐ |
| **4.3 Heap in Dijkstra** | ⭐⭐⭐⭐⭐ | ⭐⭐⭐⭐⭐ |
| **4.4 Heap in scheduling / greedy** | ⭐⭐⭐⭐ | ⭐⭐⭐⭐⭐ |
| **4.5 K-th / merge / best-first generation awareness** | ⭐⭐ | ⭐⭐⭐⭐ |
| **5.1 Frequency array** | ⭐⭐⭐⭐ | ⭐⭐⭐ |
| **5.2 map / unordered_map** | ⭐⭐⭐⭐ | ⭐⭐⭐ |
| **5.3 Maintaining distinct counts** | ⭐⭐⭐ | ⭐⭐⭐ |
| **5.4 Presence / visited / count maps** | ⭐⭐⭐⭐ | ⭐⭐⭐ |
| **5.5 Compression + frequency structure combination** | ⭐⭐⭐ | ⭐⭐⭐⭐ |
| **6.1 Parent representation** | ⭐⭐⭐⭐ | ⭐⭐⭐ |
| **6.2 Find** | ⭐⭐⭐⭐ | ⭐⭐⭐ |
| **6.3 Union / merge** | ⭐⭐⭐⭐ | ⭐⭐⭐ |
| **6.4 Path compression** | ⭐⭐⭐⭐ | ⭐⭐⭐ |
| **6.5 Union by size / rank** | ⭐⭐⭐ | ⭐⭐⭐ |
| **6.6 Component maintenance thinking** | ⭐⭐⭐⭐ | ⭐⭐⭐ |
| **7.1 Why BIT exists** | ⭐⭐⭐⭐ | ⭐⭐⭐⭐ |
| **7.2 Point update + prefix query** | ⭐⭐⭐⭐ | ⭐⭐⭐⭐⭐ |
| **7.3 Range sum by prefix subtraction** | ⭐⭐⭐⭐ | ⭐⭐⭐⭐ |
| **7.4 Coordinate compression + BIT** | ⭐⭐⭐ | ⭐⭐⭐⭐⭐ |
| **7.5 BIT for counting / inversion / order-style tasks awareness** | ⭐⭐ | ⭐⭐⭐⭐ |
| **8.1 Why segment tree exists** | ⭐⭐⭐ | ⭐⭐⭐⭐⭐ |
| **8.2 Node meaning** | ⭐⭐⭐ | ⭐⭐⭐⭐⭐ |
| **8.3 Build** | ⭐⭐⭐ | ⭐⭐⭐⭐ |
| **8.4 Point update** | ⭐⭐⭐ | ⭐⭐⭐⭐⭐ |
| **8.5 Range query** | ⭐⭐⭐ | ⭐⭐⭐⭐⭐ |
| **8.6 Sum / min / max segment tree** | ⭐⭐⭐ | ⭐⭐⭐⭐⭐ |
| **8.7 When segtree beats prefix / BIT** | ⭐⭐⭐⭐ | ⭐⭐⭐⭐⭐ |
| **8.8 Lazy propagation awareness** | ⭐ | ⭐⭐⭐ |
| **9.1 Sort queries by right endpoint / value / time** | ⭐⭐ | ⭐⭐⭐⭐⭐ |
| **9.2 Sweep events and update data structure** | ⭐⭐ | ⭐⭐⭐⭐⭐ |
| **9.3 Answer queries offline with BIT / segtree** | ⭐⭐ | ⭐⭐⭐⭐⭐ |
| **9.4 Interval contribution counting** | ⭐⭐ | ⭐⭐⭐⭐ |
| **9.5 Transforming many online-looking queries into offline process** | ⭐⭐ | ⭐⭐⭐⭐⭐ |
| **10.1 Prefix sum vs BIT vs segment tree** | ⭐⭐⭐⭐⭐ | ⭐⭐⭐⭐⭐ |
| **10.2 map vs unordered_map vs array** | ⭐⭐⭐⭐ | ⭐⭐⭐ |
| **10.3 Heap vs sorted container vs binary search** | ⭐⭐⭐⭐ | ⭐⭐⭐⭐ |
| **10.4 Offline sweep vs online structure** | ⭐⭐⭐ | ⭐⭐⭐⭐⭐ |
| **10.5 “Don’t overbuild” judgment** | ⭐⭐⭐⭐⭐ | ⭐⭐⭐⭐⭐ |

---

# 4. NCKU Study Emphasis 📌

If you need to prioritize inside Data Structures for NCKU, the order should roughly be:

## Tier S — stabilize early
1. **Priority queue / heap**
2. **Fenwick Tree / BIT**
3. **Choosing the right structure**
4. **Frequency structures**
5. **DSU basics**
6. **Basic stack / queue / deque fluency**

## Tier A — strong support / likely high ROI
7. **Segment Tree (point update + range query level)**
8. **Monotonic stack patterns**
9. **Compression + BIT combinations**
10. **Heap in Dijkstra / scheduling**

## Tier B — advanced NCKU pressure points
11. **Offline query / event processing**
12. **BIT for inversion / counting style problems**
13. **K-th / best-first generation awareness**
14. **0-1 BFS deque awareness**
15. **Lazy propagation awareness**

---

# 5. Chapter Boundary Notes 🧱

To keep Data Structures clean, the following topics should **not** be expanded deeply here:

## Move to **Fundamentals.md**
- complexity basics
- prefix sum / difference array foundations
- basic array traversal / simulation
- debugging / implementation discipline

## Move to **Algorithm_Techniques.md**
- binary search on answer
- two pointers
- sliding window
- coordinate compression as a general technique
- sweep / offline as a broader algorithmic pattern
- feasibility-check thinking

## Move to **Graph.md**
- BFS / DFS as graph algorithms
- Dijkstra as shortest path algorithm
- 0-1 BFS in graph context
- state-space shortest path

## Move to **Tree.md**
- Euler tour in full tree-query context
- subtree flattening as a tree technique
- tree-specific segment tree / BIT applications

## Move to **DP.md**
- monotonic-structure-assisted DP
- DP transitions accelerated by DS
- counting / optimization problems that merely *use* a data structure

So Data Structures should stay focused on:
- **container behavior**
- **dynamic maintenance / query structures**
- **connectivity structures**
- **range query structures**
- **offline query support structures**
- **meta-skill of choosing the right structure**

---
