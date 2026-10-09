#include <bits/stdc++.h>
using namespace std;
void dfs(int node,vector<bool>&vis,vector<vector<int>>&g)
{
    vis[node] = true;
    for(auto u : g[node])
    {
        if(vis[u])continue;
        dfs(u,vis,g);
    }
}
int main()
{
    int t;
    cin >>t;
    while(t--)
    {
        int m,n;
        cin >> m >> n;
        vector<bool>vis(m+1,false);
        vector<vector<int>>g(m+1);
        for(int i=0;i<n;i++)
        {
            int u,v;
            cin >> u >> v;
            g[u].push_back(v);
            g[v].push_back(u);
        }
        int cnt =0;
        for(int i=1;i<=m;i++)
        {
            if(!vis[i])
            {
                cnt++;
                dfs(i,vis,g);
            }
        }
        cout << --cnt << '\n';
    }
}