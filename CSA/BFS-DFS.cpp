#include <bits/stdc++.h>
using namespace std;
const int MAXN = 5000;
vector<vector<int>>adj(MAXN);
int main()
{
    int n;
    cin >>n;
    vector<int>bfs(n),dfs(n);
    vector<bool>vis(n);
    for(int i=0;i<n;i++)cin >> bfs[i];
    for(int i=0;i<n;i++){
        cin >> dfs[i];
    }
    for(int i=0;i<n-1;i++)adj[dfs[i]].push_back(dfs[i+1]);
    int edges=n-1;
    int dfsPiv=0;
    for(int i=0;i<n;i++)
    {
        if(vis[i])continue;
        if(dfs[dfsPiv] != bfs[i])
        {
            adj[dfsPiv-1].push_back(bfs[i]);
            vis[i]=true;
            edges++;
        }else dfsPiv++;
        
    }
    cout << edges << '\n';
    for(int i =0;i<n;i++)
    {
        for(auto v : adj[i])
            cout << i<<' ' << v << '\n';
    }

}