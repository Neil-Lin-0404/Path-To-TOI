# Graph

## 1. Graph Fundamentals ★★★★★
### 1.1 Graph definition and terminology ★★★★★
### 1.2 Directed vs undirected graph ★★★★★
### 1.3 Weighted vs unweighted graph ★★★★★
### 1.4 Path / cycle / connected component basics ★★★★★
### 1.5 Graph representation with adjacency list ★★★★★
### 1.6 Edge list vs adjacency list tradeoff ★★★★☆
### 1.7 Indexing and graph storage discipline ★★★★★

## 2. DFS Foundations ★★★★★
### 2.1 DFS mental model ★★★★★
### 2.2 Recursive DFS traversal ★★★★★
### 2.3 Visited array discipline ★★★★★
### 2.4 Connected component discovery ★★★★★
### 2.5 DFS on grids ★★★★★
### 2.6 DFS path / reachability reasoning ★★★★★
### 2.7 DFS with parent tracking ★★★★☆
### 2.8 Iterative DFS awareness ★★☆☆☆

## 3. BFS Foundations ★★★★★
### 3.1 BFS mental model ★★★★★
### 3.2 Queue-driven layer expansion ★★★★★
### 3.3 Shortest path in unweighted graph ★★★★★
### 3.4 BFS on grids ★★★★★
### 3.5 Multi-source BFS ★★★★☆
### 3.6 State / distance array maintenance ★★★★★
### 3.7 Reconstructing shortest path basics ★★★☆☆

## 4. Graph Traversal Applications ★★★★★
### 4.1 Counting connected components ★★★★★
### 4.2 Reachability queries basics ★★★★★
### 4.3 Flood fill / region problems ★★★★★
### 4.4 Bipartite graph checking ★★★★☆
### 4.5 Cycle detection basics ★★★★☆
### 4.6 Topological dependency intuition preview ★★★☆☆

## 5. Shortest Path Algorithms ★★★★★
### 5.1 Unweighted shortest path via BFS ★★★★★
### 5.2 Weighted shortest path problem classification ★★★★★
### 5.3 Dijkstra mental model ★★★★★
### 5.4 Priority queue in Dijkstra ★★★★★
### 5.5 Relaxation intuition ★★★★★
### 5.6 Distance array / stale-state handling ★★★★★
### 5.7 0-1 BFS awareness ★★☆☆☆
### 5.8 Bellman-Ford awareness ★★☆☆☆
### 5.9 Floyd-Warshall for small n awareness ★★☆☆☆

## 6. Topological Sort and DAG ★★★★☆
### 6.1 DAG definition ★★★★☆
### 6.2 Why topological order matters ★★★★☆
### 6.3 Kahn’s algorithm ★★★★☆
### 6.4 DFS-based topo awareness ★★☆☆☆
### 6.5 Cycle detection in directed graph ★★★★☆
### 6.6 DP on DAG basics ★★★★☆

## 7. Minimum Spanning Tree ★★★☆☆
### 7.1 MST definition ★★★☆☆
### 7.2 Kruskal intuition ★★★☆☆
### 7.3 DSU inside Kruskal ★★★☆☆
### 7.4 Prim awareness ★★☆☆☆
### 7.5 When MST appears ★★★☆☆

## 8. Advanced Connectivity ★★☆☆☆
### 8.1 Strongly connected components awareness ★★☆☆☆
### 8.2 Bridges awareness ★★☆☆☆
### 8.3 Articulation points awareness ★★☆☆☆

## 9. Graph Modeling ★★★★★
### 9.1 Turning a problem into a graph ★★★★★
### 9.2 State graph mental model ★★★★☆
### 9.3 Grid as graph ★★★★★
### 9.4 Implicit graph vs explicit graph ★★★★☆
### 9.5 Choosing nodes / edges correctly ★★★★★

## 10. Graph Pattern Recognition ★★★★★
### 10.1 “Minimum steps / moves” → BFS ★★★★★
### 10.2 “Reachability / can get there?” → DFS/BFS ★★★★★
### 10.3 “Weighted minimum cost path” → Dijkstra ★★★★★
### 10.4 “Dependency ordering” → Topological sort ★★★★☆
### 10.5 “Connect all nodes cheaply” → MST ★★★☆☆
### 10.6 “Grid region / island / flood fill” → DFS/BFS ★★★★★

## 11. Graph Implementation Discipline ★★★★★
### 11.1 Resetting visited / distance arrays ★★★★★
### 11.2 Handling 1-index / 0-index nodes ★★★★★
### 11.3 Avoiding stale PQ states in Dijkstra ★★★★★
### 11.4 Preventing recursion mistakes in DFS ★★★★☆
### 11.5 Debugging graph traversal on small examples ★★★★★
