# Tree

## 1. Tree Fundamentals
### 1.1 Tree definition and basic properties
### 1.2 Connected acyclic graph intuition
### 1.3 Number of edges in a tree
### 1.4 Unique simple path property
### 1.5 Rooted tree vs unrooted tree
### 1.6 Parent / child / sibling relationships
### 1.7 Leaf / internal node concepts
### 1.8 Degree and subtree terminology
### 1.9 Choosing a root and how rooting changes perspective

## 2. Tree Representation
### 2.1 Edge list representation
### 2.2 Adjacency list representation
### 2.3 Parent array representation
### 2.4 Children list representation for rooted trees
### 2.5 Weighted tree representation
### 2.6 Indexing and storage conventions for tree nodes

## 3. Basic Tree Traversal
### 3.1 DFS on tree mental model
### 3.2 Recursive DFS traversal
### 3.3 Iterative DFS traversal awareness
### 3.4 BFS on tree mental model
### 3.5 Level-order traversal
### 3.6 Avoiding revisiting parent in undirected tree traversal
### 3.7 Traversal order and what information can be collected during traversal

## 4. Rooted Tree Information
### 4.1 Parent array construction
### 4.2 Depth array
### 4.3 Level concept
### 4.4 Subtree size computation
### 4.5 Height of a node / subtree
### 4.6 Detecting leaves in rooted trees
### 4.7 Entry / exit of recursion on a node
### 4.8 Tree traversal states: before visiting children / after visiting children

## 5. Euler Tour and Tree Flattening
### 5.1 Why flatten a tree into an array
### 5.2 DFS entry time (tin)
### 5.3 DFS exit time (tout)
### 5.4 Euler tour order
### 5.5 Subtree-as-interval intuition
### 5.6 Flattening subtree values into arrays
### 5.7 Using Euler tour to support subtree queries
### 5.8 Euler tour variants: single-entry vs full tour awareness

## 6. Tree Distance and Basic Path Concepts
### 6.1 Distance between two nodes in a tree
### 6.2 Path as a unique simple route
### 6.3 Computing path length from depths
### 6.4 Tree diameter concept
### 6.5 Finding tree diameter with two DFS / BFS
### 6.6 Tree center intuition
### 6.7 Longest path in a tree basics

## 7. Lowest Common Ancestor (LCA)
### 7.1 Ancestor and descendant concepts
### 7.2 Lowest common ancestor definition
### 7.3 Why LCA matters for path problems
### 7.4 Naive LCA intuition
### 7.5 Binary lifting overview for LCA
### 7.6 LCA-based distance computation
### 7.7 LCA for path splitting intuition

## 8. Binary Lifting
### 8.1 Why binary lifting exists
### 8.2 2^k-th ancestor table mental model
### 8.3 Precomputing ancestor jump table
### 8.4 Jumping upward by powers of two
### 8.5 K-th ancestor queries
### 8.6 Binary lifting for LCA
### 8.7 Time / memory tradeoff of binary lifting
### 8.8 Binary lifting implementation pitfalls

## 9. Tree Traversal Aggregation
### 9.1 Collecting subtree sums
### 9.2 Collecting subtree minimum / maximum
### 9.3 Counting nodes with a property in each subtree
### 9.4 Aggregating frequency information in subtrees
### 9.5 Prefix-style accumulation over child subtrees
### 9.6 Post-order aggregation intuition

## 10. Tree DP Foundations
### 10.1 Why tree DP exists
### 10.2 Subtree DP mental model
### 10.3 DP state on a node
### 10.4 Merging child contributions
### 10.5 Leaf base case handling
### 10.6 Parent-to-child vs child-to-parent information flow
### 10.7 Simple choose / not-choose tree DP
### 10.8 Longest path / diameter-style tree DP
### 10.9 Subtree optimization DP basics

## 11. Rerooting DP
### 11.1 Why subtree DP alone is sometimes insufficient
### 11.2 Rerooting intuition
### 11.3 Downward DP vs upward contribution
### 11.4 Recomputing answers for every possible root
### 11.5 Prefix / suffix contribution trick on children
### 11.6 Typical rerooting problem patterns
### 11.7 Rerooting implementation pitfalls

