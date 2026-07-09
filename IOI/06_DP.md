# Graph

### Target
### - IOI / TOI / Long-term CP foundation

---

## 1. Graph Foundations
| 觀念 | IOI importance |
|---|---|
| directed vs undirected graph | 🌟🌟🌟🌟🌟 |
| weighted vs unweighted graph | 🌟🌟🌟🌟🌟 |
| adjacency list / edge list | 🌟🌟🌟🌟🌟 |
| graph as state-transition model | 🌟🌟🌟🌟🌟 |
| graph size and complexity awareness | 🌟🌟🌟🌟🌟 |
| sparse vs dense graph awareness | 🌟🌟🌟🌟 |
| node / edge / component / path / cycle vocabulary discipline | 🌟🌟🌟🌟🌟 |
| choosing what a node represents | 🌟🌟🌟🌟🌟 |

## 2. DFS
| 觀念 | IOI importance |
|---|---|
| DFS mental model | 🌟🌟🌟🌟🌟 |
| connected components | 🌟🌟🌟🌟🌟 |
| DFS on grids | 🌟🌟🌟🌟 |
| parent tracking | 🌟🌟🌟🌟🌟 |
| entry / exit style traversal thinking | 🌟🌟🌟🌟 |
| recursive vs iterative DFS awareness | 🌟🌟🌟 |
| DFS tree / traversal tree viewpoint | 🌟🌟🌟🌟 |
| DFS as structure-extraction tool, not just reachability | 🌟🌟🌟🌟🌟 |

## 3. BFS
| 觀念 | IOI importance |
|---|---|
| BFS mental model | 🌟🌟🌟🌟🌟 |
| shortest path in unweighted graph | 🌟🌟🌟🌟🌟 |
| BFS on grids | 🌟🌟🌟🌟 |
| multi-source BFS | 🌟🌟🌟🌟🌟 |
| distance array discipline | 🌟🌟🌟🌟🌟 |
| layer-by-layer exploration viewpoint | 🌟🌟🌟🌟🌟 |
| BFS over state graph | 🌟🌟🌟🌟 |
| distinguishing BFS shortest path from mere traversal | 🌟🌟🌟🌟🌟 |

## 4. Traversal Applications
| 觀念 | IOI importance |
|---|---|
| reachability | 🌟🌟🌟🌟🌟 |
| flood fill / region problems | 🌟🌟🌟🌟 |
| bipartite graph checking | 🌟🌟🌟🌟🌟 |
| cycle detection basics | 🌟🌟🌟🌟🌟 |
| connected component labeling | 🌟🌟🌟🌟 |
| topological dependency exploration preview | 🌟🌟🌟 |
| graph coloring feasibility by traversal awareness | 🌟🌟🌟 |
| structural preprocessing by traversal | 🌟🌟🌟🌟 |

## 5. Topological Sort and DAG Foundations
| 觀念 | IOI importance |
|---|---|
| topological sort | 🌟🌟🌟🌟🌟 |
| indegree-based topo sort | 🌟🌟🌟🌟 |
| DFS-based topo order awareness | 🌟🌟🌟🌟 |
| cycle detection in directed graph | 🌟🌟🌟🌟🌟 |
| dependency graph thinking | 🌟🌟🌟🌟🌟 |
| DAG as “ordered dependency structure” | 🌟🌟🌟🌟🌟 |
| when a directed problem should be treated as a DAG problem | 🌟🌟🌟🌟 |

## 6. DAG DP and DAG Optimization
| 觀念 | IOI importance |
|---|---|
| DP on DAG | 🌟🌟🌟🌟🌟 |
| longest / shortest path on DAG | 🌟🌟🌟🌟 |
| path counting on DAG | 🌟🌟🌟🌟 |
| topo order as DP transition order | 🌟🌟🌟🌟🌟 |
| combining graph structure with DP state | 🌟🌟🌟🌟 |
| distinguishing DAG DP from generic graph shortest path | 🌟🌟🌟🌟🌟 |

## 7. Shortest Path Core
| 觀念 | IOI importance |
|---|---|
| Dijkstra mental model | 🌟🌟🌟🌟🌟 |
| relaxation | 🌟🌟🌟🌟🌟 |
| priority queue usage | 🌟🌟🌟🌟🌟 |
| stale-state handling | 🌟🌟🌟🌟🌟 |
| when BFS is enough and Dijkstra is not needed | 🌟🌟🌟🌟🌟 |
| shortest path tree viewpoint | 🌟🌟🌟🌟 |
| distance initialization / INF discipline | 🌟🌟🌟🌟🌟 |
| proving why Dijkstra is valid only under nonnegative weights | 🌟🌟🌟🌟 |

## 8. Shortest Path Variants
| 觀念 | IOI importance |
|---|---|
| 0-1 BFS | 🌟🌟🌟🌟 |
| multi-source shortest path | 🌟🌟🌟🌟🌟 |
| shortest path with state augmentation | 🌟🌟🌟🌟 |
| shortest path on DAG | 🌟🌟🌟🌟 |
| shortest path with one extra resource / coupon / mode awareness | 🌟🌟🌟 |
| choosing BFS vs 0-1 BFS vs Dijkstra vs DAG shortest path | 🌟🌟🌟🌟🌟 |
| distinguishing path cost from number of steps | 🌟🌟🌟🌟🌟 |

