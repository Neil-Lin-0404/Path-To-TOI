# Tree

## 1. Tree Fundamentals ★★★★★
### 1.1 Tree definition and basic properties ★★★★★
### 1.2 Connected acyclic graph intuition ★★★★★
### 1.3 Number of edges in a tree ★★★★☆
### 1.4 Unique simple path property ★★★★☆
### 1.5 Rooted tree vs unrooted tree ★★★★★
### 1.6 Parent / child / sibling relationships ★★★★☆
### 1.7 Leaf / internal node concepts ★★★★☆
### 1.8 Degree and subtree terminology ★★★★☆
### 1.9 Choosing a root and how rooting changes perspective ★★★★★

## 2. Tree Representation ★★★★★
### 2.1 Edge list representation ★★★☆☆
### 2.2 Adjacency list representation ★★★★★
### 2.3 Parent array representation ★★★★★
### 2.4 Children list representation for rooted trees ★★★★☆
### 2.5 Weighted tree representation ★★★☆☆
### 2.6 Indexing and storage conventions for tree nodes ★★★★★

## 3. Basic Tree Traversal ★★★★★
### 3.1 DFS on tree mental model ★★★★★
### 3.2 Recursive DFS traversal ★★★★★
### 3.3 Iterative DFS traversal awareness ★★☆☆☆
### 3.4 BFS on tree mental model ★★★★☆
### 3.5 Level-order traversal ★★★☆☆
### 3.6 Avoiding revisiting parent in undirected tree traversal ★★★★★
### 3.7 Traversal order and what information can be collected during traversal ★★★★★

## 4. Rooted Tree Information ★★★★★
### 4.1 Parent array construction ★★★★★
### 4.2 Depth array ★★★★★
### 4.3 Level concept ★★★★☆
### 4.4 Subtree size computation ★★★★★
### 4.5 Height of a node / subtree ★★★☆☆
### 4.6 Detecting leaves in rooted trees ★★★☆☆
### 4.7 Entry / exit of recursion on a node ★★★★☆
### 4.8 Tree traversal states: before visiting children / after visiting children ★★★★☆

## 5. Euler Tour and Tree Flattening ★★★☆☆
### 5.1 Why flatten a tree into an array ★★★☆☆
### 5.2 DFS entry time (tin) ★★★☆☆
### 5.3 DFS exit time (tout) ★★★☆☆
### 5.4 Euler tour order ★★★☆☆
### 5.5 Subtree-as-interval intuition ★★★☆☆
### 5.6 Flattening subtree values into arrays ★★★☆☆
### 5.7 Using Euler tour to support subtree queries ★★★☆☆
### 5.8 Euler tour variants: single-entry vs full tour awareness ★★☆☆☆

## 6. Tree Distance and Basic Path Concepts ★★★★☆
### 6.1 Distance between two nodes in a tree ★★★★☆
### 6.2 Path as a unique simple route ★★★★☆
### 6.3 Computing path length from depths ★★★★☆
### 6.4 Tree diameter concept ★★★★★
### 6.5 Finding tree diameter with two DFS / BFS ★★★★★
### 6.6 Tree center intuition ★★☆☆☆
### 6.7 Longest path in a tree basics ★★★★☆

## 7. Lowest Common Ancestor (LCA) ★★★☆☆
### 7.1 Ancestor and descendant concepts ★★★★☆
### 7.2 Lowest common ancestor definition ★★★★☆
### 7.3 Why LCA matters for path problems ★★★★☆
### 7.4 Naive LCA intuition ★★★☆☆
### 7.5 Binary lifting overview for LCA ★★★☆☆
### 7.6 LCA-based distance computation ★★★★☆
### 7.7 LCA for path splitting intuition ★★★☆☆

