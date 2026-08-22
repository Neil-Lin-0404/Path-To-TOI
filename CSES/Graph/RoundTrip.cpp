#include <bits/stdc++.h>
using namespace std;
bool can = false;
const int N = 1e5+5;
vector<bool>visited(N,false);
vector<vector<int>>graph(N);
int foundCity=0;
bool cycleEnd=false;
vector<int>path;

bool dfs(int node,int parent)
{
    for(auto next : graph[node])
    {
        if(next == parent)
        {
            visited[next] = true;
            continue;
        }
        if(visited[next])
        {
            path.push_back(next);
            path.push_back(node);
            foundCity = next;
            return true;
        }
        visited[next] = true;
        if(dfs(next,node))
        {
            if(next==foundCity)
            {
                cycleEnd = true;
                return true;
            }
            if(cycleEnd)
            {
                return true;
            }
            path.push_back(node);
            
            return true;
        }
    }
    return false;
}
int main()
{
    int n,m;
    cin >> n >> m;
    for(int i=0;i<m;i++)
    {
        int a,b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    for(int i=1;i<=n;i++)
    {
        if(visited[i])continue;
        visited[i] = true;
        if(dfs(i,0))
        {
            can = true;
            break;
        }
    }
    if(!can)
    {
        cout << "IMPOSSIBLE" << endl;
        return 0;
    }
    cout << path.size() << endl;
    for(auto city : path)
    {
        cout << city << " ";
    }
    return 0;
}