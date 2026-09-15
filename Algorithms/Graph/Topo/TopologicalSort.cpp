/*
 * 主文（直覺＋模板）：TopologicalSort.md
 * ============================================================
 *  Topological Sort（Kahn）—— 可編譯副本
 * ============================================================
 *
 * 【六歲一句話】
 *   排課表：先修課要排在前面。沒有先修的先排，排完就「解鎖」下一門。
 *   若最後排不完所有課 → 有人互相卡住（有環）→ IMPOSSIBLE。
 *
 * 【輸入約定】（對齊 CSES Course Schedule）
 *   n m
 *   接著 m 行 a b，表示 a 必須在 b 前面（邊 a → b）
 *
 * 【輸出】
 *   一行 n 個點：任一合法拓撲序；無解印 IMPOSSIBLE
 */
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    if (!(cin >> n >> m))
        return 0;

    vector<vector<int>> graph(n + 1);
    vector<int> indeg(n + 1, 0);
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        indeg[b]++;
    }

    queue<int> q;
    for (int i = 1; i <= n; i++)
        if (indeg[i] == 0)
            q.push(i);

    vector<int> order;
    order.reserve(n);
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        order.push_back(u);
        for (int v : graph[u])
        {
            if (--indeg[v] == 0)
                q.push(v);
        }
    }

    if ((int)order.size() != n)
    {
        cout << "IMPOSSIBLE\n";
        return 0;
    }
    for (int i = 0; i < n; i++)
        cout << order[i] << (i + 1 == n ? '\n' : ' ');
    return 0;
}
