#include <bits/stdc++.h>
using namespace std;
#define ll long long
int n,m;
vector<ll> dist;

vector<vector<pair<int,int>>> edges;
bool dfs(int u,int trigger,vector<bool> &visited)
{
    
    visited[u] = true;
    if(u==trigger)
    {
        return true;
    }
    for(auto [v,w] : edges[u])
    {
        if(!visited[v])
        {
            if(dfs(v,trigger,visited))
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    cin >> n>>m;
    edges.resize(n+1);
    
    for(int i=0;i<m;i++)
    {
        int u,v;
        ll w;
        cin >> u >> v >> w;
        // one way
        edges[u].push_back({v,w});
    }
    if(n==1)
    {
        for(auto [v,w] : edges[1])
        {
            if(w >=1)
            {
                cout << "-1\n";
                return 0;
            }
        }
    }
    dist.resize(n+1,-1e18);
    dist[1] =0;
    for(int i=1;i<=n-1;i++)
    {
        for(int u =1;u<=n;u++)
        {
            for(auto [v,w] : edges[u])
            {
                dist[v] = max(dist[v],dist[u]+w);
            }
        }
    }
    for(int u =1;u<=n;u++)
    {
        for(auto [v,w] : edges[u])
        {
            if(dist[v] < dist[u]+w)
            {
                
                vector<bool> visited(n+1,false);
                vector<bool> visited2(n+1,false);
                
                if(dfs(1,v,visited) && dfs(v,n,visited2))
               {
                cout << "-1\n";
                return 0;
               } 
            }
        }
    }
    cout << dist[n] << '\n';
    return 0;
}