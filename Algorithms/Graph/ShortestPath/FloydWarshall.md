# Floyd-Warshall

> 可編譯副本：[FloydWarshall.cpp](FloydWarshall.cpp)  
> 對照：[Dijkstra.md](Dijkstra.md) · [BellmanFord.md](BellmanFord.md)  
> 卡關心法：[../../Paradigms/Contest-Thinking.md](../../Paradigms/Contest-Thinking.md)

---

## 1. 一句話＋何時用

算**每一對** i → j 的最短路。允許負邊；n 大約 ≤ 400～500。

| 情況 | 用什麼 |
|---|---|
| 正權、單源 | [Dijkstra](Dijkstra.md) |
| 可負、單源 | [Bellman-Ford](BellmanFord.md) |
| **全點對、n 小** | **Floyd-Warshall** |

核心式：

```
dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j])
```

筆記本是**二維**；直接邊寫進矩陣後，迴圈只改「路徑和」。

---

## 2. 直覺（費曼）

### 經不經由 k？

從 i 到 j：要不經 k 的舊路，對上「先到 k 再到 j」。誰便宜用誰。

`k` 從 1 增到 n：允許的中繼集合越來越大；跑完 = 中繼可為任意點。

### 手跑（與 Dijkstra 同圖）

初始化後 `dist[1][3]=5`。  
`k=2`：`dist[1][3]=min(5,2+1)=3`。  
`k=3`：`dist[1][4]=min(12,3+1)=4`。  
從 1 出發那列：`0 2 3 4`，同時得到整張表。

### 負環

某 `dist[i][i] < 0` → 從 i 走一圈回到自己變便宜。

---

## 3. 理論（演算法課深度）

### 3.1 問題形式化

全點對最短路。無從 i 可達的負環時，`dist[i][j]` 應等於 δ(i,j)。

### 3.2 DP 狀態

定義 d_k(i,j) = 從 i 到 j、**內部中繼點只允許屬於 {1, 2, …, k}** 的最短路徑長。  
（端點 i、j 本身可不在該集合。）

- 基底 d_0(i,j)：無內部中繼 = 直接邊權（或 0 若 i = j，無邊則 ∞）。
- 轉移：

```
d_k(i,j) = min( d_{k-1}(i,j) , d_{k-1}(i,k) + d_{k-1}(k,j) )
```

  要不使用中繼 k，要嘛路徑在 k 切開成兩段（兩段的中繼都 ≤ k-1）。

實作 in-place 用同一個 `dist[][]`，外層 k 遞增，等價於上述 DP。

### 3.3 正確性

對 k 歸納：d_k 定義成立。  
k = n 時中繼可為任意點 → 若無負環，即真正最短路。  
（有負環時「最短」可為 −∞；用對角線偵測。）

**競程意義：** 為什麼 `k` 必須在最外層——對應「中繼集合逐步放大」的不變量；亂改層順序會破 DP。

### 3.4 負環

若存在負環，對環上某點 i，允許足夠中繼後可有 d(i,i) < 0。  
檢查所有 `dist[i][i] < 0`。

### 3.5 複雜度

時間 Θ(n³)，空間 Θ(n²)。  
n = 1000 約 10⁹ 量級運算，通常 TLE。

### 3.6 選讀：與傳遞閉包／矩陣

- 邊權改成布林「有無邊」、min-plus 改成 OR-AND → 可達性（傳遞閉包）。  
- min-plus 矩陣「乘法」重複 log 次也可做全點對，但常數與實作通常不如三重迴圈清楚；場上少用手寫。

---

## 4. 模板

輸入：`n m`；`m` 行 `u v w`。  
輸出 n×n 矩陣；不可達 `-1`；若負環則一行 `NEGATIVE CYCLE`。

```cpp
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    const long long INF = 4e18;
    vector<vector<long long>> dist(n + 1, vector<long long>(n + 1, INF));
    for (int i = 1; i <= n; i++)
        dist[i][i] = 0;

    for (int e = 0; e < m; e++)
    {
        int u, v;
        long long w;
        cin >> u >> v >> w;
        dist[u][v] = min(dist[u][v], w);
        // 無向：dist[v][u] = min(dist[v][u], w);
    }

    for (int k = 1; k <= n; k++)
    {
        for (int i = 1; i <= n; i++)
        {
            if (dist[i][k] == INF)
                continue;
            for (int j = 1; j <= n; j++)
            {
                if (dist[k][j] == INF)
                    continue;
                if (dist[i][j] > dist[i][k] + dist[k][j])
                    dist[i][j] = dist[i][k] + dist[k][j];
            }
        }
    }

    for (int i = 1; i <= n; i++)
    {
        if (dist[i][i] < 0)
        {
            cout << "NEGATIVE CYCLE\n";
            return 0;
        }
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (dist[i][j] == INF)
                cout << -1;
            else
                cout << dist[i][j];
            cout << (j == n ? '\n' : ' ');
        }
    }
}
```

---

## 5. 競程要帶走／選讀

**帶走：**

1. `dist[i][j]`；更新 = 試經由 k。  
2. O(n³)，n 小才上；單源正權仍 Dijkstra。  
3. `dist[i][i]<0` 抓負環。

**選讀：** 傳遞閉包類比；要路徑還原可另開 `nxt[i][j]` 記錄中繼。
