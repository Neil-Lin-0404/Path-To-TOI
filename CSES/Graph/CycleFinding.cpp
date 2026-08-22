#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n, m;
    cin >> n >> m;
    vector<tuple<int, int, ll>> edges;
    // 全設 0 = 超源連到每個點：用來找「任意」負環（不是從 1 的最短路）
    vector<ll> dist(n + 1, 0);
    vector<int> parent(n + 1, -1);

    for (int i = 0; i < m; i++)
    {
        int u, v;
        ll w;
        cin >> u >> v >> w;
        edges.push_back({u, v, w});
    }
    // Core Logic

    int x = -1; // 最後一輪有被更新的點；沒有 → 無負環
    for (int i = 0; i < n; i++)
    {
        x = -1;
        for (auto [u, v, w] : edges)
        {
            if (dist[u] + w < dist[v])
            {
                dist[v] = dist[u] + w;
                parent[v] = u;
                x = v; // 記「被改到的點」
            }
        }
    }

    // n 輪後還能更新 → x 還在負環影響裡
    if (x == -1)
    {
        cout << "NO\n";
        return 0;
    }

    // 先沿 parent 走 n 步，確保站到環上（不要站在進環的尾巴）
    for (int i = 0; i < n; i++)
        x = parent[x];

    // 從環上某一點走一圈回到自己（這裡要比對 start，不是舊的 v）
    int start = x;
    vector<int> path;
    path.push_back(start);
    x = parent[x];
    while (x != start)
    {
        path.push_back(x);
        x = parent[x];
    }
    path.push_back(start);
    reverse(path.begin(), path.end()); // parent 是往回指，反轉後變沿邊方向

    cout << "YES\n";
    for (int i = 0; i < (int)path.size(); i++)
        cout << path[i] << " \n"[i + 1 == (int)path.size()];
    return 0;
}
