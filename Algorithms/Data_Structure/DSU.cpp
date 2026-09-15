/*
 * 主文（直覺＋Ackermann／α＋模板）：DSU.md
 * ============================================================
 *  DSU（並查集）—— 可編譯副本
 * ============================================================
 *
 * 【六歲一句話】
 *   每個人有小組長。問「同組嗎」＝組長是不是同一人。
 *   合併＝小組去認大組的組長。找組長時順便抄近路。
 *
 * 【輸入示範】
 *   第一行：n q
 *   接下來 q 行：
 *     1 a b  → unite(a,b)
 *     2 a b  → 若同組印 YES，否則 NO
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
    bool same(int a, int b) { return find(a) == find(b); }
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

    int n, q;
    if (!(cin >> n >> q))
        return 0;
    DSU dsu(n);
    while (q--)
    {
        int t, a, b;
        cin >> t >> a >> b;
        if (t == 1)
            dsu.unite(a, b);
        else
            cout << (dsu.same(a, b) ? "YES\n" : "NO\n");
    }
    return 0;
}
