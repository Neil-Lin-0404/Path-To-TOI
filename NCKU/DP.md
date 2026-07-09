# DP.md

> Scope: **NCKU-oriented Competitive Programming Dynamic Programming Roadmap**
>
> Purpose:
> Define **what you need to learn in DP for NCKU**, how the chapter is structured, and which parts matter most.

---

# 1. Chapter Role 🎯

This chapter is about **solving problems with overlapping subproblems by defining states and transitions**.

DP is one of the biggest NCKU battlefields because many contest problems are not just:
- brute force
- graph traversal
- simple greedy

Instead, they ask you to optimize or count under constraints where:
- many subproblems repeat
- local greedy choice is not enough
- the answer depends on previous decisions / partial states
- naive recursion or enumeration is too slow

DP is also one of the most important “separating” topics between:
- **basic contest solving**
- and **serious contest strength**

For NCKU, DP should not stop at “I know Fibonacci DP.”  
You need a contest-oriented DP toolkit that includes:

- **state design**
- **transition design**
- **1D / 2D DP**
- **knapsack family**
- **sequence / subsequence DP**
- **counting DP**
- **small-state / bitmask DP awareness**
- **transition compression / repeated transition awareness**
- **DP debugging discipline**

So the goal here is:

> **Build enough DP depth to solve standard NCKU DP problems confidently, and enough advanced awareness to survive harder deciding-round DP tasks.**

---

# 2. Master Index 🧭

# 1. DP Foundations
## 1.1 What DP actually is
## 1.2 Overlapping subproblems
## 1.3 State / transition / base case
## 1.4 Memoization vs tabulation
## 1.5 Top-down vs bottom-up thinking

# 2. Basic 1D DP
## 2.1 Best answer up to i
## 2.2 Count ways up to i
## 2.3 Min-cost / max-value DP
## 2.4 Choose / skip style transitions
## 2.5 Prefix-style DP mental model

# 3. Basic 2D DP
## 3.1 Grid DP
## 3.2 Sequence DP table mental model
## 3.3 Two-parameter state design
## 3.4 Boundary initialization
## 3.5 Transition ordering discipline

# 4. Knapsack Family
## 4.1 0/1 knapsack
## 4.2 Complete knapsack
## 4.3 Loop-order correctness
## 4.4 Value-oriented vs weight-oriented thinking
## 4.5 Bounded knapsack awareness

# 5. Sequence / Subsequence DP
## 5.1 LIS basics
## 5.2 Longest / count / optimization sequence DP
## 5.3 Alternating / constrained subsequence DP
## 5.4 Prefix-aggregate assisted transitions
## 5.5 Data-structure-assisted sequence DP awareness

# 6. State Design and Transition Design
## 6.1 What information a state must remember
## 6.2 Deriving transition from the last decision
## 6.3 Removing unnecessary dimensions
## 6.4 Forward DP vs backward DP
## 6.5 Transition proof discipline

# 7. Counting DP
## 7.1 Count valid configurations
## 7.2 Count paths / sequences / assignments
## 7.3 Avoiding double counting
## 7.4 Mod arithmetic in counting DP
## 7.5 Prefix-sum optimization inside counting DP awareness

# 8. Small-State / Bitmask DP Awareness
## 8.1 DP with small number of states
## 8.2 DP on mask when k is small
## 8.3 State compression basics
## 8.4 Transition over small-state space
## 8.5 Distinguishing DP-on-mask from graph-on-mask

# 9. Transition Compression / Segment Transition Awareness
## 9.1 Repeated identical transition blocks
## 9.2 Sparse forced positions + huge empty gaps
## 9.3 Transition over “gaps” instead of every index
## 9.4 Composing transitions
## 9.5 Long-length DP with compressed structure awareness

# 10. Matrix-Transition Awareness
## 10.1 DP transition as linear transformation
## 10.2 Repeating the same transition many times
## 10.3 Matrix exponentiation as repeated transition acceleration
## 10.4 Small-state transition matrix mental model
## 10.5 When matrix transition is actually worth using

