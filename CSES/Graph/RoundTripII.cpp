#include <bits/stdc++.h>
using namespace std;
vector<int> color(1e5+5,0);
vector<vector<int>> graph(1e5+5);
bool done=false;
vector<int> ans;
bool dfs(int u)
{
    
    color[u]=1;
    for(int v : graph[u])
    {
        if(done) return true;
        if(color[v] == 0)
        {
            if(!dfs(v))
            {
                continue;
            }
            else
            {
                if(done) return false;
                ans.push_back(v);
                color[v]=2;
                if(v == ans[0]) done=true;
                return true;
            }
        }
        else if(color[v] == 1)
        {
            ans.push_back(v);
            return true;
        }
    }
    color[u]=2;
    return false;
}
int main()
{
    int n,m;
    cin >> n >> m;
    for(int i=0;i<m;i++)
    {
        int u,v;
        cin >> u >> v;
        graph[u].push_back(v);
    }
    graph[0].push_back(1);
    for(int i=1;i<=n;i++)
    {
        if(color[i] ==0)
        {
            graph[0].pop_back();
            graph[0].push_back(i);
            dfs(0);
            if(done)
            {
                reverse(ans.begin(),ans.end());
                cout << ans.size() << endl;
                for(int i=0;i<ans.size();i++)
                {
                    cout << ans[i] << (i==ans.size()-1 ? "" : " ");
                }
                return 0;
            }
        }
    }
    cout << "IMPOSSIBLE" << endl;
    return 0;
}