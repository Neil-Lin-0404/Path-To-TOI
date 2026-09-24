#include <bits/stdc++.h>
using namespace std;
void dfs(int node,vector<vector<int>>&g,vector<bool>&vis)
{
    vis[node] = true;
    for(auto v : g[node])
    {
        if(vis[v])continue;
        dfs(v,g,vis);
    }
}

int main()
{
    int p,c;
    while(cin>>p>>c)
    {
        if(p == 0 && c == 0)break;
        vector<bool>vis(p,false);
        vector<vector<int>>g(p);
        for(int i=0;i<c;i++)
        {
            int u,v;
            cin >> u >> v;
            g[u].push_back(v);
            g[v].push_back(u);
        }
        dfs(0,g,vis);
        for(int i=0;i<p;i++)
        {
            if(!vis[i])
            {
                cout << "Yes\n";
                break;
            }
            if(i==p-1)
            {
                cout << "No\n";
                break;
            }
            
        }
    }
}