# 11. DP Debugging Discipline
## 11.1 Impossible-state initialization
## 11.2 Base case sanity
## 11.3 Loop-order bugs
## 11.4 Tiny-case brute-force validation
## 11.5 State meaning audit

# 12. DP Problem Modeling and Technique Selection
## 12.1 Recognizing when greedy fails and DP is needed
## 12.2 Distinguishing DP vs graph shortest path vs brute force search
## 12.3 Recognizing sequence DP vs knapsack DP vs state-compression DP
## 12.4 Recognizing when preprocessing / data structure can support DP
## 12.5 Choosing the simplest sufficient DP formulation

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
| **1. DP Foundations** | ⭐⭐⭐⭐⭐ | ⭐⭐⭐⭐⭐ | Absolutely mandatory base layer |
| **2. Basic 1D DP** | ⭐⭐⭐⭐⭐ | ⭐⭐⭐⭐ | One of the most common DP forms |
| **3. Basic 2D DP** | ⭐⭐⭐⭐⭐ | ⭐⭐⭐⭐ | Very common in grids / pair-state transitions |
| **4. Knapsack Family** | ⭐⭐⭐⭐⭐ | ⭐⭐⭐⭐ | Must know for NCKU-style DP training |
| **5. Sequence / Subsequence DP** | ⭐⭐⭐⭐ | ⭐⭐⭐⭐⭐ | High-value contest family |
| **6. State Design and Transition Design** | ⭐⭐⭐⭐⭐ | ⭐⭐⭐⭐⭐ | One of the most important skills in the entire chapter |
| **7. Counting DP** | ⭐⭐⭐⭐ | ⭐⭐⭐⭐⭐ | Important for harder contest DP problems |
| **8. Small-State / Bitmask DP Awareness** | ⭐⭐ | ⭐⭐⭐⭐ | Advanced but relevant once state size is small |
| **9. Transition Compression / Segment Transition Awareness** | ⭐⭐ | ⭐⭐⭐⭐ | Useful for harder DP problems with repeated structure |
| **10. Matrix-Transition Awareness** | ⭐ | ⭐⭐⭐⭐ | Not first-wave, but valuable for stronger NCKU/IOI-style repeated transitions |
| **11. DP Debugging Discipline** | ⭐⭐⭐⭐⭐ | ⭐⭐⭐⭐⭐ | Critical for actually converting DP ideas into accepted solutions |
| **12. DP Problem Modeling and Technique Selection** | ⭐⭐⭐⭐⭐ | ⭐⭐⭐⭐⭐ | The meta-skill that often determines whether you can even start the problem |

---

## 3.2 Node-Level Priority

