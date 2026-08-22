# TOI 二階／國手課表（W13 起）

> 前提：先走完 [TOI-IOI-3Month-Plan.md](TOI-IOI-3Month-Plan.md)（初選／一階）。  
> **W1–12 不要開這份。** 一階課表不塞 HLD、主席樹、流、凸包。  
> 目標：進營後能跟課、複選有底、決選才轉國手刷法。四個國手名額是這份走完之後的事。

對齊：[IOI/01_Data_Structure.md](IOI/01_Data_Structure.md) §9 之後、[IOI/02_Tree.md](IOI/02_Tree.md) §13–15、[IOI/06_DP.md](IOI/06_DP.md) §16、[IOI/08_String_Algorithms.md](IOI/08_String_Algorithms.md)、[IOI/09_Geometry.md](IOI/09_Geometry.md)、[IOI/05_Graph.md](IOI/05_Graph.md) §11–12。星數是 awareness 的先寫「能交模板」，不是一次五魔王。

---

## 跟一階差在哪

| | 一階（W1–12） | 二階（W13 起） |
|---|---|---|
| 目標 | 進選訓營 | 跟得上一階營 → 複選 → 二階營 |
| 模擬 | **3 小時 5 題**（初選） | **5 小時 3 題**（選訓營／APIO） |
| 平台 | 平日 CSES，週日 TIOJ `TOI-pre` | 每週 1 主題 + [Library Checker](https://judge.yosupo.jp/) 模板；模擬改 TIOJ「選訓營」／APIO 舊題 |
| 得分習慣 | subtask 撿分 | 仍是 OI；NCKU **不當模擬**（ICPC 全對才分） |

進場前仍用 [CMS practice](https://cmspractice.csie.ntnu.edu.tw/)。編譯 `-O2`。

---

## 誠實順序（不要一次開五條線）

1. **線段樹變形：** 動態開點 → 持久化／主席樹 → 合併（[IOI/01](IOI/01_Data_Structure.md) §9 之後、§15 awareness）
2. **樹路徑：** HLD；點分治當加餐（[IOI/02](IOI/02_Tree.md) §13–15；HLD 在大綱是 awareness）
3. **DP 優化：** 單調隊列 → CHT（[IOI/06](IOI/06_DP.md) §16）
4. **字串／幾何：** Rolling hash 熟 → KMP；凸包／掃描線入門（[IOI/08](IOI/08_String_Algorithms.md)、[IOI/09](IOI/09_Geometry.md)）
5. **圖：** BCC／橋／割點比網路流更靠近 syllabus（[IOI/05](IOI/05_Graph.md) §12）。Dinic／最小割當台灣營隊加餐（`IOI/05` 沒把流當必備）

同一招連 AC **3 題**（含 1 題 Library Checker）才換章。卡 40 分鐘：暴力 + 對拍。

---

## W13–W20

每天看 AC 數。平日：該週主題 2 題 + 模板維護；週日：**5 小時 3 題**。放棄把 NCKU 當模擬。

- **W13 動態開點／合併：** 座標大、點稀疏才開節點。Library Checker：`Point Set Range Composite` 或動態開點區間加區間和。合併：子樹資訊合到線段樹上（small-to-large 觀念可並讀 [IOI/01](IOI/01_Data_Structure.md) §14）。
- **W14 持久化／主席樹：** 每次改出新版本、舊版本還能查。典型：區間第 k 小。Library Checker：`Range Kth Smallest`。能交、知道「版本 = 新路徑」就過關；rollback DSU 當加餐。
- **W15 樹路徑 HLD：** 為什麼 Euler tour 不夠查任意路徑。重兒子／輕邊 → 路徑拆成 O(log n) 段丟給 segtree。Library Checker：`Vertex Add Path Sum`。點分治（centroid）當加餐，不當週主線（大綱星數低）。
- **W16 DP 優化：** 先單調隊列／deque（滑窗、決策單調）。再 CHT（斜率優化）。Library Checker：`Line Add Get Min`。矩陣快速冪：[IOI/06](IOI/06_DP.md) §18、[IOI/07](IOI/07_Number_Theory.md) §12；一階只「看懂 n≤1e18」，這週才寫到能交線性遞迴。
- **W17 字串：** Rolling hash 雙 hash 穩了再 KMP（prefix function）。CSES String Matching / Finding Borders / Finding Periods。SA／SAM 仍只 awareness。
- **W18 幾何入門：** 叉積轉向、凸包（Andrew／單調鏈）、掃描線事件。CSES Convex Hull。點在多邊形、旋轉卡殼當加餐。
- **W19 圖的塊：** SCC 若一階沒寫就補。橋、割點、low-link、BCC／bridge-tree（[IOI/05](IOI/05_Graph.md) §11–12）。Library Checker：`Biconnected Components` 或 `Two-Edge-Connected Components`。**Dinic／最小割：** 台灣營隊加餐，寫 1 題 Maxflow 即可，不開網路流專章。
- **W20 營隊手感：** 兩場 **5 小時 3 題**（TIOJ 選訓營或 APIO 舊題）。只復盤：哪題該先鎖 subtask、哪題不該開 HLD。這週不開新招。

---

## 國手選拔入口（W20 之後，不當作業）

二階課表走完才轉：

- AtCoder **ARC C–E**
- Codeforces **Div.1 A–B**
- 台灣歷屆 **一模／二模**（TIOJ 選訓營／決選標）

現在只列入口。W1–12 不要當週作業。IOI 正賽：2 天 × 3 題 × 5 小時；函式介面／互動／output-only 進集訓再練。

---

## 場上（5 小時 3 題）

1. 仍先掃 subtask。小限制先交。
2. 一題 40 + 一題 60 好過死磕 100。
3. 模板題（HLD／主席樹）開打前確認：這題真的需要，還是 Euler + BIT 就夠。
4. 週日模擬、週一只復盤。NCKU 仍可當週作業，不當考試。

---

## 怎麼毛起來

1. 筆記最上面寫「今日 AC」。沒 AC 不算練過。
2. Library Checker 過了不算會；CSES／TIOJ 同招再 AC 兩題才算。
3. 不要平行開 HLD + CHT + 流。順序就是上面 1→5。
4. 決選公式：一階 40% + 二階 60%，取前 4、不備取。這份是為那 60% 鋪底，不是保證國手。
