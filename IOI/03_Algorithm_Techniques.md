# Algorithm_Techniques

### Target
### - IOI / TOI / Long-term CP foundation

---

## 1. Two Pointers and Window Control
| 觀念 | IOI importance |
|---|---|
| opposite-direction two pointers | 🌟🌟🌟🌟 |
| same-direction two pointers | 🌟🌟🌟🌟 |
| maintaining a valid interval | 🌟🌟🌟🌟🌟 |
| shrinking / expanding window discipline | 🌟🌟🌟🌟 |
| when two pointers is valid | 🌟🌟🌟🌟🌟 |
| when two pointers fails | 🌟🌟🌟🌟🌟 |
| converting nested scans into linear two-pointer process | 🌟🌟🌟🌟 |
| recognizing monotone movement of pointers | 🌟🌟🌟🌟🌟 |

## 2. Sliding Window
| 觀念 | IOI importance |
|---|---|
| fixed-size window | 🌟🌟🌟 |
| variable-size window | 🌟🌟🌟🌟 |
| window sum / count / frequency maintenance | 🌟🌟🌟🌟🌟 |
| longest valid subarray patterns | 🌟🌟🌟🌟🌟 |
| shortest valid subarray patterns | 🌟🌟🌟🌟 |
| sliding window with frequency / distinct-count tracking | 🌟🌟🌟🌟 |
| window + monotonic deque awareness | 🌟🌟🌟 |
| distinguishing sliding window from prefix / binary search solutions | 🌟🌟🌟🌟 |

## 3. Binary Search
| 觀念 | IOI importance |
|---|---|
| classic binary search on sorted arrays | 🌟🌟🌟🌟🌟 |
| lower_bound / upper_bound mental model | 🌟🌟🌟🌟🌟 |
| first true / last true template | 🌟🌟🌟🌟🌟 |
| invariant discipline | 🌟🌟🌟🌟🌟 |
| boundary bug patterns | 🌟🌟🌟🌟🌟 |
| binary search on index / value / position | 🌟🌟🌟🌟 |
| integer vs floating binary search awareness | 🌟🌟🌟 |
| proving monotonicity before searching | 🌟🌟🌟🌟🌟 |

## 4. Binary Search on Answer
| 觀念 | IOI importance |
|---|---|
| turning optimization into decision | 🌟🌟🌟🌟🌟 |
| designing a feasibility check | 🌟🌟🌟🌟🌟 |
| monotone predicate recognition | 🌟🌟🌟🌟🌟 |
| minimum feasible / maximum feasible patterns | 🌟🌟🌟🌟🌟 |
| common fake-monotonicity traps | 🌟🌟🌟🌟🌟 |
| search-space design for answer binary search | 🌟🌟🌟🌟🌟 |
| feasibility check + greedy / prefix / graph / DP combination awareness | 🌟🌟🌟🌟 |
| distinguishing “binary search on answer” from “direct greedy / DP solve” | 🌟🌟🌟🌟🌟 |

## 5. Prefix / Suffix Transformation Layer
| 觀念 | IOI importance |
|---|---|
| prefix best / suffix best | 🌟🌟🌟🌟 |
| prefix counts / prefix minima / prefix maxima | 🌟🌟🌟🌟🌟 |
| combining left-side and right-side information | 🌟🌟🌟🌟🌟 |
| remove-one / split-point style transformations | 🌟🌟🌟🌟 |
| prefix decomposition as DP support | 🌟🌟🌟🌟 |
| suffix preprocessing as future-information support | 🌟🌟🌟🌟 |
| prefix / suffix trick for “answer for every cut position” | 🌟🌟🌟🌟 |
| replacing repeated rescans with precomputed side information | 🌟🌟🌟🌟🌟 |

## 6. Difference / Range Marking / Accumulation Tricks
| 觀念 | IOI importance |
|---|---|
| difference array for repeated range updates | 🌟🌟🌟🌟 |
| reconstructing final values with prefix accumulation | 🌟🌟🌟🌟 |
| offline range contribution thinking | 🌟🌟🌟🌟 |
| event accumulation by sorted endpoints | 🌟🌟🌟🌟 |
| turning many updates into few sweeps | 🌟🌟🌟🌟🌟 |
| line-sweep style add / remove event accumulation | 🌟🌟🌟 |
| range marking as an alternative to explicit repeated simulation | 🌟🌟🌟🌟 |

## 7. Coordinate Compression
| 觀念 | IOI importance |
|---|---|
| why compression exists | 🌟🌟🌟🌟🌟 |
| preserving order while shrinking value range | 🌟🌟🌟🌟🌟 |
| compression with duplicates | 🌟🌟🌟🌟🌟 |
| compression for BIT / segtree / offline query | 🌟🌟🌟🌟🌟 |
| compression for sweep / interval endpoints | 🌟🌟🌟🌟 |
| reverse mapping awareness | 🌟🌟 |
| deciding whether compression is even necessary | 🌟🌟🌟🌟 |

