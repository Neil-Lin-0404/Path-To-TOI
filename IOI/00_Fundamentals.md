# Fundamentals

### Target
### - IOI / TOI / Long-term CP foundation

---

## 1. Complexity, Constraints, and Feasibility Sense
| 觀念 | IOI importance |
|---|---|
| Big-O and growth rate | 🌟🌟🌟🌟🌟 |
| amortized complexity awareness | 🌟🌟🌟🌟 |
| estimating feasible complexity from constraints | 🌟🌟🌟🌟🌟 |
| time vs memory tradeoff basics | 🌟🌟🌟🌟 |
| recognizing when brute force is still okay | 🌟🌟🌟🌟🌟 |
| recognizing when optimization is required | 🌟🌟🌟🌟🌟 |
| rough operation-count estimation under time limits | 🌟🌟🌟🌟🌟 |
| recognizing hidden \(n^2\), \(n \log n\), \(2^n\), \(n!\) growth risks | 🌟🌟🌟🌟🌟 |
| multi-testcase complexity budgeting | 🌟🌟🌟🌟 |
| choosing complexity target before coding | 🌟🌟🌟🌟🌟 |

## 2. Arrays, Vectors, and Core Iteration
| 觀念 | IOI importance |
|---|---|
| array / vector mental model | 🌟🌟🌟🌟🌟 |
| traversal patterns | 🌟🌟🌟🌟🌟 |
| forward / backward traversal | 🌟🌟🌟🌟 |
| simultaneous multi-array traversal | 🌟🌟🌟🌟 |
| indexing discipline | 🌟🌟🌟🌟🌟 |
| 0-index vs 1-index conversion discipline | 🌟🌟🌟🌟🌟 |
| in-place modification awareness | 🌟🌟🌟🌟 |
| frequency counting with arrays | 🌟🌟🌟🌟 |
| marking / visited / state arrays | 🌟🌟🌟🌟🌟 |
| sentinel / padding awareness | 🌟🌟🌟 |

## 3. Simulation and State Tracking
| 觀念 | IOI importance |
|---|---|
| translating problem statements into state updates | 🌟🌟🌟🌟🌟 |
| maintaining counters / flags / positions / states | 🌟🌟🌟🌟🌟 |
| event-by-event simulation | 🌟🌟🌟🌟🌟 |
| multi-variable simulation | 🌟🌟🌟🌟 |
| turn-based / round-based simulation | 🌟🌟🌟 |
| state reset discipline | 🌟🌟🌟🌟 |
| invariant thinking in simulation | 🌟🌟🌟🌟 |
| simulation with ordering constraints | 🌟🌟🌟🌟 |
| simulation + sorting combined problems | 🌟🌟🌟🌟 |
| recognizing when “just simulate carefully” is the intended solve | 🌟🌟🌟🌟🌟 |

## 4. Sorting and Ordering Power
| 觀念 | IOI importance |
|---|---|
| why sorting changes problems | 🌟🌟🌟🌟🌟 |
| sorting numbers / pairs / structs | 🌟🌟🌟🌟🌟 |
| comparator basics | 🌟🌟🌟🌟 |
| lexicographic order awareness | 🌟🌟🌟 |
| tie-breaking awareness | 🌟🌟🌟🌟 |
| stability awareness | 🌟🌟🌟 |
| common sorting-based transformations | 🌟🌟🌟🌟🌟 |
| sorting + greedy connection awareness | 🌟🌟🌟🌟🌟 |
| sorting + sweep / offline awareness | 🌟🌟🌟🌟 |
| partial sorting / top-k awareness | 🌟🌟🌟 |

## 5. Prefix Preprocessing Foundations
| 觀念 | IOI importance |
|---|---|
| prefix sum | 🌟🌟🌟🌟🌟 |
| suffix sum awareness | 🌟🌟🌟🌟 |
| prefix minimum / maximum | 🌟🌟🌟🌟 |
| prefix frequency / cumulative counting | 🌟🌟🌟🌟 |
| 2D prefix sum basics | 🌟🌟🌟🌟 |
| difference array intuition | 🌟🌟🌟🌟 |
| reconstructing values from difference accumulation | 🌟🌟🌟🌟 |
| when preprocessing beats repeated scanning | 🌟🌟🌟🌟🌟 |
| prefix preprocessing for query-heavy problems | 🌟🌟🌟🌟🌟 |
| prefix / suffix combination thinking | 🌟🌟🌟🌟 |

## 6. Searching in Ordered Data
| 觀念 | IOI importance |
|---|---|
| classic binary search on sorted arrays | 🌟🌟🌟🌟🌟 |
| lower_bound / upper_bound mental model | 🌟🌟🌟🌟🌟 |
| first true / last true template awareness | 🌟🌟🌟🌟🌟 |
| boundary discipline in binary search | 🌟🌟🌟🌟🌟 |
| searching in sorted pairs / tuples | 🌟🌟🌟 |
| binary search as “search in monotone answer space” preview | 🌟🌟🌟🌟 |
| recognizing when ordered structure enables logarithmic search | 🌟🌟🌟🌟 |
| binary-search bug patterns | 🌟🌟🌟🌟🌟 |

