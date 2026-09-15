# 動態規劃 (DP) 刷題全攻略：心法 + Paradigms + Techniques

> DP 的本質：**帶記憶化的 DFS**。你其實是在一個隱含的「狀態圖」上做走訪，只是把算過的子問題存起來不重算。跟圖論是同一家人，只是 node 換成了「狀態」。

---

## Part 1：心法 — 怎麼看出是 DP 題

DP 適用需要同時滿足兩個條件：

1. **Optimal substructure（最佳子結構）**：大問題的最佳解，可以由小問題的最佳解組合出來。
2. **Overlapping subproblems（重疊子問題）**：如果直接寫遞迴（DFS），會發現同一個子問題被重複計算很多次。

**關鍵字警訊**：「最多/最少 XXX」、「有幾種方法 / 方案數」、「能不能湊出 XXX」、「第 k 小的 XXX」。

**跟 Greedy 的分野（很重要）**：
- Greedy：每一步做一個「不可逆」的局部最優選擇，且保證不影響最終答案。
- DP：這一步的最優選擇，**取決於未來還沒發生的事**，所以不能只做一次選擇就丟掉其他可能性，必須把「所有可能的子狀態結果」都記下來。

一個簡單判斷法：如果你發現自己在幫貪心策略找反例，而且真的找到了反例 → 代表要改用 DP。

---

## Part 2：定義狀態 — DP 裡最重要、最難的一步

寫轉移方程之前，**先把狀態的「意義」用一句人話講清楚**，不要只寫 `dp[i][j]`。例如：

> `dp[i][j]` = 用前 i 個物品、容量恰好為 j 時，能湊出的最大價值

### 決定要幾維狀態的思路

問自己：**要往下一步做決策，我需要知道哪些「歷史資訊」？** 那些會影響未來決策的變數，就是你的維度。

- 只需要知道「目前處理到第幾個」→ 1 維
- 需要知道「目前處理到第幾個」+「已經用掉多少容量/成本」→ 2 維
- 需要知道「一個集合裡哪些元素被選過」且集合很小（n ≤ ~20）→ bitmask 多一維

### 定義完狀態後的四個步驟

1. **轉移方程**：這一步有哪些決策選項？每個選項分別從哪個子狀態轉移過來？
2. **Base case**：最小的子問題答案是什麼？
3. **計算順序**：狀態之間有沒有依賴關係？通常要沿著某個維度遞增或遞減計算，確保用到的子狀態已經算好了。
4. **答案在哪裡**：最終答案是 `dp[]` 陣列裡的哪一格，還是要對多格取 max/min/sum？

---

## Part 3：常見 DP Paradigms（依外型分類，練到看到就能認出來）

| Paradigm | 特徵 / 例子 |
|---|---|
| **1D 線性 DP** | 爬樓梯、最大子陣列和（Kadane's）、LIS（最長遞增子序列） |
| **背包 DP** | 0/1 背包（每個物品只能選一次）、無限背包（可重複選）、分組背包（每組選一個） |
| **雙序列 DP** | 兩個字串/陣列互相比較：LCS（最長共同子序列）、Edit Distance、字串匹配 |
| **區間 DP** | `dp[i][j]` 代表區間 `[i,j]` 的答案，從小區間往大區間推：矩陣鏈乘法、石頭合併、迴文分割 |
| **狀態壓縮 DP（bitmask）** | 用一個 int 的二進位表示「集合裡哪些元素被選了」，n 通常 ≤ 20：旅行推銷員 TSP、覆蓋類問題 |
| **數位 DP（digit DP）** | 統計 `[L, R]` 範圍內滿足某條件的數字個數，逐位處理 |
| **機率 / 期望 DP** | `dp[state]` = 從這個狀態出發的期望步數/機率，通常要注意轉移方向（有時要反過來從終點往回推） |
| **計數 DP** | 求方案數，注意取模（mod），轉移常是加法而非取 max/min |
| **樹上 DP** | 狀態定義在子樹上，見 `tree-guide.md` |

---

## Part 4：Techniques（讓 DP 更快 / 更省空間）

