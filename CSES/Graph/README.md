# CSES Graph

刷題程式（交題用）。**教學主文在** [Algorithms/Graph/](../../Algorithms/Graph/README.md)，不要把這裡當筆記庫。

只放 `.cpp`；編譯產物不要進版控（見根目錄 `.gitignore`）。

## 依主題分組

### 遍歷／連通／著色

| 題解 | 相關筆記 |
|---|---|
| [CountingRooms.cpp](CountingRooms.cpp) | 之後 BFS／DFS 專章 |
| [Labyrinth.cpp](Labyrinth.cpp) | 之後 BFS |
| [BuildingRoads.cpp](BuildingRoads.cpp) | [DSU](../../Algorithms/Data_Structure/DSU.md) |
| [MessageRoute.cpp](MessageRoute.cpp) | 之後 BFS |
| [BuildingTeams.cpp](BuildingTeams.cpp) | 二分圖／著色 |
| [RoundTrip.cpp](RoundTrip.cpp) | 無向找環 |
| [Monsters.cpp](Monsters.cpp) | 多源 BFS |

### 最短路

| 題解 | 相關筆記 |
|---|---|
| [ShortestRoutesI.cpp](ShortestRoutesI.cpp) | [Dijkstra](../../Algorithms/Graph/ShortestPath/Dijkstra.md) |
| [ShortestRoutesII.cpp](ShortestRoutesII.cpp) | [Floyd](../../Algorithms/Graph/ShortestPath/FloydWarshall.md) |
| [HighScore.cpp](HighScore.cpp) | [Bellman-Ford](../../Algorithms/Graph/ShortestPath/BellmanFord.md)（最長路／負環思維） |
| [FlightDiscounts.cpp](FlightDiscounts.cpp) | Dijkstra 狀態擴展 |
| [FlightRoutes.cpp](FlightRoutes.cpp) | 最短路變體 |
| [CycleFinding.cpp](CycleFinding.cpp) | [Bellman-Ford](../../Algorithms/Graph/ShortestPath/BellmanFord.md) 負環還原 |

### 有向環／拓撲

| 題解 | 相關筆記 |
|---|---|
| [RoundTripII.cpp](RoundTripII.cpp) | 有向三色找環；見 [Topo](../../Algorithms/Graph/Topo/TopologicalSort.md) 判環段 |
| [CourseSchedule.cpp](CourseSchedule.cpp) | [Topological Sort](../../Algorithms/Graph/Topo/TopologicalSort.md) |