## 9. State-Space Graph Modeling
| 觀念 | IOI importance |
|---|---|
| node = (position, extra state) | 🌟🌟🌟🌟 |
| state graph for used-resources / last-color / mode / cooldown | 🌟🌟🌟🌟 |
| shortest path on expanded state graph | 🌟🌟🌟🌟 |
| dist array over multiple dimensions | 🌟🌟🌟🌟 |
| controlling state explosion | 🌟🌟🌟🌟 |
| deciding what extra state is necessary | 🌟🌟🌟🌟🌟 |
| distinguishing state-graph shortest path from DP-on-state | 🌟🌟🌟🌟 |

## 10. Minimum Spanning Tree (MST)
| 觀念 | IOI importance |
|---|---|
| MST definition | 🌟🌟🌟🌟🌟 |
| Kruskal | 🌟🌟🌟🌟🌟 |
| Prim awareness | 🌟🌟🌟🌟 |
| DSU inside Kruskal | 🌟🌟🌟🌟🌟 |
| cut / connectivity intuition for MST | 🌟🌟🌟🌟 |
| when a problem is really “connect everything cheaply” | 🌟🌟🌟🌟🌟 |
| maximum spanning tree awareness | 🌟🌟🌟 |
| MST vs shortest path distinction | 🌟🌟🌟🌟🌟 |

## 11. Strongly Connected Components (SCC)
| 觀念 | IOI importance |
|---|---|
| SCC definition | 🌟🌟🌟🌟 |
| condensation DAG idea | 🌟🌟🌟🌟 |
| Kosaraju awareness | 🌟🌟🌟 |
| Tarjan SCC awareness | 🌟🌟🌟 |
| reducing cyclic directed graph into DAG of SCCs | 🌟🌟🌟🌟🌟 |
| when SCC is the right abstraction | 🌟🌟🌟🌟 |

## 12. Bridges, Articulation, and Low-Link Awareness
| 觀念 | IOI importance |
|---|---|
| bridge definition | 🌟🌟🌟 |
| articulation point definition | 🌟🌟🌟 |
| DFS tree edge vs back edge awareness | 🌟🌟🌟🌟 |
| low-link value idea | 🌟🌟🌟 |
| connectivity fragility / cut-edge / cut-vertex problem recognition | 🌟🌟🌟🌟 |
| bridge-tree / block-structure awareness | 🌟🌟 |

## 13. DSU-Based Graph Thinking
| 觀念 | IOI importance |
|---|---|
| component maintenance under edge additions | 🌟🌟🌟🌟🌟 |
| offline connectivity with DSU awareness | 🌟🌟🌟🌟 |
| Kruskal-style “sort edges then merge” thinking | 🌟🌟🌟🌟🌟 |
| DSU as graph compression / grouping tool | 🌟🌟🌟🌟 |
| distinguishing traversal-based connectivity from DSU-based connectivity handling | 🌟🌟🌟🌟🌟 |

## 14. Functional Graph Awareness
| 觀念 | IOI importance |
|---|---|
| every node has one outgoing edge structure | 🌟🌟🌟 |
| cycle + in-tree decomposition | 🌟🌟🌟 |
| jump / k-th successor awareness | 🌟🌟🌟 |
| binary lifting on functional graph awareness | 🌟🌟🌟 |
| functional graph as hybrid of graph + tree + cycle reasoning | 🌟🌟🌟🌟 |

## 15. Bitmask / Small-State Graph Problems
| 觀念 | IOI importance |
|---|---|
| node = (u, mask) | 🌟🌟🌟 |
| used-color / used-key / visited-type state | 🌟🌟🌟 |
| BFS / Dijkstra on state graph | 🌟🌟🌟 |
| state compression with small k | 🌟🌟🌟 |
| transition design under state augmentation | 🌟🌟🌟 |
| distinguishing graph-on-mask from DP-on-mask | 🌟🌟🌟🌟 |

## 16. Graph Problem Modeling Skill
| 觀念 | IOI importance |
|---|---|
| turning a statement into nodes and edges | 🌟🌟🌟🌟🌟 |
| grid as graph | 🌟🌟🌟🌟🌟 |
| state transition as graph | 🌟🌟🌟🌟🌟 |
| choosing what the node represents | 🌟🌟🌟🌟🌟 |
| choosing what an edge means | 🌟🌟🌟🌟🌟 |
| deciding whether the graph is explicit or implicit | 🌟🌟🌟🌟🌟 |
| deciding whether the problem is really shortest path / connectivity / DAG / MST / SCC | 🌟🌟🌟🌟🌟 |

## 17. Graph Technique Selection Skill
| 觀念 | IOI importance |
|---|---|
| DFS vs BFS | 🌟🌟🌟🌟🌟 |
| BFS vs Dijkstra | 🌟🌟🌟🌟🌟 |
| traversal problem vs shortest-path problem | 🌟🌟🌟🌟🌟 |
| generic directed graph vs DAG | 🌟🌟🌟🌟🌟 |
| normal graph vs state-expanded graph | 🌟🌟🌟🌟🌟 |
| shortest path vs MST | 🌟🌟🌟🌟🌟 |
| DSU vs traversal vs shortest path vs SCC abstraction | 🌟🌟🌟🌟🌟 |
| choosing the simplest sufficient graph model | 🌟🌟🌟🌟🌟 |
