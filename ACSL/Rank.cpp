#include <bits/stdc++.h>
using namespace std;


const int MAXN = 25;
int start =0;
int unable=0;
bool stop = false;
vector<vector<int>>losesTo(MAXN);
void dfs(int node,vector<bool>&vis)
{
    if(stop)return;
    vis[node] = true;
    for(auto v : losesTo[node])
    {
        if(stop)return;
        if(start == v)
        stop=true;
        if(vis[v])continue;
        dfs(v,vis);
    }
}
int main()
{
    int n,k;
    cin >> n >> k;
    for(int i=0;i<k;i++)
    {
        int a,b,sa,sb;
        cin >> a >> b >> sa >> sb;
        if(sa > sb)losesTo[b].push_back(a);
        else losesTo[a].push_back(b);
    }
    for(int i=1;i<=n;i++)
    {
        vector<bool>vis(MAXN,false);
        start = i;
        dfs(start,vis);
        if(stop)
        {
            cout << start;
            return 0;
        }
    }
}