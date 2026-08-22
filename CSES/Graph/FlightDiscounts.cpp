#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n,m;
    cin >> n >> m;
    vector<vector<ll>> dist(n+1,vector<ll>(2,1e18));
    vector<vector<pair<int,ll>>> graph(n+1);
    priority_queue<tuple<ll,int,bool>,vector<tuple<ll,int,bool>>,greater<tuple<ll,int,bool>>>pq; // {distance,node,used_discount}
    pq.push({0,1,0});
    dist[1][0]=0;

    for(int i=0;i<m;i++)
    {
        int u,v,w; // start , end , weight
        cin >> u >> v >> w;
        graph[u].push_back({v,w});
    }

    while(!pq.empty())
    {
        auto [d,u,used_discount] = pq.top();

        pq.pop();

        if(d > dist[u][used_discount]) continue;

        for(auto [v,w] : graph[u])
        {
            if(dist[v][used_discount] > dist[u][used_discount] + w)
            {
                
                dist[v][used_discount] = dist[u][used_discount] + w;
                pq.push({dist[v][used_discount],v,used_discount});
                if(!used_discount)
                {
                    if(dist[u][used_discount] + w/2 < dist[v][1])
                    {
                        pq.push({dist[u][used_discount] + w/2,v,1});
                        dist[v][1] = dist[u][used_discount] + w/2;
                    }
                }
            }
        }
    }

    cout << dist[n][1];
}