## 8. Binary Lifting ★★☆☆☆
### 8.1 Why binary lifting exists ★★☆☆☆
### 8.2 2^k-th ancestor table mental model ★★☆☆☆
### 8.3 Precomputing ancestor jump table ★★☆☆☆
### 8.4 Jumping upward by powers of two ★★☆☆☆
### 8.5 K-th ancestor queries ★★☆☆☆
### 8.6 Binary lifting for LCA ★★☆☆☆
### 8.7 Time / memory tradeoff of binary lifting ★★☆☆☆
### 8.8 Binary lifting implementation pitfalls ★★☆☆☆

## 9. Tree Traversal Aggregation ★★★★★
### 9.1 Collecting subtree sums ★★★★★
### 9.2 Collecting subtree minimum / maximum ★★★★☆
### 9.3 Counting nodes with a property in each subtree ★★★★☆
### 9.4 Aggregating frequency information in subtrees ★★★☆☆
### 9.5 Prefix-style accumulation over child subtrees ★★★☆☆
### 9.6 Post-order aggregation intuition ★★★★★

## 10. Tree DP Foundations ★★★★★
### 10.1 Why tree DP exists ★★★★★
### 10.2 Subtree DP mental model ★★★★★
### 10.3 DP state on a node ★★★★★
### 10.4 Merging child contributions ★★★★★
### 10.5 Leaf base case handling ★★★★☆
### 10.6 Parent-to-child vs child-to-parent information flow ★★★★☆
### 10.7 Simple choose / not-choose tree DP ★★★★★
### 10.8 Longest path / diameter-style tree DP ★★★★☆
### 10.9 Subtree optimization DP basics ★★★☆☆

## 11. Rerooting DP ★★☆☆☆
### 11.1 Why subtree DP alone is sometimes insufficient ★★☆☆☆
### 11.2 Rerooting intuition ★★☆☆☆
### 11.3 Downward DP vs upward contribution ★★☆☆☆
### 11.4 Recomputing answers for every possible root ★★☆☆☆
### 11.5 Prefix / suffix contribution trick on children ★★☆☆☆
### 11.6 Typical rerooting problem patterns ★★☆☆☆
### 11.7 Rerooting implementation pitfalls ★★☆☆☆

## 12. Tree Query Techniques ★★★☆☆
### 12.1 Subtree query classification ★★★☆☆
### 12.2 Path query classification ★★★☆☆
### 12.3 Root-to-node query classification ★★★☆☆
### 12.4 Offline vs online tree query thinking ★★☆☆☆
### 12.5 Subtree queries via Euler tour + range structure ★★★☆☆
### 12.6 Path queries via LCA decomposition intuition ★★★☆☆
### 12.7 Query type recognition: subtree, path, ancestor, distance, frequency ★★★☆☆

## 13. Heavy-Light Decomposition (HLD) ★☆☆☆☆
## 14. DSU on Tree ★☆☆☆☆
## 15. Centroid and Centroid Decomposition ★☆☆☆☆
## 16. Tree Difference / Tree Prefix Techniques ★★☆☆☆
## 17. Binary Tree-Specific Foundations ★★☆☆☆
## 18. Binary Search Tree Awareness ★★☆☆☆
## 19. Tree Isomorphism and Structural Encoding ★☆☆☆☆
## 20. Virtual Tree Awareness ★☆☆☆☆

## 21. Tree Pattern Recognition ★★★★☆
### 21.1 “Need subtree aggregate for every node” pattern ★★★★★
### 21.2 “Need answer for every possible root” pattern ★★☆☆☆
### 21.3 “Need distance between many node pairs” pattern ★★★☆☆
### 21.4 “Need path query with updates” pattern ★☆☆☆☆
### 21.5 “Need subtree frequency / color statistics” pattern ★★☆☆☆
### 21.6 “Need offline path counting” pattern ★★☆☆☆
### 21.7 “Need ancestor jumping” pattern ★★☆☆☆
### 21.8 “Need convert tree to array interval” pattern ★★★☆☆

## 22. Tree Complexity and Technique Selection ★★★★☆
## 23. Tree Implementation Discipline ★★★★★
