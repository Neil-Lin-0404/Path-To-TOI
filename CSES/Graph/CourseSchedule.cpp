#include <bits/stdc++.h>
using namespace std;
vector<bool>vis(1e5+5,false);
vector<vector<int>>dsu(1e5+5);
vector<int>color(1e5+5,0);
bool foundCycle=false;
void dfs(int x)
{
    if(foundCycle) return;
    for(auto y : dsu[x])
    {
        if(color[y]==0)
        {
            color[y]=1;
            dfs(y);
            if(foundCycle) return;
        }
        else if(color[y]==1)
        {
            foundCycle=true;
            return;
        }
    }
    color[x]=2;
}
void dfs2(int x)
{
    if(vis[x]) return;
    vis[x]=true;
    for(auto y : dsu[x])
    {
        dfs2(y);
    }
    cout << x << ' ';
}

int main()
{
    int n,m;
    cin >>n>>m;
    for(int i=0;i<m;i++)
    {
        int a,b;
        cin >>a>>b;
        dsu[b].push_back(a);
    }
    for(int i=1;i<=n;i++)
    {
        if(color[i]==0)
        {
            color[i]=1;
            dfs(i);
        }
    }
    if(foundCycle)
    {
        cout << "IMPOSSIBLE" << endl;
        return 0;
    }
    
    for(int i=1;i<=n;i++)
    {
        if(vis[i])continue;
        dfs2(i);
    }
    return 0;

}