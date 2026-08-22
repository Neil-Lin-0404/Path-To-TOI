# TOI 初選 → IOI 選拔（3 個月／一階）

> 起點（2026-08-15）：已獨立寫出 TOI 2025A「連序」滿分寫法。初選 A 檔，不是小 n 暴力。  
> 估在：A 能獨立拿下；B～E、圖／樹、場上撿分還沒測。  
> 這 12 週目標：**進選訓營（一階）**。二階／國手見 [TOI-IOI-Phase2-Camp.md](TOI-IOI-Phase2-Camp.md)（**W13 才開始**）。

不要因為 A 過了就跳過 W1–6。CSES 排序／模擬入門可少刷。第一次 3 小時模擬打 **2025 B～E**。

題本：[TOI-pre/](TOI-pre/)（2020–2025 PDF）

---

## 怎麼比

### 台灣路線

```
APCS 實作 ≥3 或資訊學科決賽
  → 初選（約 3 月，3 小時，約 5 題，只准 C++，CMS，OI 部分分）
  → 一階選訓營（約 2 週）＋每週模擬競試
  → 複選：模擬 80% + 平時 20%，約 10～12 人
  → 二階選訓營
  → 決選：一階 40% + 二階 60%，取前 4 名當 IOI 國手（不備取）
  → APIO / 集訓 → IOI（2 天 × 3 題 × 5 小時）
```

