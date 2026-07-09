# String_Algorithms

### Target
### - IOI / TOI / Long-term CP foundation

---

## 1. String Fundamentals
| 觀念 | IOI importance |
|---|---|
| string as an array / sequence of characters | 🌟🌟🌟🌟🌟 |
| indexing discipline on strings | 🌟🌟🌟🌟🌟 |
| substring vs subsequence | 🌟🌟🌟🌟🌟 |
| prefix / suffix of a string | 🌟🌟🌟🌟🌟 |
| lexicographic order | 🌟🌟🌟🌟 |
| string comparison cost awareness | 🌟🌟🌟🌟 |
| character frequency / counting on strings | 🌟🌟🌟🌟 |
| converting string statements into array / prefix / DP style formulations | 🌟🌟🌟🌟🌟 |

## 2. Basic String Processing Patterns
| 觀念 | IOI importance |
|---|---|
| scanning a string left to right | 🌟🌟🌟🌟🌟 |
| two pointers / sliding window on strings | 🌟🌟🌟🌟🌟 |
| prefix frequency / cumulative counts on strings | 🌟🌟🌟🌟 |
| matching / comparing segments by direct iteration | 🌟🌟🌟 |
| counting occurrences / transitions / blocks in a string | 🌟🌟🌟🌟 |
| run-length style grouping awareness | 🌟🌟🌟 |
| treating characters as states / symbols rather than text | 🌟🌟🌟🌟🌟 |

## 3. Hashing Foundations
| 觀念 | IOI importance |
|---|---|
| why rolling hash exists | 🌟🌟🌟🌟🌟 |
| polynomial rolling hash mental model | 🌟🌟🌟🌟 |
| prefix hash | 🌟🌟🌟🌟🌟 |
| substring hash in O(1) after preprocessing | 🌟🌟🌟🌟🌟 |
| power array preprocessing | 🌟🌟🌟🌟 |
| collision awareness | 🌟🌟🌟🌟🌟 |
| double hash awareness | 🌟🌟🌟🌟 |
| using hash for substring equality / palindrome / deduplication | 🌟🌟🌟🌟🌟 |

## 4. Prefix Function / KMP
| 觀念 | IOI importance |
|---|---|
| what the prefix function measures | 🌟🌟🌟🌟🌟 |
| longest proper prefix that is also suffix | 🌟🌟🌟🌟🌟 |
| failure-link style fallback intuition | 🌟🌟🌟🌟🌟 |
| building prefix function in linear time | 🌟🌟🌟🌟🌟 |
| KMP pattern matching | 🌟🌟🌟🌟🌟 |
| pattern + separator + text trick | 🌟🌟🌟🌟 |
| border / periodicity awareness from prefix function | 🌟🌟🌟🌟 |
| using prefix function beyond plain pattern matching | 🌟🌟🌟🌟 |

## 5. Z-Function
| 觀念 | IOI importance |
|---|---|
| what Z[i] means | 🌟🌟🌟🌟🌟 |
| Z-box mental model | 🌟🌟🌟🌟 |
| linear-time Z construction | 🌟🌟🌟🌟🌟 |
| pattern matching with Z | 🌟🌟🌟🌟 |
| prefix-match length queries awareness | 🌟🌟🌟🌟 |
| border / repetition / periodicity use cases | 🌟🌟🌟🌟 |
| KMP vs Z: same family, different viewpoint | 🌟🌟🌟🌟🌟 |

## 6. Pattern Matching Layer
| 觀念 | IOI importance |
|---|---|
| exact pattern matching | 🌟🌟🌟🌟🌟 |
| prefix function / KMP vs Z vs rolling hash selection | 🌟🌟🌟🌟🌟 |
| single-pattern matching vs many-query substring comparison | 🌟🌟🌟🌟🌟 |
| pattern matching under concatenation tricks | 🌟🌟🌟🌟 |
| recognizing when the problem is secretly “find occurrences of pattern structure” | 🌟🌟🌟🌟🌟 |
| distinguishing matching by direct scan, hash, KMP, trie, or suffix structure | 🌟🌟🌟🌟🌟 |

## 7. Periodicity / Border / Repetition Structure
| 觀念 | IOI importance |
|---|---|
| border of a string | 🌟🌟🌟🌟 |
| periodic string intuition | 🌟🌟🌟🌟 |
| smallest period awareness | 🌟🌟🌟🌟 |
| repetition / prefix-suffix overlap structure | 🌟🌟🌟🌟 |
| periodicity detection via prefix function / Z | 🌟🌟🌟🌟🌟 |
| reasoning about repeated blocks / compressibility | 🌟🌟🌟 |

## 8. Palindrome Tools
| 觀念 | IOI importance |
|---|---|
| palindrome basics | 🌟🌟🌟🌟 |
| center expansion | 🌟🌟🌟🌟 |
| palindrome DP awareness | 🌟🌟🌟 |
| rolling-hash-based palindrome checking | 🌟🌟🌟🌟 |
| Manacher awareness | 🌟🌟🌟 |
| odd / even palindrome handling | 🌟🌟🌟🌟 |
| longest / count / query palindromic substrings problem recognition | 🌟🌟🌟🌟 |

