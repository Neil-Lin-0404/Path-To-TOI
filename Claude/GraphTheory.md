# 圖論刷題全攻略：心法 + 工具箱 + 刷題路線

> 目標：不只是背演算法，而是練出「看到題目 → 判斷是不是圖 → 選對演算法 → 寫出來」的完整流程。

---

## Part 1：心法 — 怎麼「看出」這是圖論題

多數圖論題目**不會直接告訴你「這是一張圖」**。就像 Hoofball 這題，表面看起來只是「排序 + 找最近的人」，你要自己把它翻譯成 node 和 edge（每頭牛是 node，丟球對象是 edge）。

這個「翻譯」的能力，是圖論刷題裡最重要、卻最少人練習的一環。拿到新題目，先問自己：

- 題目裡有沒有東西之間存在「關聯 / 指向 / 依賴 / 轉移」的關係？→ 那些東西是 node，關係是 edge。
- 能不能把「狀態」當 node、「操作」當 edge？（例如：把每個棋盤局面當 node，一步棋當 edge → 就能用 BFS 找最少步數。這個技巧會延伸出大量「圖論 + DP」混合題）
- 出現這些關鍵字時要提高警覺：
  - 「最少要走幾步 / 操作幾次」→ 通常是 BFS 或最短路
  - 「能不能全部連起來 / 分成幾群」→ 連通性、DSU
  - 「照順序完成所有事，滿足先後關係」→ 拓樸排序（暗示是 DAG）
  - 「繞一圈回到自己」→ cycle detection
  - 「兩邊分組不能衝突」→ bipartite check

---

## Part 2：拿到題目先填的 checklist

動手寫 code 之前，先把這張表填完：

| 問題 | 為什麼重要 |
|---|---|
| Directed 還是 Undirected？ | 決定 cycle detection、SCC 演算法要用哪一套 |
| 有沒有權重（weighted）？ | 沒權重用 BFS 就好；有權重才需要 Dijkstra |
| 有沒有負權邊？ | 有負邊 Dijkstra 會錯，要用 Bellman-Ford |
| 保證是 Tree / DAG，還是 general graph？ | Tree 有專屬技巧（LCA、直徑、樹上 DP）；DAG 可以拓樸排序 |
| 保證 connected，還是可能不連通？ | 決定要不要對每個 connected component 分別處理 |
| n、m 大小？ | 決定演算法複雜度上限（例如 n≤1000 可以 O(n²)，n≤1e5 就要 O(n log n)） |

像 Hoofball 這題，特殊之處在於：directed、每個點出度恰好 1（functional graph）、圖形被證明只會是「鏈 + 一個長度 2 的環」——這些性質都是看完題目分析出來的，不是一眼就寫在題目上的。

---

## Part 3：工具箱總覽 — 依「目標」查演算法

| 你想達成什麼 | 用什麼 |
|---|---|
| 走訪整張圖 / 找 connected components | DFS、BFS、DSU（Union-Find） |
| 最短路（無權重） | BFS |
| 最短路（有權重、無負邊） | Dijkstra |
| 最短路（有負邊，無負環） | Bellman-Ford |
| 所有點對最短路（n 很小，如 ≤500） | Floyd-Warshall |
| 依賴關係排序（只在 DAG 上） | 拓樸排序（Kahn's 或 DFS 後序反轉） |
| 花最少成本連通所有點 | 最小生成樹 MST（Kruskal / Prim） |
| 偵測有沒有環 | Directed：三色 DFS；Undirected：DSU 或 parent-tracking DFS |
| 能不能分成兩組不衝突 | Bipartite check（BFS/DFS 二染色） |
| 找「互相可達」的一群點 | 強連通分量 SCC（Tarjan / Kosaraju） |
| 每個點出度恰好 1 的特殊圖 | Functional graph：先算 in-degree，形狀一定是「森林 + 環」 |
| 樹上兩點最近共同祖先 | LCA（倍增法 / Tarjan 離線） |

---

## Part 4：核心 Implementation Templates（C++）

### DFS（遞迴）
```cpp
vector<int> adj[MAXN];
bool visited[MAXN];

void dfs(int u) {
    visited[u] = true;
    // 在這裡處理 u
    for (int v : adj[u]) {
        if (!visited[v]) dfs(v);
    }
}
```
⚠️ n 很大（例如 > 10^5）時遞迴可能 stack overflow，要改成用 stack 手動模擬的迭代版本。

### BFS
```cpp
vector<int> adj[MAXN];
bool visited[MAXN];
int dist[MAXN];

void bfs(int start) {
    queue<int> q;
    q.push(start);
    visited[start] = true;
    dist[start] = 0;
    while (!q.empty()) {
        int u = q.front(); q.pop();
        for (int v : adj[u]) {
            if (!visited[v]) {
                visited[v] = true;
                dist[v] = dist[u] + 1;
                q.push(v);
            }
        }
    }
}
```

