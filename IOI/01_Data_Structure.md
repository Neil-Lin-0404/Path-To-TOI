# Data_Structures

### Target
### - IOI / TOI / Long-term CP foundation

---

## 1. Linear Containers
| 觀念 | IOI importance |
|---|---|
| stack mental model and LIFO behavior | 🌟🌟🌟🌟🌟 |
| queue mental model and FIFO behavior | 🌟🌟🌟🌟🌟 |
| deque mental model and double-ended operations | 🌟🌟🌟🌟 |
| vector / dynamic array usage discipline | 🌟🌟🌟🌟🌟 |
| choosing between stack / queue / deque / vector | 🌟🌟🌟🌟🌟 |
| container-operation complexity awareness | 🌟🌟🌟🌟🌟 |
| iterative state simulation using containers | 🌟🌟🌟🌟 |

## 2. Frequency Structures and Associative Containers
| 觀念 | IOI importance |
|---|---|
| frequency array | 🌟🌟🌟🌟 |
| map | 🌟🌟🌟🌟🌟 |
| unordered_map awareness | 🌟🌟🌟 |
| set / multiset basics | 🌟🌟🌟🌟🌟 |
| ordered vs unordered container tradeoff | 🌟🌟🌟🌟 |
| maintaining distinct counts | 🌟🌟🌟🌟 |
| maintaining counts / positions / occurrences by key | 🌟🌟🌟🌟 |
| coordinate compression + associative structure combination | 🌟🌟🌟🌟 |

## 3. Stack Patterns
| 觀念 | IOI importance |
|---|---|
| next greater / next smaller | 🌟🌟🌟🌟 |
| previous greater / previous smaller | 🌟🌟🌟🌟 |
| monotonic stack invariant | 🌟🌟🌟🌟🌟 |
| maintaining candidate boundaries with stack | 🌟🌟🌟🌟 |
| contribution / boundary counting awareness | 🌟🌟🌟🌟 |
| histogram-style rectangle pattern | 🌟🌟🌟 |
| stack-based expression / bracket / structural processing awareness | 🌟🌟 |

## 4. Queue / Deque Patterns
| 觀念 | IOI importance |
|---|---|
| BFS queue usage | 🌟🌟🌟🌟🌟 |
| process-order simulation with queue | 🌟🌟🌟🌟 |
| deque for 0-1 BFS | 🌟🌟🌟🌟 |
| monotonic queue for sliding window extrema | 🌟🌟🌟🌟 |
| maintaining a candidate window with deque | 🌟🌟🌟🌟 |
| choosing queue vs deque vs heap | 🌟🌟🌟🌟 |

## 5. Priority Queue / Heap
| 觀念 | IOI importance |
|---|---|
| min-heap vs max-heap | 🌟🌟🌟🌟🌟 |
| repeated best-candidate extraction | 🌟🌟🌟🌟🌟 |
| heap in Dijkstra | 🌟🌟🌟🌟🌟 |
| heap in greedy scheduling / interval / merge problems | 🌟🌟🌟🌟🌟 |
| heap with lazy deletion awareness | 🌟🌟🌟 |
| K-th / best-first / candidate generation usage | 🌟🌟🌟🌟 |
| merging sorted streams with heap | 🌟🌟🌟 |
| choosing heap vs multiset vs binary search on answer | 🌟🌟🌟🌟 |

## 6. Disjoint Set Union (DSU / Union-Find)
| 觀念 | IOI importance |
|---|---|
| parent representation | 🌟🌟🌟🌟🌟 |
| find | 🌟🌟🌟🌟🌟 |
| union / merge | 🌟🌟🌟🌟🌟 |
| path compression | 🌟🌟🌟🌟🌟 |
| union by size / rank | 🌟🌟🌟🌟 |
| connected-component maintenance | 🌟🌟🌟🌟🌟 |
| DSU for offline connectivity / grouping thinking | 🌟🌟🌟🌟 |
| DSU with extra component information awareness | 🌟🌟🌟 |
| rollback DSU awareness | 🌟🌟 |
| persistent / time-travel connectivity awareness | 🌟 |

## 7. Fenwick Tree / BIT
| 觀念 | IOI importance |
|---|---|
| why BIT exists | 🌟🌟🌟🌟🌟 |
| lowbit mental model | 🌟🌟🌟🌟 |
| point update + prefix query | 🌟🌟🌟🌟🌟 |
| prefix query + point value reconstruction awareness | 🌟🌟🌟 |
| range sum by prefix subtraction | 🌟🌟🌟🌟🌟 |
| range update / point query BIT awareness | 🌟🌟🌟🌟 |
| range update / range query BIT awareness | 🌟🌟🌟 |
| coordinate compression + BIT | 🌟🌟🌟🌟🌟 |
| inversion counting with BIT | 🌟🌟🌟🌟 |
| order / counting / offline query support with BIT | 🌟🌟🌟🌟🌟 |

