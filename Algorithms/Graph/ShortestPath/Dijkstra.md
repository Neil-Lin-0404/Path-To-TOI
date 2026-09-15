# Dijkstra

> 可編譯副本：[Dijkstra.cpp](Dijkstra.cpp)  
> 對照：[BellmanFord.md](BellmanFord.md) · [FloydWarshall.md](FloydWarshall.md)  
> 卡關心法：[../../Paradigms/Contest-Thinking.md](../../Paradigms/Contest-Thinking.md)

---

## 1. 一句話＋何時用

從**單一起點**算到各點的最短路。規則：永遠先處理「目前 dist 最小」的點，再用它鬆弛鄰居。

**假設：所有邊權 ≥ 0。**

| 情況 | 用什麼 |
|---|---|
| 邊權全是 1 | BFS |
| 邊權只有 0/1 | 0-1 BFS |
| **正權、單源** | **Dijkstra** |
| 可負、單源 | [Bellman-Ford](BellmanFord.md) |
| 全點對、n 小 | [Floyd](FloydWarshall.md) |

---

## 2. 直覺（費曼）

### 名詞（先對齊）

| 東西 | 存在哪 | 會不會被改？ |
|---|---|---|
| **邊權** w | `graph[u]` 的 `.second` | 不會 |
| **距離** dist[u] | `dist` 陣列 | 會：從起點到 u 的邊權加總最小值 |

沒有「點權」。更新的永遠是 `dist[v]`，不是邊。

```
dist[v] = min(dist[v], dist[u] + w)
```

### 為什麼不是 BFS

BFS 假設「先走到的比較近」——只在邊權全是 1 時成立。

```
      2         10
  1 -----> 2 -----> 4
   \       |       /
    \ 5    | 1    / 1
     \     v     /
      ----> 3 --
```

`1→3→4` 步數少但花費 6；`1→2→3→4` 花費 **4**。

### 過期狀態

堆不能刪舊資料。取出 `{d,u}` 時若 `d > dist[u]` → 舊便條，`continue`。

### 手跑

輸入：`4 5` + 邊 `1-2:2, 1-3:5, 2-3:1, 2-4:10, 3-4:1`，起點 1。  
答案：`0 2 3 4`。

---

## 3. 理論（演算法課深度）

### 3.1 問題形式化

- 有向圖（或無向當雙向）G = (V, E)，邊權 w ≥ 0，起點 s。
- 目標：對每個點 v，求 δ(s,v) = 從 s 到 v 的最短路徑權重和（不可達則 ∞）。

### 3.2 鬆弛引理

若 `dist[u]` 已是 δ(s,u)，且有邊 u → v，則  
`dist[u] + w(u,v)` 是 δ(s,v) 的上界；鬆弛不會把 dist 改得比真答案更小（**非負時**）。

### 3.3 核心不變量（正確性）

把點分成：

- S：已「定案」的點（第一次以當前最小 dist 從堆取出、且非過期）
- 其餘未定案

**命題：** 每次把 u 定案時，`dist[u] = δ(s,u)`。

**證明大綱（反證）：**

1. 定案順序按 dist 非降（小根堆）。
2. 假設 u 是第一個「定案時 `dist[u] > δ(s,u)`」的點。
3. 取一條 s ⇝ u 最短路徑；看這條路上「剛離開 S」的第一條邊 x → y（x ∈ S，y ∉ S）。
4. 因邊權 ≥ 0：δ(s,y) ≤ δ(s,x) + w(x,y) = `dist[x] + w`，且 y 在最短路上所以 δ(s,y) ≤ δ(s,u) < `dist[u]`。
5. x 已定案時應已鬆弛過 x → y，故 `dist[y] ≤ dist[x] + w = δ(s,y)`，因此 `dist[y] = δ(s,y) < dist[u]`。
6. 但堆應先取出更小的 y 而非 u，矛盾。

**競程意義：** 「第一次取出就定案」——正權時成立；負權時第 4 步「路徑前綴更短」可被負邊打破。

### 3.4 負邊哪裡爆

反例：s → a 權 1，s → b 權 100，b → a 權 -100。  
可能先定案 a（dist=1），之後發現經 b 更短。不變量「定案後不再變」假。  
→ 改用 [Bellman-Ford](BellmanFord.md)。

### 3.5 複雜度

- Binary heap（常用）：約 O((n+m) log n)；同一點可多次入堆，實際跟堆操作次數有關。
- 稠密圖 m = Θ(n²)：可到 O(n² log n)；有時 dense 用 O(n²) 朴素版。
- **選讀：** Fibonacci heap 理論 O(m + n log n)；競程幾乎不用手寫。

### 3.6 空間

鄰接表 O(n+m)，dist／堆 O(n)～O(m)。

---

## 4. 模板

輸入：`n m`，點 `1..n`，起點 `1`；接著 `m` 行 `u v w`（有向）；輸出各點距離，不可達 `-1`。

```cpp
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<pair<int, int>>> graph(n + 1);
    for (int i = 0; i < m; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        graph[u].push_back({v, w});
        // 無向：graph[v].push_back({u, w});
    }

    const long long INF = 4e18;
    vector<long long> dist(n + 1, INF);
    dist[1] = 0;

    priority_queue<pair<long long, int>,
                   vector<pair<long long, int>>,
                   greater<pair<long long, int>>>
        pq;
    pq.push({0, 1});

    while (!pq.empty())
    {
        auto [d, u] = pq.top();
        pq.pop();
        if (d > dist[u])
            continue;
        for (auto [v, w] : graph[u])
        {
            if (dist[v] > dist[u] + w)
            {
                dist[v] = dist[u] + w;
                pq.push({dist[v], v});
            }
        }
    }

    for (int i = 1; i <= n; i++)
    {
        if (dist[i] == INF)
            cout << -1;
        else
            cout << dist[i];
        cout << (i == n ? '\n' : ' ');
    }
}
```

---

## 5. 競程要帶走／選讀

**帶走：**

1. 只改 `dist`；式子 `dist[v]=min(dist[v], dist[u]+w)`。  
2. 正權才能「取出即定案」；必寫過期判斷。  
3. 單源正權優先 Dijkstra，比 BF 快。

**選讀：** 勢函數／Johnson（把負權轉正再跑多次 Dijkstra）；狀態圖 `(u,mask)` 仍是同一套 Dijkstra。
