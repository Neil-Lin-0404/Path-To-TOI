/*
 * 主文（直覺＋模板）：MST.md
 * DSU 詳解：../../Data_Structure/DSU.md
 * ============================================================
 *  MST — Kruskal（可編譯副本）
 * ============================================================
 *
 * 【六歲一句話】
 *   幫村莊修路：路從便宜到貴依序看；兩村還沒通就修，通了就跳過。
 *   最後若沒全部連成一團 → 無解（這裡印 IMPOSSIBLE）。
 *
 * 【輸入】
 *   n m
 *   m 行：a b c（無向邊 a—b，價錢 c）
 *
 * 【輸出】
 *   若可連通：第一行總價錢，第二行用了幾條邊（可改成只印總價）
 *   否則：IMPOSSIBLE
 *
 *  下面輸出「總價錢」一行（對齊常見題）；需要邊列表可自行加 vector。
 */
#include <bits/stdc++.h>
using namespace std;

struct DSU
{
    vector<int> p, sz;
    DSU(int n = 0) { init(n); }
    void init(int n)
    {
        p.resize(n + 1);
        sz.assign(n + 1, 1);
        iota(p.begin(), p.end(), 0);
    }
    int find(int x) { return p[x] == x ? x : p[x] = find(p[x]); }
    bool unite(int a, int b)
    {
        a = find(a);
        b = find(b);
        if (a == b)
            return false;
        if (sz[a] < sz[b])
            swap(a, b);
        p[b] = a;
        sz[a] += sz[b];
        return true;
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    if (!(cin >> n >> m))
        return 0;

    vector<array<long long, 3>> edges;
    edges.reserve(m);
    for (int i = 0; i < m; i++)
    {
        int a, b;
        long long c;
        cin >> a >> b >> c;
        edges.push_back({c, a, b});
    }
    sort(edges.begin(), edges.end());

    DSU dsu(n);
    long long total = 0;
    int used = 0;
    for (auto [c, a, b] : edges)
    {
        if (dsu.unite(a, b))
        {
            total += c;
            used++;
            if (used == n - 1)
                break;
        }
    }

    if (used != n - 1)
        cout << "IMPOSSIBLE\n";
    else
        cout << total << '\n';
    return 0;
}
