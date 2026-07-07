# Algorithm_Techniques

## 1. Two Pointers Foundations
### 1.1 Why two pointers exist
### 1.2 Opposite-direction two pointers mental model
### 1.3 Same-direction two pointers mental model
### 1.4 Sorted-array pair searching
### 1.5 Maintaining a valid interval while moving pointers
### 1.6 Expanding / shrinking window intuition
### 1.7 When two pointers is valid and when it is not

## 2. Sliding Window
### 2.1 Fixed-size sliding window
### 2.2 Variable-size sliding window
### 2.3 Window sum / average / count maintenance
### 2.4 Maintaining frequency information inside a window
### 2.5 Distinct-element window problems
### 2.6 Longest / shortest valid subarray window pattern
### 2.7 When sliding window beats brute-force subarray scanning
### 2.8 Sliding window pitfalls with non-monotone conditions

## 3. Binary Search
### 3.1 Why binary search exists
### 3.2 Classic binary search on sorted arrays
### 3.3 lower_bound / upper_bound mental model
### 3.4 First true / last true template
### 3.5 Boundary design and invariant maintenance
### 3.6 Binary search on integer answer space
### 3.7 Binary search on real values awareness
### 3.8 Recognizing monotonicity
### 3.9 When binary search is invalid

## 4. Binary Search on Answer
### 4.1 Feasibility-check mental model
### 4.2 Turning optimization into decision problems
### 4.3 Designing a monotone predicate
### 4.4 Minimum feasible value pattern
### 4.5 Maximum feasible value pattern
### 4.6 Binary search + greedy check
### 4.7 Binary search + prefix / graph / DP check awareness
### 4.8 Constraint patterns that hint answer search

## 5. Sweep Line and Event Processing
### 5.1 Why sweep line exists
### 5.2 Sorting events by position / time
### 5.3 Enter / leave event mental model
### 5.4 Maintaining active intervals / objects
### 5.5 Counting overlaps with sweep line
### 5.6 Line sweep with difference array intuition
### 5.7 Sweep line with ordered set / multiset support
### 5.8 Coordinate compression for sweep line
### 5.9 Tie-breaking and event ordering pitfalls

## 6. Coordinate Compression
### 6.1 Why coordinate compression exists
### 6.2 Mapping large values to dense indices
### 6.3 Preserving order under compression
### 6.4 Compression for Fenwick / segment tree
### 6.5 Compression for sweep-line / interval problems
### 6.6 Duplicate handling in compression
### 6.7 When compression is unnecessary or dangerous

## 7. Prefix-Suffix Technique Layer
### 7.1 Prefix / suffix decomposition mental model
### 7.2 Prefix best / suffix best arrays
### 7.3 Combining left contribution and right contribution
### 7.4 Removing one element / one segment style preprocessing
### 7.5 Prefix-suffix trick in optimization problems
### 7.6 Prefix / suffix precomputation vs repeated recomputation

## 8. Offline Query Processing
### 8.1 Online vs offline problem distinction
### 8.2 Why offline processing can simplify problems
### 8.3 Sorting queries and processing in a chosen order
### 8.4 Offline prefix / Fenwick / sweep style query handling
### 8.5 Offline connectivity / DSU style query handling awareness
### 8.6 Reordering constraints safely
### 8.7 When offline processing is not allowed

## 9. Difference and Imos-Style Range Marking
### 9.1 Why repeated range updates are expensive naively
### 9.2 1D difference array as a technique
### 9.3 2D difference / rectangle marking awareness
### 9.4 Reconstructing final values by prefix accumulation
### 9.5 Offline range contribution accumulation
### 9.6 Difference technique vs lazy range structure distinction

## 10. Monotonicity Techniques
### 10.1 What monotonicity means in CP
### 10.2 Monotone predicate recognition
### 10.3 Monotone queue / stack connection
### 10.4 Monotonicity in binary search on answer
### 10.5 Monotonicity in DP optimization awareness
### 10.6 When a condition looks monotone but actually is not

## 11. Meet in the Middle
### 11.1 Why brute force can be split in half
### 11.2 Splitting state space into two parts
### 11.3 Enumerating subset sums / states on each side
### 11.4 Combining left and right halves efficiently
### 11.5 Sorting / binary search / hash combination in MITM
### 11.6 Constraint patterns that suggest MITM
### 11.7 MITM vs bitmask brute force distinction

## 12. Bitmask Enumeration Techniques
### 12.1 Representing subsets with bitmasks
### 12.2 Enumerating all subsets
### 12.3 Enumerating submasks
### 12.4 Enumerating supersets awareness
### 12.5 Bitmask state compression in small-n problems
### 12.6 Bit tricks that support enumeration
### 12.7 When subset enumeration is feasible

