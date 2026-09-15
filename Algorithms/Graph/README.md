# Graph

圖論筆記。總導航：[../README.md](../README.md) · 大綱：[IOI/05_Graph.md](../../IOI/05_Graph.md)

**寫作：** 故事直覺 → 對應名詞 → 手跑 → 模板。

## 資料夾怎麼看

```
Graph/
  ShortestPath/   最短路
  Topo/           拓撲序／DAG
  MST/            最小生成樹
  README.md       ← 你在這裡
```

## 建議閱讀順序

1. **最短路**（先搞懂「走路找最短」）
2. **DSU** → [../Data_Structure/DSU.md](../Data_Structure/DSU.md)（修路／連通會用到）
3. **MST**（最便宜連通）
4. **Topo**（課表／依賴順序；有環就 IMPOSSIBLE）

場上卡關：[../Paradigms/Contest-Thinking.md](../Paradigms/Contest-Thinking.md)

---

## 1. ShortestPath／最短路

| 檔案 | 何時用 |
|---|---|
| [Dijkstra.md](ShortestPath/Dijkstra.md) + [.cpp](ShortestPath/Dijkstra.cpp) | 邊權 ≥ 0、單源 |
| [BellmanFord.md](ShortestPath/BellmanFord.md) + [.cpp](ShortestPath/BellmanFord.cpp) | 可負、單源、找負環 |
| [FloydWarshall.md](ShortestPath/FloydWarshall.md) + [.cpp](ShortestPath/FloydWarshall.cpp) | 全點對、n 小 |

| 邊權／需求 | 用什麼 |
|---|---|
| 全是 1 | BFS（之後補） |
| 只有 0/1 | 0-1 BFS（之後補） |
| 正權、單源 | Dijkstra |
| 可負、單源 | Bellman-Ford |
| 全點對、n 小 | Floyd-Warshall |

## 2. Topo／拓撲與 DAG

| 檔案 | 內容 |
|---|---|
| [TopologicalSort.md](Topo/TopologicalSort.md) + [.cpp](Topo/TopologicalSort.cpp) | DAG + 拓撲序 + Kahn + DFS |

## 3. MST／最小生成樹

| 檔案 | 內容 |
|---|---|
| [MST.md](MST/MST.md) + [.cpp](MST/MST.cpp) | MST + Kruskal + Prim（Kruskal 用 DSU） |

## 之後

BFS／0-1 BFS、有向環（Round Trip II）、SCC、DAG DP 等。