- **Top-down（記憶化搜尋）vs Bottom-up（迭代遞推）**
  - Top-down：寫起來直覺（就是加了 memo 的 DFS），不用煩惱計算順序，但有 recursion overhead，n 大時可能 stack overflow。
  - Bottom-up：通常較快、可以做空間優化，但要自己想清楚計算順序。
- **滾動陣列（rolling array）**：如果 `dp[i][...]` 只依賴 `dp[i-1][...]`，可以把第一維壓成兩排甚至一排，省空間。
- **前綴和加速轉移**：如果轉移是「對一段區間取 sum」，先做 prefix sum 可以把 O(n) 轉移降到 O(1)。
- **單調隊列/單調棧優化**：如果轉移是「對一個滑動視窗取 max/min」，可以用 deque 維護，把 O(nk) 降到 O(n)。
- **分治優化 / 決策單調性優化**：進階技巧，當轉移的最佳決策點具有單調性時可用，能把 O(n²) 降到 O(n log n)。先學會前面幾種再研究這個。

---

## Part 5：Implementation Templates（C++）

### 記憶化搜尋（Top-down）
```cpp
int memo[MAXN];
bool computed[MAXN];

int solve(int i) {
    if (i == 0) return BASE_CASE;
    if (computed[i]) return memo[i];
    computed[i] = true;
    int best = /* 初始值，如 INT_MIN 或 INT_MAX */;
    // 嘗試每個決策，遞迴呼叫 solve(...)
    for (int choice : choices(i)) {
        best = max(best, solve(i - choice) + value(choice));
    }
    return memo[i] = best;
}
```

### 0/1 背包（迭代版，空間優化成 1 維）
```cpp
int dp[CAPACITY + 1] = {0};
for (int i = 0; i < n; i++) {
    // 倒著跑，確保每個物品只用一次
    for (int j = CAPACITY; j >= weight[i]; j--) {
        dp[j] = max(dp[j], dp[j - weight[i]] + value[i]);
    }
}
```

### LCS（最長共同子序列，雙序列 DP）
```cpp
// dp[i][j] = a 的前 i 個字元與 b 的前 j 個字元的 LCS 長度
int dp[MAXN][MAXN];
for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= m; j++) {
        if (a[i-1] == b[j-1]) dp[i][j] = dp[i-1][j-1] + 1;
        else dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
    }
}
```

### 區間 DP
```cpp
// dp[i][j] = 區間 [i, j] 的答案
for (int len = 2; len <= n; len++) {           // 先跑小區間再跑大區間
    for (int i = 0; i + len - 1 < n; i++) {
        int j = i + len - 1;
        dp[i][j] = INF;
        for (int k = i; k < j; k++) {           // 枚舉分割點
            dp[i][j] = min(dp[i][j], dp[i][k] + dp[k+1][j] + cost(i, j, k));
        }
    }
}
```

---

## Part 6：解題 SOP

1. 確認符合 DP 特徵（optimal substructure + overlapping subproblems）
2. 用一句話定義狀態的**意義**（不是只寫符號）
3. 寫出轉移方程：這一步有哪些選項，各自從哪裡轉移過來
4. 找出 base case
5. 決定計算順序（或直接用記憶化搜尋跳過這步）
6. 檢查複雜度：狀態數 × 每個狀態的轉移花費，是否符合 n、m 的限制
7. 需要的話做空間優化（滾動陣列）

---

## Part 7：刷題路線建議

- **基礎**：1D 線性 DP（爬樓梯、LIS、最大子陣列和）、簡單 0/1 背包
- **進階**：2D DP（LCS、Edit Distance）、區間 DP、樹上 DP 入門
- **更進階**：bitmask DP（TSP）、digit DP、機率/期望 DP、DP 優化技巧（單調隊列、前綴和加速、分治優化）

推薦跟圖論指南一樣參考 [USACO Guide](https://usaco.guide) 的 DP 章節，以及 [cses.fi](https://cses.fi/problemset/) 的 Dynamic Programming 題組（涵蓋幾乎所有上面提到的 paradigm）。