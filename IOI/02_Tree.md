# Tree

### Target
### - IOI / TOI / Long-term CP foundation

---

## 1. Tree Foundations
| 觀念 | IOI importance |
|---|---|
| tree definition and properties | 🌟🌟🌟🌟🌟 |
| rooted vs unrooted tree | 🌟🌟🌟🌟🌟 |
| parent / child / sibling / leaf / subtree | 🌟🌟🌟🌟🌟 |
| unique simple path property | 🌟🌟🌟🌟🌟 |
| weighted tree awareness | 🌟🌟🌟🌟 |
| subtree as a natural DP / aggregation unit | 🌟🌟🌟🌟🌟 |
| path as a first-class object in tree problems | 🌟🌟🌟🌟🌟 |
| choosing a root as a modeling step | 🌟🌟🌟🌟🌟 |

## 2. Tree Representation
| 觀念 | IOI importance |
|---|---|
| adjacency list representation | 🌟🌟🌟🌟🌟 |
| parent array representation | 🌟🌟🌟🌟 |
| rooting a tree by DFS / BFS | 🌟🌟🌟🌟🌟 |
| avoiding revisiting parent | 🌟🌟🌟🌟🌟 |
| tree input patterns and indexing discipline | 🌟🌟🌟🌟🌟 |
| storing edge weights / edge ids / extra edge info | 🌟🌟🌟🌟 |
| iterative vs recursive traversal implementation awareness | 🌟🌟🌟 |

## 3. Tree Traversal Basics
| 觀念 | IOI importance |
|---|---|
| DFS on tree | 🌟🌟🌟🌟🌟 |
| BFS on tree | 🌟🌟🌟🌟 |
| preorder / postorder mental model | 🌟🌟🌟🌟🌟 |
| traversal order and aggregation timing | 🌟🌟🌟🌟🌟 |
| subtree enter / exit mental model | 🌟🌟🌟🌟 |
| recursive vs iterative traversal awareness | 🌟🌟🌟 |
| parent-aware traversal discipline | 🌟🌟🌟🌟🌟 |

## 4. Rooted-Tree Information
| 觀念 | IOI importance |
|---|---|
| parent | 🌟🌟🌟🌟🌟 |
| depth | 🌟🌟🌟🌟🌟 |
| subtree size | 🌟🌟🌟🌟🌟 |
| tin / tout (entry / exit time) | 🌟🌟🌟🌟 |
| ancestor / descendant relation via tin / tout | 🌟🌟🌟🌟 |
| depth-based reasoning on rooted tree | 🌟🌟🌟🌟🌟 |
| maintaining rooted-tree metadata during DFS | 🌟🌟🌟🌟🌟 |

## 5. Tree Distance and Diameter
| 觀念 | IOI importance |
|---|---|
| tree distance intuition | 🌟🌟🌟🌟🌟 |
| diameter by two DFS / BFS | 🌟🌟🌟🌟 |
| longest-path reasoning on trees | 🌟🌟🌟🌟🌟 |
| farthest-node trick | 🌟🌟🌟🌟 |
| eccentricity awareness | 🌟🌟🌟 |
| distance to diameter endpoints trick awareness | 🌟🌟🌟 |
| weighted tree distance awareness | 🌟🌟🌟🌟 |

## 6. Subtree Aggregation
| 觀念 | IOI importance |
|---|---|
| subtree sum | 🌟🌟🌟🌟 |
| counting nodes in subtree | 🌟🌟🌟🌟🌟 |
| subtree min / max / property count | 🌟🌟🌟🌟 |
| post-order accumulation | 🌟🌟🌟🌟🌟 |
| aggregating child contributions into parent | 🌟🌟🌟🌟🌟 |
| subtree frequency / color / label counting awareness | 🌟🌟🌟 |
| combining subtree information with external information awareness | 🌟🌟🌟 |

## 7. Tree DP Foundations
| 觀念 | IOI importance |
|---|---|
| DP state on node | 🌟🌟🌟🌟🌟 |
| merge child contributions | 🌟🌟🌟🌟🌟 |
| leaf base case handling | 🌟🌟🌟🌟🌟 |
| choose / not choose tree DP | 🌟🌟🌟🌟 |
| longest-path-style tree DP | 🌟🌟🌟🌟 |
| rooted-subtree optimization DP | 🌟🌟🌟🌟 |
| designing tree DP state from subtree meaning | 🌟🌟🌟🌟🌟 |
| proving tree DP transition correctness | 🌟🌟🌟🌟 |

