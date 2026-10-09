#include <bits/stdc++.h>
using namespace std;

vector<vector<int>>g;
vector<bool>vis;
int MX=0;
void dfs(int node)
{
    vis[node]=true;
    int s = g[node].size();
    MX = max(MX,s);
    for(auto u : g[node])
    {
        if(vis[u])continue;
        dfs(u);
    }
}
int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("planting.in","r",stdin);
    freopen("planting.out","w",stdout);
    int n;
    cin >>n;
    g.resize(n+1);
    vis.resize(n+1);
    for(int i=1;i<n;i++)
    {
        int u,v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    
    dfs(1);
    cout << MX+1;
}