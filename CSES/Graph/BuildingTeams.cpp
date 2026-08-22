#include <bits/stdc++.h>
using namespace std;
const int MX = 1e5+5;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin >> n>>m;
    vector<vector<int>> graph(MX);
    vector<bool>visited(MX,false);
    for(int i=0;i<m;i++)
    {
        int a,b;
        cin >> a>>b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    vector<int>color(MX,1);
    stack<int>st;
    for(int i=1;i<=n;i++)
    {
        if(!visited[i])
        {
            st.push(i);
            visited[i] = true;
        }
    while(!st.empty())
    {
        int node = st.top();
        st.pop();
        for(auto next : graph[node])
        {
            if(!visited[next])
            {
                color[next] = 3-color[node];
                st.push(next);
                visited[next] = true;
            }
            else if(visited[next] && color[next] == color[node])
            {
                cout<<"IMPOSSIBLE"<<endl;
                return 0;
            }
        }
    }
    }
    for(int i=1;i<=n;i++)
    {
        cout<<color[i]<<" ";
    }
    return 0;
}
