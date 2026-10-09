#include <bits/stdc++.h>
using namespace std;
#define pii pair<int,int>
#define M 5005
vector<vector<pii>> g(M);
vector<bool>vis(M);
int cnt=0;
int l=0;
void dfs(int node)
{
    vis[node] = true;
    for(auto v : g[node])
    {
        if(vis[v.first])continue;
        if(v.second < l)continue;
        cnt++;
        dfs(v.first);
    }
}
int main()
{
    freopen("mootube.in","r",stdin);
    freopen("mootube.out","w",stdout);
    int n,m;
    cin >> n >> m;
    for(int i=0;i<n-1;i++)
    {
        int u,v,r;
        cin >> u >> v >> r;
        g[u].push_back({v,r});
        g[v].push_back({u,r});
    }
    for(int i=0;i<m;i++)
    {
        int n,r;
        cin >> r >>n;
        cnt =0;
        l = r;
        fill(vis.begin(),vis.end(),false);
        dfs(n);
        cout << cnt << '\n';
    }
}