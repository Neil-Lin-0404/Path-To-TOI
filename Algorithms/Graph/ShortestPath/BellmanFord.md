# Bellman-Ford

> 可編譯副本：[BellmanFord.cpp](BellmanFord.cpp)  
> 對照：[Dijkstra.md](Dijkstra.md) · [FloydWarshall.md](FloydWarshall.md)  
> 卡關心法：[../Paradigms/Contest-Thinking.md](../Paradigms/Contest-Thinking.md)

---

## 1. 一句話＋何時用

對**所有邊**反覆鬆弛；不挑「目前最近的點」。  
**允許負邊**；從起點可達的負環可用第 n 輪偵測。

| 情況 | 用什麼 |
|---|---|
| 正權、單源 | [Dijkstra](Dijkstra.md)（較快） |
| **可負、單源／要偵測負環** | **Bellman-Ford** |
| 全點對、n 小 | [Floyd](FloydWarshall.md) |

鬆弛式子與 Dijkstra **相同**：`dist[v] = min(dist[v], dist[u] + w)`。只改 dist，不改邊。

---

## 2. 直覺（費曼）

### 跟 Dijkstra 差在「更新順序」

- Dijkstra：先處理最近的（要正權）。  
- BF：每輪掃完整張邊表，做 n-1 輪。

### 為什麼 n-1 輪

無負環時，最短路是**簡單路徑**（不重複點）→ 最多 n-1 條邊。  
第 k 輪後：所有「至多 k 條邊」的最短走法都對了。

### 第 n 輪

還能變短 → 存在從起點可達的**負環**（越繞越便宜，最短路不存在）。

### 全設 `dist=0`／超源（任意負環）

單源：只 `dist[s]=0`。  
要找**圖上任意**負環（如 CSES Cycle Finding）：一開始每個點 `dist=0`，等價超源連到所有點權 0。  
此時 dist **不再是**「從 s 的最短路語意」，只留「還能否一直變短」。

### 還原環：為何要走 n 步

第 n 輪被更新的點 x 可能在「進環／出環的**尾巴**」上，不一定已在環上。

```
尾巴：1 → 2 → 3 → (4 ↺ 5)
```

沿 `parent` 走 n 次 → 一定進環（尾巴長度 < n）。  
只走一步就當 `start` → `while` 可能永遠回不來（RE）。

進環後：`start = x`，再繞回 **start**（不是舊的邊終點 v）。

### 手跑

負邊無環：起點 1，邊 `1→2:4, 1→3:5, 2→3:-3, 2→4:3, 3→4:2` → `0 4 1 3`。

---

## 3. 理論（演算法課深度）

### 3.1 問題形式化

單源最短路；邊權可為負。若存在從 s 可達的負環，則對環上（及被波及）的點 δ(s,·) = −∞。

### 3.2 命題：無負環 ⇒ n-1 輪足夠

**命題：** 若無從 s 可達負環，則存在一條最短路徑至多含 n-1 條邊。

**理由：** 若最短路徑含環，環權重必須 ≥ 0（否則可刪環變更短，或負環矛盾）；刪掉非負環不增加權重，可變成簡單路徑。

**推論：** 定義 d_k(v) = 從 s 到 v、至多 k 條邊的最短路徑長。則 d_k 可由對所有邊鬆弛從 d_{k-1} 得到；d_{n-1}(v) = δ(s,v)。

### 3.3 命題：第 n 輪仍可鬆弛 ⇔ 可達負環

- ⇒：若第 n 輪邊 u → v 仍改善 v，則存在更短的、至少 n 條邊的 s ⇝ v 路徑 → 必含環且該環為負（否則可縮成 ≤ n-1 邊且不更差）。  
- ⇐：負環上的距離可無限下降，故任意輪次後仍可再改善。

**競程意義：** 偵測負環不必真的繞到 −∞，多做一輪即可。

### 3.4 超源／全 0（費曼）

先講痛點：Bellman-Ford 平常是「從某個起點 s 出發」。  
若負環在圖的另一塊、從 s 走不到，你的 `dist` 永遠碰不到那塊 → 會誤判「沒有負環」。