## 13. State Compression and Encoding
### 13.1 Why encode multi-part state into one object
### 13.2 Bitmask state encoding
### 13.3 Pair / tuple / integer encoding of states
### 13.4 Compressing board / set / resource states
### 13.5 State encoding for BFS / DP / brute force
### 13.6 Tradeoff between compact state and readability

## 14. Search-Space Pruning Techniques
### 14.1 Why pruning matters
### 14.2 Bounding impossible branches early
### 14.3 Ordering choices to prune faster
### 14.4 Duplicate-state pruning awareness
### 14.5 Feasibility pruning vs optimality pruning
### 14.6 Pruning in subset / permutation / placement problems
### 14.7 When pruning is too weak to matter

## 15. Small-to-Large Merging
### 15.1 Why repeated merging can be too slow
### 15.2 Merge smaller structure into larger structure intuition
### 15.3 Complexity intuition of small-to-large
### 15.4 Frequency map / set merging pattern
### 15.5 Tree-subtree aggregation connection
### 15.6 When small-to-large is the right tool

## 16. Divide-and-Conquer as a Technique Layer
### 16.1 Splitting a problem into halves operationally
### 16.2 Merge sort style divide-and-conquer
### 16.3 Counting inversions via divide-and-conquer
### 16.4 Closest-pair / geometric divide-and-conquer awareness
### 16.5 Divide-and-conquer over answer space awareness
### 16.6 When divide-and-conquer is a technique rather than a paradigm chapter topic

## 17. Mo's Algorithm
### 17.1 Why some offline range queries are hard online
### 17.2 Reordering queries to minimize pointer movement
### 17.3 Block decomposition intuition
### 17.4 Maintaining add / remove operations on current range
### 17.5 Query ordering and complexity intuition
### 17.6 Typical frequency / distinct / mode-style Mo problems
### 17.7 Mo’s algorithm limitations

## 18. Sqrt Decomposition
### 18.1 Why block decomposition exists
### 18.2 Partitioning array into blocks
### 18.3 Querying with full blocks + partial blocks
### 18.4 Point updates under block decomposition
### 18.5 Range update / query variants awareness
### 18.6 Sqrt decomposition vs segment tree tradeoff

## 19. Randomized / Probabilistic Technique Awareness
### 19.1 Why randomized tricks sometimes help
### 19.2 Random shuffling to avoid worst cases
### 19.3 Randomized hashing awareness
### 19.4 Monte Carlo vs deterministic correctness awareness
### 19.5 When randomized methods are acceptable in contests

## 20. Technique Composition Layer
### 20.1 Binary search + greedy
### 20.2 Binary search + prefix sum
### 20.3 Binary search + graph / shortest path check awareness
### 20.4 Sweep line + coordinate compression
### 20.5 Offline processing + Fenwick / segment tree
### 20.6 Euler tour + range-query structure awareness
### 20.7 Sliding window + monotonic deque
### 20.8 Meet-in-the-middle + hashing / sorting / binary search

## 21. Technique Selection and Recognition
### 21.1 “Need contiguous interval with maintained validity” pattern
### 21.2 “Need first / last feasible value” pattern
### 21.3 “Need answer many interval events over one axis” pattern
### 21.4 “Values are huge but relative order is what matters” pattern
### 21.5 “Queries can be answered after reordering” pattern
### 21.6 “Brute force is close to feasible but not quite” pattern
### 21.7 “Need efficient subset exploration for small n” pattern
### 21.8 “Need maintain aggregate while range endpoints move” pattern

## 22. Technique Comparison Layer
### 22.1 Two pointers vs sliding window
### 22.2 Binary search on sorted data vs binary search on answer
### 22.3 Prefix preprocessing vs sliding window distinction
### 22.4 Sweep line vs difference-array accumulation
### 22.5 Offline processing vs online data structure distinction
### 22.6 Meet-in-the-middle vs brute force vs DP distinction
### 22.7 Sqrt decomposition vs segment tree distinction
### 22.8 Small-to-large merging vs DSU-on-tree awareness

## 23. Technique Implementation Discipline
### 23.1 Designing invariants for pointer movement
### 23.2 Avoiding off-by-one in binary search
### 23.3 Event ordering sanity checks in sweep line
### 23.4 Compression map correctness checks
### 23.5 Offline query reorder safety checks
### 23.6 Brute-force checker for technique validation
### 23.7 Complexity estimation before committing to a technique
### 23.8 Recognizing when a “technique” is overkill for the constraints
