#include <bits/stdc++.h>
using namespace std;
const int MX = 1e5+5;
vector<vector<int>> graph(MX);
vector<bool>visited(MX,false);
vector<int>parent(MX);

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
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    queue<pair<int,int>>q;
    q.push({1,1});
    visited[1] = true;
    parent[1] = 0;
    while(!q.empty())
    {
        int node = q.front().first;
        int dist = q.front().second;
        q.pop();
        for(auto next : graph[node])
        {
            if(visited[next]) continue;
            visited[next] = true;
            parent[next] = node;
            q.push({next,dist+1});
            if(next==n)
            {
                cout<<dist+1<<endl;
                int node1 = n;
                vector<int>path;
                while(node1!=0)
                {
                    path.push_back(node1);
                    node1 = parent[node1];
                }
                reverse(path.begin(),path.end());
                for(auto node : path)
                {
                    cout<<node<<" ";
                }
                return 0;
            }
        }
    }
    cout<<"IMPOSSIBLE"<<endl;
    return 0;
}