| Concept | NCKU Core | NCKU Advanced |
|---|---:|---:|
| **1.1 What DP actually is** | ⭐⭐⭐⭐⭐ | ⭐⭐⭐⭐⭐ |
| **1.2 Overlapping subproblems** | ⭐⭐⭐⭐⭐ | ⭐⭐⭐⭐⭐ |
| **1.3 State / transition / base case** | ⭐⭐⭐⭐⭐ | ⭐⭐⭐⭐⭐ |
| **1.4 Memoization vs tabulation** | ⭐⭐⭐⭐ | ⭐⭐⭐⭐ |
| **1.5 Top-down vs bottom-up thinking** | ⭐⭐⭐⭐ | ⭐⭐⭐⭐ |
| **2.1 Best answer up to i** | ⭐⭐⭐⭐⭐ | ⭐⭐⭐⭐ |
| **2.2 Count ways up to i** | ⭐⭐⭐⭐⭐ | ⭐⭐⭐⭐ |
| **2.3 Min-cost / max-value DP** | ⭐⭐⭐⭐⭐ | ⭐⭐⭐⭐ |
| **2.4 Choose / skip style transitions** | ⭐⭐⭐⭐⭐ | ⭐⭐⭐⭐ |
| **2.5 Prefix-style DP mental model** | ⭐⭐⭐⭐ | ⭐⭐⭐⭐ |
| **3.1 Grid DP** | ⭐⭐⭐⭐⭐ | ⭐⭐⭐⭐ |
| **3.2 Sequence DP table mental model** | ⭐⭐⭐⭐ | ⭐⭐⭐⭐ |
| **3.3 Two-parameter state design** | ⭐⭐⭐⭐ | ⭐⭐⭐⭐⭐ |
| **3.4 Boundary initialization** | ⭐⭐⭐⭐⭐ | ⭐⭐⭐⭐⭐ |
| **3.5 Transition ordering discipline** | ⭐⭐⭐⭐⭐ | ⭐⭐⭐⭐⭐ |
| **4.1 0/1 knapsack** | ⭐⭐⭐⭐⭐ | ⭐⭐⭐⭐ |
| **4.2 Complete knapsack** | ⭐⭐⭐⭐ | ⭐⭐⭐⭐ |
| **4.3 Loop-order correctness** | ⭐⭐⭐⭐⭐ | ⭐⭐⭐⭐⭐ |
| **4.4 Value-oriented vs weight-oriented thinking** | ⭐⭐⭐⭐ | ⭐⭐⭐⭐ |
| **4.5 Bounded knapsack awareness** | ⭐⭐ | ⭐⭐⭐ |
| **5.1 LIS basics** | ⭐⭐⭐⭐ | ⭐⭐⭐⭐ |
| **5.2 Longest / count / optimization sequence DP** | ⭐⭐⭐⭐ | ⭐⭐⭐⭐⭐ |
| **5.3 Alternating / constrained subsequence DP** | ⭐⭐⭐ | ⭐⭐⭐⭐ |
| **5.4 Prefix-aggregate assisted transitions** | ⭐⭐⭐ | ⭐⭐⭐⭐ |
| **5.5 Data-structure-assisted sequence DP awareness** | ⭐⭐ | ⭐⭐⭐ |
| **6.1 What information a state must remember** | ⭐⭐⭐⭐⭐ | ⭐⭐⭐⭐⭐ |
| **6.2 Deriving transition from the last decision** | ⭐⭐⭐⭐⭐ | ⭐⭐⭐⭐⭐ |
| **6.3 Removing unnecessary dimensions** | ⭐⭐⭐⭐⭐ | ⭐⭐⭐⭐⭐ |
| **6.4 Forward DP vs backward DP** | ⭐⭐⭐⭐ | ⭐⭐⭐⭐ |
| **6.5 Transition proof discipline** | ⭐⭐⭐⭐ | ⭐⭐⭐⭐⭐ |
| **7.1 Count valid configurations** | ⭐⭐⭐⭐ | ⭐⭐⭐⭐⭐ |
| **7.2 Count paths / sequences / assignments** | ⭐⭐⭐⭐ | ⭐⭐⭐⭐⭐ |
| **7.3 Avoiding double counting** | ⭐⭐⭐⭐ | ⭐⭐⭐⭐⭐ |
| **7.4 Mod arithmetic in counting DP** | ⭐⭐⭐⭐ | ⭐⭐⭐⭐ |
| **7.5 Prefix-sum optimization inside counting DP awareness** | ⭐⭐ | ⭐⭐⭐⭐ |
| **8.1 DP with small number of states** | ⭐⭐ | ⭐⭐⭐⭐ |
| **8.2 DP on mask when k is small** | ⭐⭐ | ⭐⭐⭐⭐ |
| **8.3 State compression basics** | ⭐⭐ | ⭐⭐⭐⭐ |
| **8.4 Transition over small-state space** | ⭐⭐ | ⭐⭐⭐⭐ |
| **8.5 Distinguishing DP-on-mask from graph-on-mask** | ⭐⭐ | ⭐⭐⭐⭐ |
| **9.1 Repeated identical transition blocks** | ⭐⭐ | ⭐⭐⭐⭐ |
| **9.2 Sparse forced positions + huge empty gaps** | ⭐⭐ | ⭐⭐⭐⭐ |
| **9.3 Transition over “gaps” instead of every index** | ⭐⭐ | ⭐⭐⭐⭐ |
| **9.4 Composing transitions** | ⭐⭐ | ⭐⭐⭐⭐ |
| **9.5 Long-length DP with compressed structure awareness** | ⭐⭐ | ⭐⭐⭐⭐ |
| **10.1 DP transition as linear transformation** | ⭐ | ⭐⭐⭐⭐ |
| **10.2 Repeating the same transition many times** | ⭐ | ⭐⭐⭐⭐ |
| **10.3 Matrix exponentiation as repeated transition acceleration** | ⭐ | ⭐⭐⭐⭐ |
| **10.4 Small-state transition matrix mental model** | ⭐ | ⭐⭐⭐ |
| **10.5 When matrix transition is actually worth using** | ⭐ | ⭐⭐⭐⭐ |
| **11.1 Impossible-state initialization** | ⭐⭐⭐⭐⭐ | ⭐⭐⭐⭐⭐ |
| **11.2 Base case sanity** | ⭐⭐⭐⭐⭐ | ⭐⭐⭐⭐⭐ |
| **11.3 Loop-order bugs** | ⭐⭐⭐⭐⭐ | ⭐⭐⭐⭐⭐ |
| **11.4 Tiny-case brute-force validation** | ⭐⭐⭐⭐⭐ | ⭐⭐⭐⭐⭐ |
| **11.5 State meaning audit** | ⭐⭐⭐⭐⭐ | ⭐⭐⭐⭐⭐ |
| **12.1 Recognizing when greedy fails and DP is needed** | ⭐⭐⭐⭐⭐ | ⭐⭐⭐⭐⭐ |
| **12.2 Distinguishing DP vs graph shortest path vs brute force search** | ⭐⭐⭐⭐⭐ | ⭐⭐⭐⭐⭐ |
| **12.3 Recognizing sequence DP vs knapsack DP vs state-compression DP** | ⭐⭐⭐⭐⭐ | ⭐⭐⭐⭐⭐ |
| **12.4 Recognizing when preprocessing / data structure can support DP** | ⭐⭐⭐⭐ | ⭐⭐⭐⭐⭐ |
| **12.5 Choosing the simplest sufficient DP formulation** | ⭐⭐⭐⭐⭐ | ⭐⭐⭐⭐⭐ |

