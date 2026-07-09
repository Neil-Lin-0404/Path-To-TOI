# Algorithm_Paradigms

### Target
### - IOI / TOI / Long-term CP foundation

---

## 1. Brute Force as a Real Strategy
| 觀念 | IOI importance |
|---|---|
| complete enumeration | 🌟🌟🌟🌟 |
| subset / permutation / state enumeration | 🌟🌟🌟🌟 |
| constraint-based brute-force judgment | 🌟🌟🌟🌟🌟 |
| partial brute force + pruning | 🌟🌟🌟🌟 |
| when brute force is actually the intended solution | 🌟🌟🌟🌟🌟 |
| estimating brute-force state space before coding | 🌟🌟🌟🌟🌟 |
| brute force as a baseline for validation / checker | 🌟🌟🌟🌟 |
| recognizing when brute force can be improved by preprocessing or better ordering | 🌟🌟🌟🌟 |

## 2. Greedy
| 觀念 | IOI importance |
|---|---|
| what greedy really means | 🌟🌟🌟🌟🌟 |
| local choice vs global optimum | 🌟🌟🌟🌟🌟 |
| exchange argument awareness | 🌟🌟🌟🌟 |
| sorting + greedy | 🌟🌟🌟🌟🌟 |
| heap + greedy | 🌟🌟🌟🌟🌟 |
| interval greedy basics | 🌟🌟🌟🌟 |
| proving greedy correctness | 🌟🌟🌟🌟🌟 |
| common fake-greedy traps | 🌟🌟🌟🌟🌟 |
| recognizing when greedy fails because future choices matter too much | 🌟🌟🌟🌟🌟 |

## 3. Divide and Conquer
| 觀念 | IOI importance |
|---|---|
| split / solve / merge mental model | 🌟🌟🌟🌟 |
| recursive divide-and-conquer structure | 🌟🌟🌟🌟 |
| merge-sort-style counting | 🌟🌟🌟🌟 |
| divide by position / value / structure awareness | 🌟🌟🌟 |
| binary-search-style divide reasoning vs true divide and conquer | 🌟🌟🌟🌟 |
| when divide and conquer is useful | 🌟🌟🌟🌟 |
| complexity reasoning for divide-and-conquer algorithms | 🌟🌟🌟🌟 |
| recognizing when merge information is the real key | 🌟🌟🌟🌟 |

## 4. Search and Backtracking
| 觀念 | IOI importance |
|---|---|
| DFS as state search | 🌟🌟🌟🌟🌟 |
| backtracking | 🌟🌟🌟🌟 |
| constraint satisfaction search | 🌟🌟🌟 |
| pruning and branch cutting | 🌟🌟🌟🌟 |
| state design in search problems | 🌟🌟🌟🌟 |
| ordering choices to improve pruning | 🌟🌟🌟 |
| bounding / feasibility pruning awareness | 🌟🌟🌟 |
| distinguishing search problem vs DP problem | 🌟🌟🌟🌟🌟 |

## 5. Dynamic Programming as a Paradigm
| 觀念 | IOI importance |
|---|---|
| greedy vs DP | 🌟🌟🌟🌟🌟 |
| search + memoization vs bottom-up DP | 🌟🌟🌟🌟🌟 |
| recognizing overlapping subproblems | 🌟🌟🌟🌟🌟 |
| state compression awareness | 🌟🌟🌟 |
| optimization vs counting DP perspective | 🌟🌟🌟🌟🌟 |
| identifying what information a state must remember | 🌟🌟🌟🌟🌟 |
| recognizing when “future choices depend on current history” implies DP | 🌟🌟🌟🌟🌟 |
| distinguishing DP from brute-force-with-cache-shaped thinking | 🌟🌟🌟🌟 |

## 6. Graph Search as a Paradigm
| 觀念 | IOI importance |
|---|---|
| state transition viewpoint | 🌟🌟🌟🌟🌟 |
| BFS for shortest steps | 🌟🌟🌟🌟🌟 |
| DFS for structure / reachability | 🌟🌟🌟🌟🌟 |
| Dijkstra for weighted transition cost | 🌟🌟🌟🌟🌟 |
| when a problem should be modeled as a graph | 🌟🌟🌟🌟🌟 |
| graph as “state space” rather than “drawn network” | 🌟🌟🌟🌟🌟 |
| distinguishing graph shortest path from DP / greedy formulation | 🌟🌟🌟🌟 |
| recognizing hidden graph structure in movement / transition problems | 🌟🌟🌟🌟🌟 |