解法想像：天空降下一個假點 **S（超源）**，用權重 0 的線連到**每一個**真實點。

```
        S
   0 /  |  \ 0
    v   v   v
    A   B   C   …（每個點都連得到）
```

從 S 出發跑 BF = 同時從「所有點」開始偵測。  
圖裡不管哪一塊有負環，都能從 S 用那條 0 邊「走進去」被發現。

程式偷懶寫法：不要真的建 S，一開始直接

```
每個點 dist[v] = 0
```

意思一樣：每個人筆記本一開始都寫「已經付 0」，等於都當過起點。

注意：這時 `dist` **不再代表**「從某個真實起點的最短路」。  
你只是在問：「數字還會不會一直變便宜？」會 → 有負環。

---

### 3.5 還原環：為何要走 n 步（費曼）

抓到「第 n 輪還能更新」時，你手上有一個被改到的點 x。  
問題：x 不一定站在環上。

想像負環是溜冰場圓圈，外面有一條小路通進去：

```
小路（尾巴）              負環（溜冰場）
1 → 2 → 3 → 4 ↺ 5
              ↑_____|
```

更新可能一路「傳」到尾巴上的人。  
所以最後被改到的 x 可能是 1、2、3（尾巴），不是 4 或 5（環上）。

`parent[v] = u` 的意思：v 說「我這次變便宜，是因為從 u 走過來」。  
一直 `x = parent[x]` = **沿著「是誰害我變便宜」往回走**。

- 若在尾巴：往回走會朝環走去  
- 進環之後：會在圓圈上轉

尾巴最多多長？圖一共 n 個點，不重複走的話，尾巴 ≤ n-1 步。  
所以往回走 **n 步**，一定已經踏進圓圈（多走幾步也沒壞處，只是在環上多轉）。

若只走 1 步就當起點印環：你可能還站在尾巴上，繞一圈永遠回不到自己 → 死迴圈／RE。

進環之後才：`start = x`，再繞回 start，那一圈才是要印的負環。

### 3.6 複雜度

時間 O(n·m)；空間邊表 O(m)。  
**選讀：** SPFA＝佇列優化「誰剛被更新再鬆弛」；平均快、最壞可很差，競賽需小心。

---

## 4. 模板（單源＋偵測從 s 可達負環）

輸入：`n m s`，點 `1..n`；`m` 行 `u v w`（可負）。  
有負環印 `NEGATIVE CYCLE`，否則印 `dist[1..n]`（不可達 `-1`）。

```cpp
#include <bits/stdc++.h>
using namespace std;

struct Edge
{
    int u, v;
    long long w;
};

int main()
{
    int n, m, s;
    cin >> n >> m >> s;

    vector<Edge> edges;
    edges.reserve(m);
    for (int i = 0; i < m; i++)
    {
        int u, v;
        long long w;
        cin >> u >> v >> w;
        edges.push_back({u, v, w});
    }

    const long long INF = 4e18;
    vector<long long> dist(n + 1, INF);
    dist[s] = 0;

    for (int round = 1; round <= n - 1; round++)
    {
        bool changed = false;
        for (auto [u, v, w] : edges)
        {
            if (dist[u] == INF)
                continue;
            if (dist[v] > dist[u] + w)
            {
                dist[v] = dist[u] + w;
                changed = true;
            }
        }
        if (!changed)
            break;
    }

    for (auto [u, v, w] : edges)
    {
        if (dist[u] == INF)
            continue;
        if (dist[v] > dist[u] + w)
        {
            cout << "NEGATIVE CYCLE\n";
            return 0;
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

**任意負環＋印路徑（外殼）：** 全 `dist=0`，每輪記 `parent`，n 輪後若還有更新則 `x` 走 parent n 次再繞 `start`。見 CSES Cycle Finding。

---

## 5. 競程要帶走／選讀

**帶走：**

1. 同一鬆弛，不同順序 → 可負權、O(n·m)。  
2. n-1 輪定案；第 n 輪 = 負環警報。  
3. 任意負環用全 0／超源；印環先走 n 步進環。

**選讀：** 差分約束（不等式系統 → 建邊跑 BF）；SPFA。