## 7. Recursion, Enumeration, and Brute Force Foundations
| 觀念 | IOI importance |
|---|---|
| recursion mental model | 🌟🌟🌟🌟 |
| recursive function call tree awareness | 🌟🌟🌟 |
| recursive enumeration | 🌟🌟🌟 |
| subset / permutation / decision enumeration basics | 🌟🌟🌟 |
| brute force as a legitimate strategy | 🌟🌟🌟🌟🌟 |
| pruning intuition | 🌟🌟🌟 |
| search-space size estimation | 🌟🌟🌟🌟 |
| recognizing when brute force is too large | 🌟🌟🌟🌟🌟 |
| backtracking preview | 🌟🌟 |
| recursion vs iterative implementation awareness | 🌟🌟🌟 |

## 8. Bitwise and Integer Handling Foundations
| 觀念 | IOI importance |
|---|---|
| binary representation basics | 🌟🌟🌟🌟 |
| bit operations: &, \|, ^, ~, <<, >> | 🌟🌟🌟🌟 |
| set / unset / toggle / test bit | 🌟🌟🌟🌟 |
| bitmask intuition | 🌟🌟🌟🌟 |
| powers of two awareness | 🌟🌟🌟🌟 |
| integer overflow / long long discipline | 🌟🌟🌟🌟🌟 |
| signed vs unsigned awareness | 🌟🌟 |
| modulo with negative numbers awareness | 🌟🌟🌟 |
| useful low-level arithmetic tricks | 🌟🌟🌟 |
| popcount / lowbit awareness | 🌟🌟🌟 |

## 9. Mathematical / Numerical Implementation Basics
| 觀念 | IOI importance |
|---|---|
| floor / ceil behavior awareness | 🌟🌟🌟🌟 |
| integer division pitfalls | 🌟🌟🌟🌟🌟 |
| remainder / modulo implementation discipline | 🌟🌟🌟🌟 |
| safe multiplication / safe midpoint style awareness | 🌟🌟🌟🌟 |
| absolute value / sign handling | 🌟🌟🌟 |
| range overflow awareness in formulas | 🌟🌟🌟🌟🌟 |
| floating-point precision caution awareness | 🌟🌟 |
| comparing doubles carefully awareness | 🌟 |
| algebraic simplification before implementation | 🌟🌟🌟🌟 |

## 10. Input / Output and Implementation Mechanics
| 觀念 | IOI importance |
|---|---|
| reading arrays / pairs / graphs cleanly | 🌟🌟🌟🌟🌟 |
| fast I/O awareness | 🌟🌟🌟🌟 |
| testcase loop discipline | 🌟🌟🌟🌟 |
| local helper function extraction | 🌟🌟🌟 |
| keeping implementation modular enough to debug | 🌟🌟🌟🌟 |
| output formatting discipline | 🌟🌟🌟🌟 |
| resetting global / static structures between testcases | 🌟🌟🌟🌟 |
| separating preprocessing / solve / output stages | 🌟🌟🌟🌟 |

## 11. Contest Debugging Discipline
| 觀念 | IOI importance |
|---|---|
| dry-run discipline | 🌟🌟🌟🌟🌟 |
| edge-case checklist | 🌟🌟🌟🌟🌟 |
| tiny-case manual testing | 🌟🌟🌟🌟🌟 |
| brute-force checker mindset for small cases | 🌟🌟🌟🌟 |
| off-by-one debugging | 🌟🌟🌟🌟🌟 |
| invalid-state / impossible-case checking | 🌟🌟🌟🌟 |
| assertion mindset for invariants | 🌟🌟🌟 |
| printing intermediate states strategically | 🌟🌟🌟🌟 |
| debugging by isolating one module at a time | 🌟🌟🌟🌟 |
| distinguishing logic bug vs implementation bug | 🌟🌟🌟🌟🌟 |

## 12. Core Problem-Solving Meta Skills
| 觀念 | IOI importance |
|---|---|
| extracting constraints before thinking about algorithm | 🌟🌟🌟🌟🌟 |
| identifying input size as the first algorithm clue | 🌟🌟🌟🌟🌟 |
| separating statement facts from implementation details | 🌟🌟🌟🌟 |
| turning a statement into variables / states / transitions | 🌟🌟🌟🌟🌟 |
| recognizing repeated work as a preprocessing / DP / DS signal | 🌟🌟🌟🌟🌟 |
| recognizing graph structure hidden in a problem | 🌟🌟🌟🌟 |
| recognizing “ordering matters” as a sorting / greedy / DP clue | 🌟🌟🌟🌟 |
| choosing the simplest correct approach first | 🌟🌟🌟🌟🌟 |
| checking whether a simpler O(n) / O(n log n) approach exists before overbuilding | 🌟🌟🌟🌟🌟 |
| building feasibility sense before implementation | 🌟🌟🌟🌟🌟 |
