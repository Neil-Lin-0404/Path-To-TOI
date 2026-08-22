#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m,q;
    cin >>n>>m>>q;
    vector<vector<ll>> graph(n+1,vector<ll>(n+1,4e18));
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i==j) 
            {
                graph[i][j] = 0;
                continue;
            }
            graph[i][j] = 4e18;
        }
    }
    for(int i=0;i<m;i++)
    {
        int u,v;
        ll w;
        cin >> u >> v >> w;
        graph[u][v] = min(graph[u][v],w);
        graph[v][u] = min(graph[v][u],w);
    }
    
    for(int k=1;k<=n;k++) // 開放中繼點
    {
        for(int i=1;i<=n;i++) // 起點
        {
            for(int j=1;j<=n;j++) // 終點
            {
                graph[i][j] = min(graph[i][j],graph[i][k] + graph[k][j]); // 更新最短路
                // graph[i][k] 是 i~k中間點的最短路
                // 如果 k->j 有更短路 那就會被更新
            }
        }
    }
    for(int i=0;i<q;i++)
    {
        int u,v;
        cin >> u >> v;
        int temp = u;
        u = min(u,v);
        if(u==v)
        {
            v = temp;
        }
        if(graph[u][v] == 4e18)
        {
            cout << -1 << '\n';
        }
        else
        {
            cout << graph[u][v] << '\n';
        }
    }
    return 0;
}