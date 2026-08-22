#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
vector<vector<int>> adj(N);
vector<bool> visited(N,false);
void dfs(int node)
{
    visited[node] = true;
    for(int i=0;i<adj[node].size();i++)
    {
        int next = adj[node][i];
        if(visited[next]) continue;
        dfs(next);
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    int count=0;
    vector<int>cities;
    dfs(1);
    for(int i=1;i<=n;i++)
    {
        if(visited[i]) continue;
        dfs(i);
        count++;
        cities.push_back(i);
    }
    cout<<count<<endl;
    for(int i=0;i<cities.size();i++)
    {
        cout<<1<<" "<<cities[i]<<endl;
    }

    return 0;
}