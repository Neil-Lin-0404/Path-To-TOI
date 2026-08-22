#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;
    vector<vector<pair<int,long long>>> graph(n+1);
    for(int i=0;i<m;i++)
    {
        int u,v,w;
        // u 是起點 , v是終點 w是權重
        cin >> u >> v >> w;
        graph[u].push_back({v,w});
        // 這裡在起點的地方 推入v 代表可以到v 然後邊權為w
    }
    // 1 到各點的距離 注意 是從1開始 累積過去 不是單一節點到某節點的距離
    vector<long long> dist(n+1,4e18);
    dist[1] = 0;
    // 優先隊列 用來找最短路徑
    // 第一個是距離 第二個是節點
    // 因為要找最短路 所以用優先隊列 而且排列距離 
    priority_queue<
    pair<long long,int>,
    vector<pair<long long,int>>,
    greater<pair<long long,int>>>
    pq;
    // 起點是1 距離為0
    pq.push({0,1});
    // 代表一直有東西要更新
    while(!pq.empty())
    {
        // 取出距離最短的節點
        int u = pq.top().second;
        long long d = pq.top().first;
        pq.pop();
        // 如果原本的距離比這個還短 就不用更新了
        // 代表這是舊的
        if(d > dist[u]) continue;
        // 如果是新的
        // 掃描u可以到的所有節點
        for(auto [v,w] : graph[u])
        {
            // 如果原本從1到這的距離 比從另外一條來的大
            if(dist[v] > dist[u] + w)
            {
                // 就更新距離 讓這成為最短路
                dist[v] = dist[u] + w;
                // 更新之後 就會有後面的路受到影響 所以把這個節點推進去 讓之後可以繼續更新
                pq.push({dist[v],v});
            }
        }

    }
    // 輸出1到各點的距離
    for(int i=1;i<=n;i++)
    {
        cout << dist[i] << ' ';
    }
}