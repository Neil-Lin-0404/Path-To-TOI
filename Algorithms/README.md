# Algorithms

費曼教學筆記 + 可跑模板。對齊 [IOI/](../IOI/) 主題拆法，這裡寫「怎麼想、怎麼寫」。

| 先讀這個 | 用途 |
|---|---|
| [Paradigms/Contest-Thinking.md](Paradigms/Contest-Thinking.md) | 場上卡關／連 WA |
| [Graph/README.md](Graph/README.md) | 圖論主題索引（已分子資料夾） |
| [Data_Structure/README.md](Data_Structure/README.md) | 資料結構索引 |
| [CSES/](../CSES/) | 刷題程式（不是教學主文） |
| [NCKU/](../NCKU/) | 比賽／學校專用筆記 |

## 怎麼長內容（慣例）

1. **分 category**：圖 → `Graph/`，並查集 → `Data_Structure/`…  
2. **Graph 再分子主題**：`ShortestPath/`、`Topo/`、`MST/`，不要全部平鋪在一層。  
3. **一主題一主檔**：`Xxx.md`（故事 → 名詞 → 手跑 → 模板）+ 旁邊 `Xxx.cpp`。  
4. **六歲標準**：沒學過競程也能懂直覺段；術語後出現並白話翻譯。  
5. **太薄就合併**；category／主題 README **只當索引**。

## 分類 ↔ IOI

| 目錄 | 對齊 | 狀態 |
|---|---|---|
| [Graph/](Graph/) | [IOI/05_Graph.md](../IOI/05_Graph.md) | ShortestPath + Topo + MST |
| [Data_Structure/](Data_Structure/) | [IOI/01_Data_Structure.md](../IOI/01_Data_Structure.md) | DSU |
| [Paradigms/](Paradigms/) | [IOI/04_Algorithm_Paradigms.md](../IOI/04_Algorithm_Paradigms.md) | Contest-Thinking |
| [DP/](DP/) · [Tree/](Tree/) · [String/](String/) · [Geometry/](Geometry/) · [Number_Theory/](Number_Theory/) · [Sort/](Sort/) | 對應 IOI 各章 | 之後補 |

## 快速連結（已寫）

**Graph**

- [Dijkstra](Graph/ShortestPath/Dijkstra.md) · [Bellman-Ford](Graph/ShortestPath/BellmanFord.md) · [Floyd](Graph/ShortestPath/FloydWarshall.md)
- [Topological Sort](Graph/Topo/TopologicalSort.md)
- [MST（Kruskal／Prim）](Graph/MST/MST.md)

**Data Structure**

- [DSU（含 Ackermann／α）](Data_Structure/DSU.md)

讀法：該份 md 從頭到尾 → 默寫模板 → 能用自己的話講故事。