## 7. Constructive / Ad Hoc / Simulation Thinking
| 觀念 | IOI importance |
|---|---|
| build the answer directly | 🌟🌟🌟🌟 |
| follow rules and simulate | 🌟🌟🌟🌟🌟 |
| maintain invariants while constructing | 🌟🌟🌟🌟 |
| recognizing implementation problem disguised as algorithm problem | 🌟🌟🌟🌟🌟 |
| ad hoc pattern extraction from examples / constraints | 🌟🌟🌟🌟 |
| constructing a witness / valid configuration instead of only computing value | 🌟🌟🌟 |
| turning vague conditions into a deterministic construction process | 🌟🌟🌟🌟 |
| recognizing when no heavy algorithm is needed | 🌟🌟🌟🌟🌟 |

## 8. Optimization vs Decision Thinking
| 觀念 | IOI importance |
|---|---|
| optimization problem vs decision problem distinction | 🌟🌟🌟🌟 |
| turning optimization into decision | 🌟🌟🌟🌟🌟 |
| binary search on answer as a paradigm bridge | 🌟🌟🌟🌟🌟 |
| feasibility-check design mindset | 🌟🌟🌟🌟🌟 |
| recognizing monotone answer spaces | 🌟🌟🌟🌟🌟 |
| when optimization should be solved directly instead of via decision reduction | 🌟🌟🌟🌟 |
| combining decision-check with greedy / graph / DP | 🌟🌟🌟🌟 |

## 9. Offline Thinking as a Problem-Solving Paradigm
| 觀念 | IOI importance |
|---|---|
| online vs offline distinction | 🌟🌟🌟🌟🌟 |
| reordering queries / events to simplify the problem | 🌟🌟🌟🌟🌟 |
| sorting by one dimension to process another | 🌟🌟🌟🌟🌟 |
| answering many queries together instead of independently | 🌟🌟🌟🌟 |
| offline as a way to replace hard dynamic maintenance | 🌟🌟🌟🌟🌟 |
| combining offline order with DSU / BIT / segtree | 🌟🌟🌟🌟 |

## 10. DP vs Greedy vs Search vs Graph Judgment
| 觀念 | IOI importance |
|---|---|
| greedy vs DP | 🌟🌟🌟🌟🌟 |
| brute force vs search vs DP | 🌟🌟🌟🌟🌟 |
| graph modeling vs DP modeling | 🌟🌟🌟🌟🌟 |
| shortest path vs DP optimization | 🌟🌟🌟🌟 |
| search-state graph vs recursive backtracking distinction | 🌟🌟🌟🌟 |
| deciding whether repeated subproblems actually exist | 🌟🌟🌟🌟🌟 |
| choosing between “explicit state graph” and “implicit DP state” | 🌟🌟🌟🌟 |

## 11. Divide / Greedy / DP Hybrids and Boundary Awareness
| 觀念 | IOI importance |
|---|---|
| divide-and-conquer + merge counting | 🌟🌟🌟🌟 |
| greedy + data structure | 🌟🌟🌟🌟🌟 |
| DP + preprocessing / optimization technique | 🌟🌟🌟🌟🌟 |
| graph + DP hybrid awareness | 🌟🌟🌟🌟 |
| tree + DP + DS hybrid awareness | 🌟🌟🌟 |
| recognizing when a problem is not “purely one paradigm” | 🌟🌟🌟🌟🌟 |
| solving by separating the paradigm layer from the implementation-technique layer | 🌟🌟🌟🌟🌟 |

## 12. Paradigm Selection Skill
| 觀念 | IOI importance |
|---|---|
| extracting constraints before choosing a paradigm | 🌟🌟🌟🌟🌟 |
| recognizing what the problem is asking you to optimize / count / construct / validate | 🌟🌟🌟🌟🌟 |
| identifying whether order, structure, or state is the dominant difficulty | 🌟🌟🌟🌟🌟 |
| choosing the simplest correct paradigm first | 🌟🌟🌟🌟🌟 |
| avoiding overengineering with advanced paradigms too early | 🌟🌟🌟🌟🌟 |
| distinguishing paradigm choice from data-structure / technique choice | 🌟🌟🌟🌟🌟 |
| recognizing when your current paradigm is failing and switching approach | 🌟🌟🌟🌟🌟 |