2026 初選：3/7 14:00–17:00。來源：[tpmso.org/toi](https://tpmso.org/toi/)

### OI ≠ 你現在刷的 ICPC

| | NCKU / CSES | TOI 初選 / IOI |
|---|---|---|
| 得分 | 全對才分、罰時 | **subtask 部分分** |
| 策略 | 寫到滿分再交 | 小 n 暴力先鎖分 |
| 模擬時長 | 隨你 | **3 小時 5 題**（進營後才 5 小時 3 題） |

例：2024A 配分 0+12+24+64。暴力吃小 d 就有 12。

### IOI 額外差在哪

- 每題 100，subtask 取 min，多次提交拼 max
- 可能函式介面 / 互動 / output-only
- 進營後再練。現在不要用舊 IOI 當主線。

---

## 3 個月必會 / 先不要

**必會：** 模擬、排序、前綴、二分（含對答案）、座標壓縮、`set/map/pq`、DSU、**Kruskal/MST**、BIT、**基礎線段樹 + lazy 入門**、DFS/BFS/Dijkstra、簡單樹、1D/2D/背包/LIS/計數 DP、**區間 DP 入門**、滾動陣列、gcd/模運算。

**先不要（二階）：** CHT、HLD、Centroid、SA、凸包以後、最大流、可持久化、Profile/Digit DP 深挖、完整 rerooting、矩陣快速冪當週 AC。

---

## 刷題刷哪裡

- **平日單招：** [CSES](https://cses.fi/problemset/)（Graph / DP / Tree / Range Queries）
- **週日考試：** TIOJ `TOI-pre` + [TOI-pre/](TOI-pre/) PDF
- **手感加：** NEOJ（新竹實中 Judge）、TIOJ 搜「選訓營」（不當 W1 主線）
- **週作業：** NCKU 長題（ICPC，不當週日模擬）
- 編譯：**`-O2`**（初選有開）。練 `pair` / `tie`

---

## 歷屆題本

索引：[yuihuang.com/toi-pre](https://yuihuang.com/toi-pre/)（到 2024；2025 補 TIOJ 2455–2459）

| 年 | 檔 | 題 |
|---|---|---|
| 2025 | [TOI-pre/2025-problems.pdf](TOI-pre/2025-problems.pdf) | 連序、煎餅攤、疊加最大值、樓梯、巡視農場 |
| 2024 | [TOI-pre/2024-problems.pdf](TOI-pre/2024-problems.pdf) | 6174、奇巧方塊、大步小步、距離函數、棲息地 |
| 2023 | [TOI-pre/2023-problems.pdf](TOI-pre/2023-problems.pdf) | 房屋推薦、裁員風暴、關卡地圖、分子環、公路 |
| 2022 | [TOI-pre/2022-problems.pdf](TOI-pre/2022-problems.pdf) | 迷宮入口、打鍵盤、共享自行車、2022、間諜 |
| 2021 | [TOI-pre/2021-problems.pdf](TOI-pre/2021-problems.pdf) | 原始人排序、掃地機器人、粉刷護欄、乘車時間、密室逃脫 |
| 2020 | [TOI-pre/2020-problems.pdf](TOI-pre/2020-problems.pdf) | 字串解壓縮、建設人工島、銀河捷運、質感測試、鋪地磚 |

交題：TIOJ。2020 PDF 可能亂碼 → TIOJ 2188–2192。

**模擬：** 第一次 2025 **B～E**；之後整場 2024、2023。2020–2022 加練。

---

## 12 週

每天看 **AC 數**。平日 2～3 題；週日 1 場。流程：[Sequence.md](Sequence.md)。大綱：[IOI/05_Graph.md](IOI/05_Graph.md)、[IOI/06_DP.md](IOI/06_DP.md)、[IOI/01_Data_Structure.md](IOI/01_Data_Structure.md)。

- **W1–2 圖：** CSES Graph：DFS/BFS/最短路/DSU。Dijkstra 寫到能交（過期狀態要丟）。**MST：Kruskal = 邊排序 + DSU**。CSES **Road Reparation**（MST）、**Road Construction**（連通）。Prim 知道就好。最短路 ≠ MST。NCKU D、I。
- **W3–4 DP：** Dice / Min Coins / Comb1+2 / Removing Digits / Book Shop / Grid Paths。TD 過了再寫 BU。**區間 DP：CSES Removal Game（必寫）。** **滾動陣列：** Book Shop 再寫 1D（容量大→小＝0/1）；Grid Paths 再寫兩列或一列（防 MLE）。NCKU A、C。
- **W5–6 結構+樹：** set/pq、BIT（單點改區間和／逆序對）。線段樹：[IOI/01](IOI/01_Data_Structure.md) §8–9。CSES **Dynamic Range Minimum Queries**（單點改＋區間 min，基礎 segtree）。CSES **Range Updates and Sums**（區間改＝**lazy**）。樹上：Subordinates / Tree Diameter / Tree Matching。路徑查詢先 Euler tour + BIT；HLD 放二階。
- **W7–8 狀態圖：** bitmask TSP 一題；CSES Shortest Routes；NCKU F。E、H 穿插。
- **W9–10 計數+模：** Counting DP；區間 DP 若 Removal Game 還沒寫就這週補。gcd/sieve/modinv。NCKU G：**看懂「n 超大要跳」**；`n≤1e18` 線性遞迴常是**矩陣快速冪**。初選先拿 `n≤1e5` 的 subtask，不必當週 AC 正解。
- **W11–12：** 每週 2 場 **3 小時**。第一場 2025 B～E；其後 2024、2023 整場。平台：TIOJ `TOI-pre` + PDF；手感可加 **NEOJ**。`g++ -O2`。只復盤「哪個 subtask 該撿沒撿」。

NCKU 決賽 ALL IN 當 W8 後加餐。進場前摸 [CMS practice](https://cmspractice.csie.ntnu.edu.tw/)。

---

## 場上 Tip

1. 先掃完全部 subtask，小 n 先交暴力。
2. 兩題各 40 好過死磕一題 100。
3. WA 只看該 subtask 第一個掛掉的測資，對拍小數。
4. 3 小時：前 20 分讀題標分；清能暴力的；剩下打「下一刀 +20」。
5. NCKU 當週作業，TOI 歷屆當週日考試。

---

## 怎麼毛起來

1. 每天筆記最上面寫「今日 AC：題名」。沒 AC 不算練過。
2. 同一招連 AC 3 題才換章。
3. 卡 40 分鐘：寫暴力 + 對拍。暴力都寫不出 state 才看解。
4. 週日模擬、週一只復盤。
5. 每週至少 1 題 BU（含滾動陣列那版）。
6. 這 12 週不要開二階五魔王。W13 才看 Phase2。