## 12. Tree Query Techniques
### 12.1 Subtree query classification
### 12.2 Path query classification
### 12.3 Root-to-node query classification
### 12.4 Offline vs online tree query thinking
### 12.5 Subtree queries via Euler tour + range structure
### 12.6 Path queries via LCA decomposition intuition
### 12.7 Query type recognition: subtree, path, ancestor, distance, frequency

## 13. Heavy-Light Decomposition (HLD)
### 13.1 Why path queries on trees are hard
### 13.2 Heavy edge / light edge intuition
### 13.3 Heavy path decomposition mental model
### 13.4 Head / position / base-array mapping
### 13.5 Converting tree path queries into segment queries
### 13.6 Subtree queries with HLD awareness
### 13.7 HLD + segment tree combination
### 13.8 HLD implementation pitfalls

## 14. DSU on Tree
### 14.1 Why naive subtree frequency merging can be too slow
### 14.2 Small-to-large merging intuition
### 14.3 Heavy child reuse idea
### 14.4 Maintaining subtree frequency information efficiently
### 14.5 Typical DSU-on-tree query patterns
### 14.6 DSU-on-tree limitations and complexity awareness

## 15. Centroid and Centroid Decomposition
### 15.1 Tree centroid definition
### 15.2 Why centroid matters
### 15.3 Finding a centroid
### 15.4 Centroid decomposition mental model
### 15.5 Divide tree by centroid idea
### 15.6 Distance / path query applications
### 15.7 Centroid decomposition implementation awareness

## 16. Tree Difference / Tree Prefix Techniques
### 16.1 Difference-on-tree intuition
### 16.2 Marking path contributions
### 16.3 Accumulating marked contributions by post-order traversal
### 16.4 Using LCA in tree difference problems
### 16.5 Counting how many paths pass through nodes / edges
### 16.6 Offline path accumulation patterns

## 17. Binary Tree-Specific Foundations
### 17.1 Binary tree terminology
### 17.2 Left / right child representation
### 17.3 Preorder traversal
### 17.4 Inorder traversal
### 17.5 Postorder traversal
### 17.6 Binary tree reconstruction basics
### 17.7 When binary-tree-only knowledge matters in CP vs when it does not

## 18. Binary Search Tree Awareness
### 18.1 BST ordering property
### 18.2 Search / insert / delete intuition
### 18.3 Why plain BST is usually not the CP focus
### 18.4 Ordered-set connection to BST concepts
### 18.5 BST traversal order intuition

## 19. Tree Isomorphism and Structural Encoding
### 19.1 When two trees are structurally “the same”
### 19.2 Rooted tree encoding intuition
### 19.3 Canonical representation basics
### 19.4 Tree hashing awareness
### 19.5 Use cases of tree isomorphism problems

## 20. Virtual Tree Awareness
### 20.1 Why virtual tree exists
### 20.2 Compressing important nodes into a smaller tree
### 20.3 LCA-sorted construction intuition
### 20.4 Virtual tree use cases in advanced problems
### 20.5 When virtual tree is worth learning

## 21. Tree Pattern Recognition
### 21.1 “Need subtree aggregate for every node” pattern
### 21.2 “Need answer for every possible root” pattern
### 21.3 “Need distance between many node pairs” pattern
### 21.4 “Need path query with updates” pattern
### 21.5 “Need subtree frequency / color statistics” pattern
### 21.6 “Need offline path counting” pattern
### 21.7 “Need ancestor jumping” pattern
### 21.8 “Need convert tree to array interval” pattern

## 22. Tree Complexity and Technique Selection
### 22.1 Naive path traversal vs preprocessed query approach
### 22.2 LCA vs binary lifting vs HLD distinction
### 22.3 Euler tour + Fenwick / segment tree vs HLD distinction
### 22.4 Plain DFS aggregation vs tree DP distinction
### 22.5 Tree DP vs rerooting distinction
### 22.6 Small constraints vs heavy preprocessing tradeoff

## 23. Tree Implementation Discipline
### 23.1 Parent filtering in undirected DFS
### 23.2 Recursion depth awareness on large trees
### 23.3 Global arrays for tree metadata
### 23.4 1-index vs 0-index node storage discipline
### 23.5 Reinitializing tree state across test cases
### 23.6 Debugging subtree size / depth / tin / tout arrays
### 23.7 Verifying LCA tables and ancestor jumps
### 23.8 Stress-testing tree logic on tiny handmade trees
