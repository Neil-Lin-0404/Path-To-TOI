#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n,c;
    cin >> n >>c;
    queue<int>q;
    vector<vector<int>>rg(n+1),g(n+1);
    vector<bool>vis(n+1,false);
    for(int i=0;i<c;i++)
    {
        int u,v;
        cin >> u >>v;
        rg[v].push_back(u);
        g[u].push_back(v);
    }
    q.push(1);
    vis[1]=true;
    while(!q.empty())
    {
        int node = q.front();
        q.pop();
        for(auto u : g[node])
        {
            if(vis[u])continue;
            q.push(u);
            vis[u]=true;
        }
    }
    for(int i=1;i<=n;i++)
    {
        if(!vis[i])
        {
            cout << "NO\n";
            cout << 1 << ' ' << i;
            return 0;
        }
    }
    fill(vis.begin(),vis.end(),false);
    q.push(1);
    vis[1]=true;
    while(!q.empty())
    {
        int node = q.front();
        q.pop();
        for(auto u : rg[node])
        {
            if(vis[u])continue;
            q.push(u);
            vis[u]=true;
        }
    }
    for(int i=1;i<=n;i++)
    {
        if(!vis[i])
        {
            cout << "NO\n";
            cout << i << ' ' << 1;
            return 0;
        }
    }
    cout << "YES";
}