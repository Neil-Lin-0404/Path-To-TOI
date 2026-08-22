# Algorithms

費曼教學筆記 + 可跑模板。對齊 [IOI/](../IOI/) 主題拆法，但這裡寫「怎麼想、怎麼寫」，不是大綱星數表。

**卡關／連 WA／沒測資：** 先讀 [Paradigms/Contest-Thinking.md](Paradigms/Contest-Thinking.md)。

比賽專用筆記仍放 [NCKU/](../NCKU/)；刷題程式仍放 [CSES/](../CSES/) 等。

## 分類 ↔ IOI

| 目錄 | 對齊 | 狀態 |
|---|---|---|
| [Graph/](Graph/) | [IOI/05_Graph.md](../IOI/05_Graph.md) | 最短路三招合併 md 已寫 |
| [DP/](DP/) | [IOI/06_DP.md](../IOI/06_DP.md) | 之後補 |
| [Tree/](Tree/) | [IOI/02_Tree.md](../IOI/02_Tree.md) | 之後補 |
| [Data_Structure/](Data_Structure/) | [IOI/01_Data_Structure.md](../IOI/01_Data_Structure.md) | 之後補 |
| [String/](String/) | [IOI/08_String_Algorithms.md](../IOI/08_String_Algorithms.md) | 之後補 |
| [Geometry/](Geometry/) | [IOI/09_Geometry.md](../IOI/09_Geometry.md) | 之後補 |
| [Number_Theory/](Number_Theory/) | [IOI/07_Number_Theory.md](../IOI/07_Number_Theory.md) | 之後補 |
| [Sort/](Sort/) | Fundamentals / Techniques | 之後補 |
| [Paradigms/](Paradigms/) | [IOI/04_Algorithm_Paradigms.md](../IOI/04_Algorithm_Paradigms.md) | [Contest-Thinking](Paradigms/Contest-Thinking.md) 已寫 |

## Graph 最短路（主線：一算法一 md）

每份含：**直覺 + 演算法課理論 + 模板**。可編譯副本仍是旁邊的 `.cpp`。

1. [Dijkstra.md](Graph/Dijkstra.md) + [Dijkstra.cpp](Graph/Dijkstra.cpp) — 正權單源  
2. [BellmanFord.md](Graph/BellmanFord.md) + [BellmanFord.cpp](Graph/BellmanFord.cpp) — 可負單源、負環  
3. [FloydWarshall.md](Graph/FloydWarshall.md) + [FloydWarshall.cpp](Graph/FloydWarshall.cpp) — 全點對  

讀法：該份 md 從頭到尾 → 默寫模板 → 能講出正確性假設。

| 邊權 / 需求 | 用什麼 |
|---|---|
| 全是 1 | BFS |
| 只有 0/1 | 0-1 BFS |
| 正權、單源 | Dijkstra |
| 可負、單源 | Bellman-Ford |
| 全點對、n 小 | Floyd-Warshall |
