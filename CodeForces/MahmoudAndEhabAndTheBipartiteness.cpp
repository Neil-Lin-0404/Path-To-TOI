#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e5+5;
#define ll long long
vector<vector<int>> adj(MAXN);
vector<int> visited(MAXN, 0);
vector<int> color(MAXN, 0);
int main()
{
    int n;
    cin >> n;
    ll count=0;
    for(int i=0;i<n-1;i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    stack<int>stk;
    stk.push(1);
    visited[1] = true;
    color[1] = 1;
    int red =1,blue=0;
    while(!stk.empty()) {
        int u = stk.top();
        stk.pop();
        for(int v : adj[u]) {
            if(!visited[v]) {
                stk.push(v);
                visited[v] = true;
                color[v] = color[u] == 1 ? 2 : 1;
                if(color[v] == 1) red++;
                else blue++;
            }
        }
    }
    for(int i=1;i<=n;i++) {
        if(color[i] == 1)
        {
            int cur = adj[i].size();
            count += blue - cur;
        }
    }
    cout << count << endl;
}