## 9. Trie
| 觀念 | IOI importance |
|---|---|
| trie as prefix tree | 🌟🌟🌟🌟🌟 |
| insert / search / prefix query | 🌟🌟🌟🌟🌟 |
| storing counts / endpoints / metadata in trie nodes | 🌟🌟🌟🌟 |
| trie for dictionary / prefix matching problems | 🌟🌟🌟🌟🌟 |
| binary trie awareness for XOR-style problems | 🌟🌟🌟🌟 |
| trie vs hash / set / sorting choice | 🌟🌟🌟🌟🌟 |

## 10. Suffix Array Awareness
| 觀念 | IOI importance |
|---|---|
| suffix array idea | 🌟🌟🌟 |
| sorting all suffixes conceptually | 🌟🌟🌟 |
| lexicographic order of suffixes | 🌟🌟🌟 |
| LCP awareness | 🌟🌟🌟 |
| substring / repeated substring / lexicographic query relevance | 🌟🌟🌟🌟 |
| when suffix array is the right abstraction | 🌟🌟🌟 |

## 11. LCP / String Ordering Structures
| 觀念 | IOI importance |
|---|---|
| longest common prefix between suffixes awareness | 🌟🌟🌟 |
| LCP array idea | 🌟🌟🌟 |
| RMQ-on-LCP awareness | 🌟🌟 |
| comparing substrings via rank / LCP awareness | 🌟🌟🌟 |
| repeated substring / distinct substring counting awareness | 🌟🌟🌟 |

## 12. Suffix Automaton Awareness
| 觀念 | IOI importance |
|---|---|
| suffix automaton as compressed substring-state machine | 🌟🌟 |
| endpos-style substring representation awareness | 🌟🌟 |
| counting distinct substrings awareness | 🌟🌟 |
| longest common substring style awareness | 🌟🌟 |
| when suffix automaton becomes relevant | 🌟🌟 |

## 13. Aho–Corasick Awareness
| 觀念 | IOI importance |
|---|---|
| multi-pattern matching motivation | 🌟🌟🌟 |
| trie + failure links idea | 🌟🌟🌟 |
| matching many patterns against one text | 🌟🌟🌟 |
| automaton-style string scanning | 🌟🌟🌟 |
| when AC automaton is better than repeated KMP | 🌟🌟🌟🌟 |

## 14. String DP Layer
| 觀念 | IOI importance |
|---|---|
| subsequence DP on strings | 🌟🌟🌟🌟 |
| edit / transform style DP awareness | 🌟🌟🌟🌟 |
| palindrome DP | 🌟🌟🌟 |
| DP on prefix of a string | 🌟🌟🌟🌟🌟 |
| automaton / pattern-state combined DP awareness | 🌟🌟🌟 |
| recognizing when a string problem is actually DP, not pure string matching | 🌟🌟🌟🌟🌟 |

## 15. String + Data Structure / Query Thinking
| 觀念 | IOI importance |
|---|---|
| many substring-equality queries → hashing mindset | 🌟🌟🌟🌟🌟 |
| many prefix queries → trie mindset | 🌟🌟🌟🌟🌟 |
| lexicographic / suffix-order questions → suffix-structure mindset | 🌟🌟🌟🌟 |
| online / dynamic string query awareness | 🌟🌟🌟 |
| string preprocessing for fast query answering | 🌟🌟🌟🌟🌟 |
| distinguishing one-time matching from heavy query workloads | 🌟🌟🌟🌟🌟 |

## 16. Binary-String / Bitstring Pattern Awareness
| 觀念 | IOI importance |
|---|---|
| treat binary string as ordinary string first | 🌟🌟🌟🌟 |
| treat binary string as bitmask / prefix-xor object when appropriate | 🌟🌟🌟🌟 |
| runs / blocks / alternation patterns | 🌟🌟🌟🌟 |
| binary string + DP / greedy / prefix transform crossover | 🌟🌟🌟🌟 |
| distinguishing “string problem” from “bitwise / combinatorics problem wearing a string costume” | 🌟🌟🌟🌟🌟 |

## 17. String Problem Modeling Skill
| 觀念 | IOI importance |
|---|---|
| recognizing substring vs subsequence vs prefix / suffix problem types | 🌟🌟🌟🌟🌟 |
| deciding whether the key structure is matching, repetition, lexicographic order, or query acceleration | 🌟🌟🌟🌟🌟 |
| choosing between direct processing, hash, KMP, Z, trie, suffix structure, or DP | 🌟🌟🌟🌟🌟 |
| recognizing when the problem is really graph / DP / combinatorics with string flavor | 🌟🌟🌟🌟🌟 |
| choosing the simplest sufficient string tool | 🌟🌟🌟🌟🌟 |