## 8. Rerooting DP
| 觀念 | IOI importance |
|---|---|
| why subtree-only DP is sometimes not enough | 🌟🌟🌟🌟 |
| rerooting idea | 🌟🌟🌟🌟 |
| parent-side contribution propagation | 🌟🌟🌟🌟 |
| all-roots answer computation | 🌟🌟🌟🌟 |
| prefix / suffix merge trick for rerooting awareness | 🌟🌟🌟 |
| distinguishing subtree DP vs rerooting DP | 🌟🌟🌟🌟🌟 |

## 9. Euler Tour / Flattening
| 觀念 | IOI importance |
|---|---|
| flatten tree into array | 🌟🌟🌟🌟 |
| subtree as interval | 🌟🌟🌟🌟🌟 |
| tin-order flattening | 🌟🌟🌟🌟 |
| using BIT / segtree on flattened subtree | 🌟🌟🌟🌟 |
| entry-time based subtree queries | 🌟🌟🌟🌟 |
| subtree updates / subtree queries via flattening | 🌟🌟🌟🌟 |
| distinguishing subtree query vs path query | 🌟🌟🌟🌟🌟 |

## 10. LCA and Ancestor Queries
| 觀念 | IOI importance |
|---|---|
| what LCA solves | 🌟🌟🌟🌟🌟 |
| binary lifting table mental model | 🌟🌟🌟🌟🌟 |
| k-th ancestor query | 🌟🌟🌟🌟 |
| distance using LCA | 🌟🌟🌟🌟🌟 |
| ancestor jump preprocessing | 🌟🌟🌟🌟 |
| path relation reasoning with LCA | 🌟🌟🌟🌟 |
| tin / tout ancestor check + LCA combination | 🌟🌟🌟🌟 |

## 11. Binary Lifting as a General Tree Tool
| 觀念 | IOI importance |
|---|---|
| lifting parent by powers of two | 🌟🌟🌟🌟🌟 |
| aligning depths before LCA | 🌟🌟🌟🌟🌟 |
| jumping upward under constraints awareness | 🌟🌟🌟 |
| storing extra information on jumps awareness | 🌟🌟🌟 |
| binary lifting as path-query support structure | 🌟🌟🌟🌟 |

## 12. Path Queries on Trees
| 觀念 | IOI importance |
|---|---|
| subtree query vs path query distinction | 🌟🌟🌟🌟🌟 |
| path decomposition awareness | 🌟🌟🌟 |
| reducing path question to LCA + partial paths | 🌟🌟🌟🌟 |
| path aggregate query awareness | 🌟🌟🌟🌟 |
| when flattening is enough and when it is not | 🌟🌟🌟🌟 |
| edge-based vs node-based path query distinction | 🌟🌟🌟🌟 |

## 13. Heavy-Light Decomposition (HLD) Awareness
| 觀念 | IOI importance |
|---|---|
| why subtree interval tricks are not enough for general path queries | 🌟🌟🌟🌟 |
| heavy child / light edge idea | 🌟🌟🌟 |
| path decomposition into O(log n) chains | 🌟🌟🌟 |
| mapping chains to segment tree intervals | 🌟🌟🌟 |
| subtree + path query unification awareness | 🌟🌟🌟 |
| when HLD is actually the right tool | 🌟🌟 |

## 14. Small-to-Large / DSU on Tree Awareness
| 觀念 | IOI importance |
|---|---|
| subtree color / frequency aggregation problem type | 🌟🌟🌟 |
| keep-big-child / merge-small-child idea | 🌟🌟 |
| amortized intuition behind DSU on tree | 🌟🌟 |
| when DSU on tree is preferable to naive subtree recomputation | 🌟🌟 |
| relation to small-to-large merging | 🌟🌟🌟 |

## 15. Centroid and Divide-Based Tree Thinking Awareness
| 觀念 | IOI importance |
|---|---|
| centroid definition intuition | 🌟🌟 |
| subtree size balancing idea | 🌟🌟 |
| centroid decomposition awareness | 🌟 |
| path counting via centroid decomposition awareness | 🌟 |
| when centroid-style divide is relevant | 🌟 |

## 16. Tree Problem Modeling Skill
| 觀念 | IOI importance |
|---|---|
| choosing a root to simplify the statement | 🌟🌟🌟🌟🌟 |
| turning statement requirements into subtree / path / ancestor / depth questions | 🌟🌟🌟🌟🌟 |
| distinguishing tree traversal vs tree DP vs rerooting vs path-query problem | 🌟🌟🌟🌟🌟 |
| recognizing when a tree problem is really a graph / DP / DS problem in disguise | 🌟🌟🌟🌟🌟 |
| choosing the simplest sufficient tree technique | 🌟🌟🌟🌟🌟 |
| recognizing when the answer is local-to-subtree vs global-over-all-roots | 🌟🌟🌟🌟 |
| recognizing when to flatten, when to LCA, and when to HLD | 🌟🌟🌟🌟 |
