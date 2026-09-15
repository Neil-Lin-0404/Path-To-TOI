#include <bits/stdc++.h>
using namespace std;
const int MAXN = 105;
vector<bool>vis(MAXN,false);
vector<vector<int>>g(MAXN);
int target =0;
bool dfs(int node)
{
    vis[node] = true;
    if(node == target)return true;
    for(auto v : g[node])
        if(vis[v] || dfs(v))return true;
    
    return false;
}
int main()
{
    freopen("factory.in","r",stdin);
    freopen("factory.out","w",stdout);
    int d;
    cin >> d;
    for(int i=1;i<d;i++)
    {
        int u,v;
        cin >> u >> v;
        g[u].push_back(v);
    }
    for(int i =1;i<=d;i++)
    {
        bool can = true;
        target = i;
        fill(vis.begin(),vis.end(),false);
        for(int j = 1;j<=d;j++)
        {
            if(!vis[j])
            {
                if(!dfs(j))
                {
                    can = false;
                    break;
                }
            }
        }
        if(can)
        {
            cout << i;
            return 0;
        }
    }
    cout << -1;
    return 0;
    
}