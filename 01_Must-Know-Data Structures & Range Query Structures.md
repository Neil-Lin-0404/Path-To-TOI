# Data_Structure

## 1. Linear Container Foundations
### 1.1 Stack mental model and LIFO behavior
### 1.2 Queue mental model and FIFO behavior
### 1.3 Deque mental model and double-ended operations
### 1.4 Choosing between stack, queue, deque, vector, and array
### 1.5 Amortized push / pop intuition for standard containers

## 2. Stack
### 2.1 Basic stack operations
### 2.2 Stack-based state rollback intuition
### 2.3 Parentheses / bracket validation pattern
### 2.4 Expression parsing / operator precedence stack basics
### 2.5 Monotonic stack motivation
### 2.6 Previous greater / smaller element
### 2.7 Next greater / smaller element
### 2.8 Histogram / rectangle-style stack pattern
### 2.9 Stack for linear scan state compression

## 3. Queue
### 3.1 Basic queue operations
### 3.2 Queue for BFS-style layer expansion
### 3.3 Multi-source queue intuition
### 3.4 Queue simulation problems
### 3.5 Maintaining process order with queues

## 4. Deque
### 4.1 Basic deque operations
### 4.2 Deque as both stack and queue
### 4.3 Monotonic deque motivation
### 4.4 Sliding window minimum / maximum
### 4.5 Maintaining candidate states in order
### 4.6 Deque optimization intuition in DP / window problems

## 5. Priority Queue / Heap
### 5.1 Heap mental model
### 5.2 Min-heap vs max-heap
### 5.3 Basic priority queue operations
### 5.4 Repeatedly taking current best candidate
### 5.5 Heap-based scheduling / greedy selection pattern
### 5.6 Top-k maintenance
### 5.7 Lazy deletion intuition
### 5.8 Heap usage in shortest path algorithms
### 5.9 When heap is enough vs when ordered set / segment tree is needed

## 6. Frequency Structures and Value-Tracking Containers
### 6.1 Frequency array vs map vs unordered_map intuition
### 6.2 Presence tracking / visited tracking structures
### 6.3 Counting duplicates and multiplicities
### 6.4 Maintaining distinct count
### 6.5 Basic multiset mental model
### 6.6 Maintaining current minimum / maximum under updates
### 6.7 Coordinate compression as DS preparation

## 7. Ordered Set / Map Foundations
### 7.1 Ordered set mental model
### 7.2 Ordered map mental model
### 7.3 lower_bound / upper_bound on ordered containers
### 7.4 predecessor / successor queries
### 7.5 Maintaining sorted dynamic data
### 7.6 Counting / interval reasoning with ordered containers
### 7.7 Multiset for duplicate-aware ordered maintenance
### 7.8 Sweep-line support with ordered containers

## 8. Disjoint Set Union (Union-Find)
### 8.1 Connectivity merging mental model
### 8.2 Parent array representation
### 8.3 Find operation
### 8.4 Union / merge operation
### 8.5 Path compression intuition
### 8.6 Union by size / union by rank
### 8.7 Connected component maintenance
### 8.8 Detecting whether two nodes are in the same component
### 8.9 DSU for offline merging problems
### 8.10 DSU in Kruskal MST
### 8.11 DSU with component metadata basics

## 9. Fenwick Tree (Binary Indexed Tree)
### 9.1 Why Fenwick tree exists
### 9.2 Prefix-sum maintenance mental model
### 9.3 Lowbit intuition
### 9.4 Point update + prefix query
### 9.5 Range sum via prefix subtraction
### 9.6 Point query + range update variant intuition
### 9.7 Coordinate compression + Fenwick tree
### 9.8 Inversion counting with Fenwick tree
### 9.9 Frequency / order-statistics style Fenwick usage
### 9.10 Fenwick tree limitations

## 10. Segment Tree Foundations
### 10.1 Why segment tree exists
### 10.2 Range partition mental model
### 10.3 Segment tree node meaning
### 10.4 Building a segment tree
### 10.5 Point update
### 10.6 Range query
### 10.7 Segment tree for sum / min / max / gcd
### 10.8 Recursive vs iterative segment tree awareness
### 10.9 Merge function design intuition
### 10.10 When segment tree is overkill

## 11. Lazy Propagation Segment Tree
### 11.1 Why ordinary segment tree is not enough for some range updates
### 11.2 Lazy tag mental model
### 11.3 Range update + range query
### 11.4 Push / pull discipline
### 11.5 Correctness pitfalls in lazy propagation
### 11.6 Common lazy segment tree patterns

## 12. Sparse Table
### 12.1 Static range query mental model
### 12.2 Idempotent query requirement intuition
### 12.3 Sparse table preprocessing
### 12.4 RMQ with sparse table
### 12.5 min / max / gcd style queries
### 12.6 When sparse table beats segment tree
### 12.7 Sparse table limitations

## 13. Trie
### 13.1 Prefix tree mental model
### 13.2 Trie node structure
### 13.3 Insert / search / prefix query
### 13.4 Counting words / prefixes
### 13.5 Binary trie intuition for XOR problems
### 13.6 Trie memory tradeoff awareness

## 14. Hash-Based Structures
### 14.1 Hash table mental model
### 14.2 unordered_set / unordered_map use cases
### 14.3 Average-case O(1) intuition and collision caveat
### 14.4 Frequency counting with hashing
### 14.5 Hash set for fast existence queries
### 14.6 When hashing is preferable to ordered containers
### 14.7 When hashing is dangerous in contest settings

## 15. Range Query Structure Comparison Layer
### 15.1 Prefix sum vs Fenwick tree
### 15.2 Fenwick tree vs segment tree
### 15.3 Segment tree vs sparse table
### 15.4 Ordered set vs heap
### 15.5 Queue / deque / monotonic deque distinction
### 15.6 Frequency array vs map vs unordered_map
### 15.7 Static query vs dynamic update classification
### 15.8 Point update vs range update vs range query classification

## 16. Data Structure Pattern Recognition
### 16.1 “Need fast repeated range sum queries” pattern
### 16.2 “Need dynamic minimum / maximum under updates” pattern
### 16.3 “Need next greater / smaller element” pattern
### 16.4 “Need sliding window extrema” pattern
### 16.5 “Need to merge connected components” pattern
### 16.6 “Need current best candidate repeatedly” pattern
### 16.7 “Need maintain sorted dynamic set” pattern
### 16.8 “Need frequency of values with online updates” pattern
### 16.9 “Need static RMQ with many queries” pattern

## 17. Data Structure Implementation Discipline
### 17.1 Choosing correct indexing convention in tree-like DS
### 17.2 Avoiding off-by-one in range query structures
### 17.3 Understanding inclusive vs half-open intervals
### 17.4 Memory sizing for large data structures
### 17.5 Reset / rebuild discipline between test cases
### 17.6 Template extraction and reusable DS code
### 17.7 Debugging DS invariants
### 17.8 Stress-testing a data structure with brute force checker
