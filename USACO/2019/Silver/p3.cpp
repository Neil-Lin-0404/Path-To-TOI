#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e5+5;
vector<bool>vis(MAXN,false);
vector<vector<int>>g(MAXN);
vector<pair<int,int>>cord(MAXN);
int l,u,d,r;
void dfs(int node)
{
    vis[node]=true;
    l = min(l,cord[node].second);
    r = max(r,cord[node].second);
    u = min(u,cord[node].first);
    d = max(d,cord[node].first);
    for(auto v : g[node])
    {
        if(vis[v])continue;
        dfs(v);
    }
}
int main()
{
    freopen("fenceplan.in","r",stdin);
    freopen("fenceplan.out","w",stdout);
    int n,m;
    cin >> n >> m;
    for(int i =1;i<=n;i++)
        cin >> cord[i].first >> cord[i].second;   
    for(int i=0;i<m;i++)
    {
        int u,v;
        cin >> u >>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    int ml=INT_MAX,mu=INT_MAX,md=INT_MIN,mr=INT_MIN;
    long long mp = LONG_LONG_MAX;
    for(int i=1;i<=n;i++)
    {
        if(vis[i])continue;
        l=INT_MAX;
        u=INT_MAX;
        d=INT_MIN;
        r=INT_MIN;
        dfs(i);
        long long p = 1LL * (abs(l-r)) * 2 + (abs(u-d)) * 2;
        mp = min(mp,p);

    }
    cout << mp;

}