## 8. Segment Tree Foundations
| 觀念 | IOI importance |
|---|---|
| why segment tree exists | 🌟🌟🌟🌟🌟 |
| node meaning / segment meaning | 🌟🌟🌟🌟🌟 |
| build | 🌟🌟🌟🌟 |
| point update | 🌟🌟🌟🌟🌟 |
| range query | 🌟🌟🌟🌟🌟 |
| sum / min / max segment tree | 🌟🌟🌟🌟🌟 |
| recursive implementation mental model | 🌟🌟🌟🌟 |
| iterative segment tree awareness | 🌟🌟🌟 |
| when segtree beats prefix / BIT | 🌟🌟🌟🌟🌟 |
| choosing BIT vs segtree | 🌟🌟🌟🌟🌟 |

## 9. Segment Tree Augmentations
| 觀念 | IOI importance |
|---|---|
| lazy propagation basics | 🌟🌟🌟🌟 |
| range add / range assign awareness | 🌟🌟🌟🌟 |
| maintaining custom node information | 🌟🌟🌟🌟 |
| merge function design | 🌟🌟🌟🌟🌟 |
| max subarray / structural segment information awareness | 🌟🌟🌟 |
| first position satisfying condition awareness | 🌟🌟🌟 |
| segment tree over compressed coordinates | 🌟🌟🌟🌟 |
| segment tree as query engine for offline / sweep problems | 🌟🌟🌟🌟 |

## 10. Sparse Table and Static Range Query Structures
| 觀念 | IOI importance |
|---|---|
| static range query setting | 🌟🌟🌟🌟 |
| sparse table for RMQ | 🌟🌟🌟🌟 |
| idempotent operation requirement awareness | 🌟🌟🌟 |
| log table preprocessing | 🌟🌟🌟 |
| choosing sparse table vs segment tree | 🌟🌟🌟🌟 |
| static vs dynamic query distinction | 🌟🌟🌟🌟🌟 |

## 11. Ordered Set / Multiset / Balanced BST Usage
| 觀念 | IOI importance |
|---|---|
| maintaining sorted active elements | 🌟🌟🌟🌟 |
| predecessor / successor queries | 🌟🌟🌟🌟 |
| insert / erase / lower_bound in ordered set | 🌟🌟🌟🌟🌟 |
| multiset for duplicate values | 🌟🌟🌟🌟 |
| sliding window with ordered container awareness | 🌟🌟🌟 |
| event processing with active set | 🌟🌟🌟🌟 |
| choosing set / multiset vs heap | 🌟🌟🌟🌟 |

## 12. Monotonic Data Structures
| 觀念 | IOI importance |
|---|---|
| monotonic stack | 🌟🌟🌟🌟🌟 |
| monotonic queue | 🌟🌟🌟🌟 |
| nearest greater / smaller family recognition | 🌟🌟🌟🌟🌟 |
| sliding window min / max | 🌟🌟🌟🌟 |
| removing dominated candidates | 🌟🌟🌟🌟 |
| monotonicity as a DS-maintenance invariant | 🌟🌟🌟🌟🌟 |

## 13. Offline Query Data-Structure Thinking
| 觀念 | IOI importance |
|---|---|
| sorting queries by right endpoint / value / time | 🌟🌟🌟🌟 |
| sweep events and update a structure | 🌟🌟🌟🌟 |
| answer queries offline with BIT / segtree | 🌟🌟🌟🌟🌟 |
| interval contribution counting | 🌟🌟🌟🌟 |
| offline inversion / order statistics style thinking | 🌟🌟🌟🌟 |
| value-sorted offline processing | 🌟🌟🌟🌟 |
| DSU / BIT / segtree as offline engines | 🌟🌟🌟🌟🌟 |

## 14. Small-to-Large / Merge-Based Structure Thinking
| 觀念 | IOI importance |
|---|---|
| merge small container into large container | 🌟🌟🌟 |
| subtree-frequency aggregation awareness | 🌟🌟🌟 |
| complexity reason behind small-to-large merging | 🌟🌟🌟 |
| map / multiset merge on tree awareness | 🌟🌟 |
| when small-to-large is the right structural trick | 🌟🌟 |

## 15. Persistence / Rollback / Time-Aware Structure Awareness
| 觀念 | IOI importance |
|---|---|
| rollback idea | 🌟🌟 |
| rollback DSU awareness | 🌟🌟 |
| persistent segment tree awareness | 🌟🌟 |
| versioned query idea | 🌟🌟 |
| offline time-segment / divide-and-conquer-over-time awareness | 🌟 |

## 16. Structure Selection Skill
| 觀念 | IOI importance |
|---|---|
| prefix sum vs BIT vs segment tree | 🌟🌟🌟🌟🌟 |
| queue / deque / heap / set selection | 🌟🌟🌟🌟🌟 |
| array vs map vs unordered_map vs set | 🌟🌟🌟🌟🌟 |
| static query structure vs dynamic query structure | 🌟🌟🌟🌟🌟 |
| online vs offline structure choice | 🌟🌟🌟🌟🌟 |
| when not to use a heavy structure | 🌟🌟🌟🌟🌟 |
| simplifying a problem before throwing a DS at it | 🌟🌟🌟🌟🌟 |
