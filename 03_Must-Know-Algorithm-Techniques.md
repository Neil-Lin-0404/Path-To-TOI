# Algorithm_Techniques

## 1. Two Pointers Foundations ★★★★★
### 1.1 Why two pointers exist ★★★★★
### 1.2 Opposite-direction two pointers mental model ★★★★★
### 1.3 Same-direction two pointers mental model ★★★★★
### 1.4 Sorted-array pair searching ★★★★☆
### 1.5 Maintaining a valid interval while moving pointers ★★★★★
### 1.6 Expanding / shrinking window intuition ★★★★★
### 1.7 When two pointers is valid and when it is not ★★★★★

## 2. Sliding Window ★★★★★
### 2.1 Fixed-size sliding window ★★★★☆
### 2.2 Variable-size sliding window ★★★★★
### 2.3 Window sum / average / count maintenance ★★★★★
### 2.4 Maintaining frequency information inside a window ★★★★☆
### 2.5 Distinct-element window problems ★★★★☆
### 2.6 Longest / shortest valid subarray window pattern ★★★★★
### 2.7 When sliding window beats brute-force subarray scanning ★★★★★
### 2.8 Sliding window pitfalls with non-monotone conditions ★★★★★

## 3. Binary Search ★★★★★
### 3.1 Why binary search exists ★★★★★
### 3.2 Classic binary search on sorted arrays ★★★★★
### 3.3 lower_bound / upper_bound mental model ★★★★★
### 3.4 First true / last true template ★★★★★
### 3.5 Boundary design and invariant maintenance ★★★★★
### 3.6 Binary search on integer answer space ★★★★★
### 3.7 Binary search on real values awareness ★★☆☆☆
### 3.8 Recognizing monotonicity ★★★★★
### 3.9 When binary search is invalid ★★★★★

## 4. Binary Search on Answer ★★★★★
### 4.1 Feasibility-check mental model ★★★★★
### 4.2 Turning optimization into decision problems ★★★★★
### 4.3 Designing a monotone predicate ★★★★★
### 4.4 Minimum feasible value pattern ★★★★★
### 4.5 Maximum feasible value pattern ★★★★★
### 4.6 Binary search + greedy check ★★★★★
### 4.7 Binary search + prefix / graph / DP check awareness ★★★★☆
### 4.8 Constraint patterns that hint answer search ★★★★★

## 5. Sweep Line and Event Processing ★★☆☆☆
### 5.1 Why sweep line exists ★★☆☆☆
### 5.2 Sorting events by position / time ★★☆☆☆
### 5.3 Enter / leave event mental model ★★☆☆☆
### 5.4 Maintaining active intervals / objects ★★☆☆☆
### 5.5 Counting overlaps with sweep line ★★☆☆☆
### 5.6 Line sweep with difference array intuition ★★☆☆☆
### 5.7 Sweep line with ordered set / multiset support ★★☆☆☆
### 5.8 Coordinate compression for sweep line ★★☆☆☆
### 5.9 Tie-breaking and event ordering pitfalls ★★☆☆☆

## 6. Coordinate Compression ★★★★☆
### 6.1 Why coordinate compression exists ★★★★☆
### 6.2 Mapping large values to dense indices ★★★★☆
### 6.3 Preserving order under compression ★★★★☆
### 6.4 Compression for Fenwick / segment tree ★★★☆☆
### 6.5 Compression for sweep-line / interval problems ★★☆☆☆
### 6.6 Duplicate handling in compression ★★★★☆
### 6.7 When compression is unnecessary or dangerous ★★★☆☆

## 7. Prefix-Suffix Technique Layer ★★★★☆
### 7.1 Prefix / suffix decomposition mental model ★★★★☆
### 7.2 Prefix best / suffix best arrays ★★★★☆
### 7.3 Combining left contribution and right contribution ★★★★☆
### 7.4 Removing one element / one segment style preprocessing ★★★☆☆
### 7.5 Prefix-suffix trick in optimization problems ★★★☆☆
### 7.6 Prefix / suffix precomputation vs repeated recomputation ★★★★☆

## 8. Offline Query Processing ★★☆☆☆
### 8.1 Online vs offline problem distinction ★★☆☆☆
### 8.2 Why offline processing can simplify problems ★★☆☆☆
### 8.3 Sorting queries and processing in a chosen order ★★☆☆☆
### 8.4 Offline prefix / Fenwick / sweep style query handling ★★☆☆☆
### 8.5 Offline connectivity / DSU style query handling awareness ★★☆☆☆
### 8.6 Reordering constraints safely ★★☆☆☆
### 8.7 When offline processing is not allowed ★★☆☆☆

## 9. Difference and Imos-Style Range Marking ★★★★☆
### 9.1 Why repeated range updates are expensive naively ★★★★☆
### 9.2 1D difference array as a technique ★★★★☆
### 9.3 2D difference / rectangle marking awareness ★★☆☆☆
### 9.4 Reconstructing final values by prefix accumulation ★★★★☆
### 9.5 Offline range contribution accumulation ★★★☆☆
### 9.6 Difference technique vs lazy range structure distinction ★★★☆☆

## 10. Monotonicity Techniques ★★★★☆
### 10.1 What monotonicity means in CP ★★★★☆
### 10.2 Monotone predicate recognition ★★★★★
### 10.3 Monotone queue / stack connection ★★★☆☆
### 10.4 Monotonicity in binary search on answer ★★★★★
### 10.5 Monotonicity in DP optimization awareness ★★☆☆☆
### 10.6 When a condition looks monotone but actually is not ★★★★★

## 11. Meet in the Middle ★★☆☆☆
## 12. Bitmask Enumeration Techniques ★★☆☆☆
## 13. State Compression and Encoding ★★☆☆☆
## 14. Search-Space Pruning Techniques ★★☆☆☆
## 15. Small-to-Large Merging ★☆☆☆☆
## 16. Divide-and-Conquer as a Technique Layer ★★★☆☆
### 16.1 Splitting a problem into halves operationally ★★★☆☆
### 16.2 Merge sort style divide-and-conquer ★★★☆☆
### 16.3 Counting inversions via divide-and-conquer ★★★☆☆
### 16.4 Closest-pair / geometric divide-and-conquer awareness ★☆☆☆☆
### 16.5 Divide-and-conquer over answer space awareness ★★☆☆☆
### 16.6 When divide-and-conquer is a technique rather than a paradigm chapter topic ★★★☆☆

## 17. Mo's Algorithm ★☆☆☆☆
## 18. Sqrt Decomposition ★☆☆☆☆
## 19. Randomized / Probabilistic Technique Awareness ★☆☆☆☆

## 20. Technique Composition Layer ★★★★☆
### 20.1 Binary search + greedy ★★★★★
### 20.2 Binary search + prefix sum ★★★★☆
### 20.3 Binary search + graph / shortest path check awareness ★★★☆☆
### 20.4 Sweep line + coordinate compression ★★☆☆☆
### 20.5 Offline processing + Fenwick / segment tree ★★☆☆☆
### 20.6 Euler tour + range-query structure awareness ★★☆☆☆
### 20.7 Sliding window + monotonic deque ★★★☆☆
### 20.8 Meet-in-the-middle + hashing / sorting / binary search ★★☆☆☆

## 21. Technique Selection and Recognition ★★★★★
## 22. Technique Comparison Layer ★★★★★
## 23. Technique Implementation Discipline ★★★★★
