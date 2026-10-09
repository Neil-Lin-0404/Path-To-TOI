#include <bits/stdc++.h>
using namespace std;

void dfs(int from,int node,vector<int>&color,vector<bool>&vis,vector<vector<int>>&g)
{
    vis[node] = true;
    color[node] = 3 - color[from];
    for(auto v:g[node])
    {
        if(vis[v])continue;
        dfs(node,v,color,vis,g);
    }
}
int main()
{
    int t;
    cin >>t;
    while(t--)
    {
        int n,m;
        cin >> n >> m;
        vector<vector<int>>g(n+1);
        vector<bool>vis(n+1);
        vector<int>color(n+1,1);
        for(int i=0;i<m;i++)
        {
            int u,v;
            cin >> u >> v;
            g[u].push_back(v);
            g[v].push_back(u);
        }
        dfs(1,1,color,vis,g);
        int b=0,r=0;
        for(int i =1;i<=n;i++)
        {
            if(color[i] == 1)r++;
            else b++;
        }
        cout << min(r,b) << '\n';
        int tar = (min(r,b) == r ? 1 : 2);
        for(int i=1;i<=n;i++)
        {
            if(color[i] == tar)cout << i << ' ';
        }
        cout << '\n';

    }
}