### DSU（Union-Find，路徑壓縮 + 按 rank 合併）
```cpp
int parent[MAXN], rnk[MAXN];

int find(int x) {
    if (parent[x] != x) parent[x] = find(parent[x]);
    return parent[x];
}

void unite(int x, int y) {
    x = find(x); y = find(y);
    if (x == y) return;
    if (rnk[x] < rnk[y]) swap(x, y);
    parent[y] = x;
    if (rnk[x] == rnk[y]) rnk[x]++;
}
```

### Dijkstra（priority_queue 版）
```cpp
vector<pair<int,int>> adj[MAXN]; // {neighbor, weight}
int dist[MAXN];

void dijkstra(int start, int n) {
    fill(dist, dist + n, INT_MAX);
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<>> pq;
    dist[start] = 0;
    pq.push({0, start});
    while (!pq.empty()) {
        auto [d, u] = pq.top(); pq.pop();
        if (d > dist[u]) continue; // 過時的資料，跳過
        for (auto [v, w] : adj[u]) {
            if (dist[u] + w < dist[v]) {
                dist[v] = dist[u] + w;
                pq.push({dist[v], v});
            }
        }
    }
}
```

### 拓樸排序（Kahn's algorithm，BFS 版）
```cpp
vector<int> adj[MAXN];
int indeg[MAXN];

vector<int> topoSort(int n) {
    queue<int> q;
    for (int i = 0; i < n; i++)
        if (indeg[i] == 0) q.push(i);

    vector<int> order;
    while (!q.empty()) {
        int u = q.front(); q.pop();
        order.push_back(u);
        for (int v : adj[u]) {
            if (--indeg[v] == 0) q.push(v);
        }
    }
    return order; // order.size() < n 代表有環，無法拓樸排序
}
```

### Cycle Detection（Directed graph，三色 DFS）
```cpp
int color[MAXN]; // 0=white(未訪問), 1=gray(在目前路徑上), 2=black(已完成)
bool hasCycle = false;

void dfs(int u) {
    color[u] = 1;
    for (int v : adj[u]) {
        if (color[v] == 1) hasCycle = true;      // 指回目前路徑上的點 → 環
        else if (color[v] == 0) dfs(v);
    }
    color[u] = 2;
}
```

### Kruskal MST（搭配 DSU）
```cpp
struct Edge { int u, v, w; };
vector<Edge> edges;

sort(edges.begin(), edges.end(), [](Edge a, Edge b){ return a.w < b.w; });
int totalWeight = 0, edgesUsed = 0;
for (auto& e : edges) {
    if (find(e.u) != find(e.v)) {
        unite(e.u, e.v);
        totalWeight += e.w;
        edgesUsed++;
    }
}
```

---

## Part 5：通用解題 SOP

1. **定義清楚 node 是什麼、edge 是什麼**（有沒有方向？有沒有權重？）
2. **回答 Part 2 的 checklist**（directed/undirected、weighted、cyclic、tree/DAG/general、connected、n 和 m 大小）
3. **對照 Part 3 的表，決定目標對應哪個演算法**
4. **確認複雜度符合 n、m 的限制**（避免選到會 TLE 的演算法）
5. **寫 code，特別注意 edge case**：自環（self-loop）、重邊（multi-edge）、圖不連通（要跑多次 DFS/BFS）、多個起點同時出發（像 0/1 BFS 或多源 BFS）

---

## Part 6：刷題路線建議

**基礎（先練到不假思索）**
- DFS / BFS 走訪、connected components
- 簡單 DSU（判斷兩點是否連通）
- Grid 上的 BFS（當成隱含的圖）

**進階**
- Dijkstra、0/1 BFS（邊權只有 0 或 1 時可以用 deque 加速）
- 拓樸排序、判斷 DAG
- Bipartite check
- Cycle detection（directed / undirected 兩種寫法都要會）
- Functional graph（像 Hoofball 這種每點出度為 1 的特殊結構）
- MST（Kruskal / Prim）

**更進階**
- SCC（Tarjan / Kosaraju）
- LCA、樹的直徑、樹上 DP、re-rooting 技巧
- Floyd-Warshall、Bellman-Ford（含負環偵測）
- 圖論結合 DP（把狀態當 node 做 BFS/DFS）

**推薦資源**
- [USACO Guide](https://usaco.guide)：依 Bronze → Platinum 分級，圖論章節整理得很完整，適合搭配你在寫的 USACO 題目
- [cses.fi 的 Graph Algorithms 題組](https://cses.fi/problemset/)：大約 30 幾題，幾乎涵蓋上面所有套路，是很扎實的刷題清單
- [cp-algorithms.com](https://cp-algorithms.com)：查每個演算法的原理和證明

---

## 小提醒

真正拉開差距的不是「背了幾個演算法模板」，而是 **Part 1 和 Part 2 的判斷能力**——能不能在題目看起來完全不像圖論題的時候（像 Hoofball），還是把它拆解成 node/edge，並且推導出圖形本身的特殊性質（像「這張圖只會是鏈+2環」），進而找到不需要暴力 DFS 的捷徑解法。這種能力只能靠大量刷題累積，模板背熟只是基本功。