---

# 4. NCKU Study Emphasis 📌

If you need to prioritize inside DP for NCKU, the order should roughly be:

## Tier S — stabilize early
1. **DP foundations**
2. **Basic 1D DP**
3. **Basic 2D DP**
4. **Knapsack family**
5. **State design and transition design**
6. **DP debugging discipline**
7. **DP problem modeling / technique selection**

## Tier A — strong support / likely high ROI
8. **Sequence / subsequence DP**
9. **Counting DP**
10. **Recognizing when DP is actually the right paradigm**
11. **Loop-order correctness and state-dimension reduction**
12. **Prefix / preprocessing support for DP**

## Tier B — advanced NCKU pressure points
13. **Small-state / bitmask DP awareness**
14. **Transition compression / segment-transition awareness**
15. **Counting DP with stronger optimization**
16. **Matrix-transition awareness**
17. **DP + DS / DP + graph hybrid awareness**

---

# 5. Chapter Boundary Notes 🧱

To keep DP clean, the following topics should **not** be expanded deeply here:

## Move to **Fundamentals.md**
- Big-O basics
- array traversal / prefix basics
- brute-force foundations
- implementation discipline
- overflow / indexing basics

## Move to **Data_Structures.md**
- Fenwick Tree / BIT itself
- Segment Tree itself
- heap / priority queue itself
- DSU
- monotonic stack / offline DS patterns

## Move to **Algorithm_Techniques.md**
- binary search on answer
- coordinate compression
- sweep / offline event processing
- two pointers / sliding window
- monotonicity / feasibility framework

## Move to **Graph.md**
- BFS / DFS
- Dijkstra / shortest path
- state-space graph modeling
- DAG traversal as a graph technique

## Move to **Tree.md**
- tree DP in tree-specific context
- subtree aggregation
- rerooting preview in tree context
- Euler tour / tree flattening

So DP should stay focused on:
- **DP foundations**
- **state / transition design**
- **classic DP families**
- **counting / compressed-state awareness**
- **DP debugging**
- **DP modeling / DP technique selection**

---