## 8. Monotonicity and Feasibility Recognition
| 觀念 | IOI importance |
|---|---|
| what monotonicity means in contests | 🌟🌟🌟🌟🌟 |
| feasibility-check thinking | 🌟🌟🌟🌟🌟 |
| search-space design | 🌟🌟🌟🌟🌟 |
| recognizing hidden monotonicity | 🌟🌟🌟🌟🌟 |
| when binary search on answer is overkill | 🌟🌟🌟🌟 |
| monotonicity from sorted structure / prefix property / resource limit | 🌟🌟🌟🌟 |
| distinguishing true monotonicity from tempting fake pattern | 🌟🌟🌟🌟🌟 |

## 9. Sweep / Offline / Event Thinking
| 觀念 | IOI importance |
|---|---|
| sort events by coordinate / time / value | 🌟🌟🌟🌟🌟 |
| answer queries offline | 🌟🌟🌟🌟🌟 |
| convert interval conditions into event contributions | 🌟🌟🌟🌟 |
| prefix data structure + sorted events | 🌟🌟🌟🌟🌟 |
| offline counting patterns | 🌟🌟🌟🌟 |
| active-set / active-interval sweep thinking | 🌟🌟🌟🌟 |
| sorting by one dimension to process another dimension | 🌟🌟🌟🌟🌟 |
| choosing offline over online for simplification | 🌟🌟🌟🌟🌟 |

## 10. Meet-in-the-Middle
| 觀念 | IOI importance |
|---|---|
| splitting search space into two halves | 🌟🌟🌟 |
| subset-sum / subset-state meet-in-the-middle | 🌟🌟🌟 |
| generating half results then combining | 🌟🌟🌟 |
| sort one side / binary search one side combination | 🌟🌟🌟 |
| when \(2^n\) brute force becomes feasible via half-splitting | 🌟🌟🌟🌟 |
| distinguishing meet-in-the-middle from DP / bitmask DP | 🌟🌟🌟 |

## 11. K-th / Best-First / Candidate Generation Techniques
| 觀念 | IOI importance |
|---|---|
| heap-based best-first generation intuition | 🌟🌟🌟 |
| K-th answer thinking | 🌟🌟🌟 |
| counting ≤ X as an answer-search pattern | 🌟🌟🌟🌟 |
| merging sorted candidate streams | 🌟🌟🌟 |
| generating next best candidate without enumerating everything | 🌟🌟🌟 |
| when to think heap vs binary search counting | 🌟🌟🌟🌟 |

## 12. Greedy-Support Techniques
| 觀念 | IOI importance |
|---|---|
| sorting to enable greedy decisions | 🌟🌟🌟🌟🌟 |
| using heap / set to maintain current best greedy candidate | 🌟🌟🌟🌟 |
| interval sorting + greedy selection pattern awareness | 🌟🌟🌟🌟 |
| “process in some order” as a technique-level greedy support idea | 🌟🌟🌟🌟 |
| proving why a local-choice-supporting transformation is valid | 🌟🌟🌟🌟 |

## 13. DP-Support Techniques
| 觀念 | IOI importance |
|---|---|
| prefix sums to accelerate DP transitions | 🌟🌟🌟🌟 |
| preprocessing transition candidates | 🌟🌟🌟🌟 |
| sorting / coordinate compression before DP | 🌟🌟🌟🌟 |
| using monotonicity / order to simplify DP state transitions | 🌟🌟🌟 |
| separating “DP core idea” from “technique used to optimize transition” | 🌟🌟🌟🌟🌟 |

## 14. Graph-Support Techniques
| 觀念 | IOI importance |
|---|---|
| coordinate compression before graph construction | 🌟🌟🌟 |
| offline edge / query ordering awareness | 🌟🌟🌟 |
| binary search on answer + graph feasibility check | 🌟🌟🌟 |
| transforming constraints into edges via sorting / sweep | 🌟🌟🌟 |
| distinguishing graph modeling from pure technique transformation | 🌟🌟🌟🌟 |

## 15. Technique Composition Skill
| 觀念 | IOI importance |
|---|---|
| binary search + greedy | 🌟🌟🌟🌟🌟 |
| binary search + prefix / difference / DS feasibility check | 🌟🌟🌟🌟🌟 |
| sweep + BIT / segtree | 🌟🌟🌟🌟🌟 |
| coordinate compression + DS / sweep / interval processing | 🌟🌟🌟🌟🌟 |
| prefix preprocessing + DP / greedy / query answering | 🌟🌟🌟🌟🌟 |
| offline sorting + DSU / BIT / graph processing | 🌟🌟🌟🌟 |
| recognizing when the solution is “not one trick but a composition” | 🌟🌟🌟🌟🌟 |

## 16. Technique Selection Skill
| 觀念 | IOI importance |
|---|---|
| recognizing “scan every time” as a red flag | 🌟🌟🌟🌟🌟 |
| distinguishing two pointers vs binary search vs prefix preprocessing | 🌟🌟🌟🌟🌟 |
| distinguishing online vs offline approach | 🌟🌟🌟🌟🌟 |
| recognizing when DS is needed and when a technique alone is enough | 🌟🌟🌟🌟🌟 |
| choosing the simplest sufficient transformation | 🌟🌟🌟🌟🌟 |
| distinguishing paradigm choice from technique choice | 🌟🌟🌟🌟 |
| simplifying the problem before reaching for advanced machinery | 🌟🌟🌟🌟🌟 |
