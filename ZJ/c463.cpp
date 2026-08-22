#include<bits/stdc++.h>
using namespace std;
#define MX 1e5+5
#define ll long long
vector<vector<int>>graph(MX);
ll total=0;
int dfs(int node)
{
    int height =0;
    for(auto i : graph[node])
        height = max(height,dfs(i));
    total += height;
    return ++height;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >>n;
    vector<bool>arr(n+1);
    // get data and find root
    for(int i=1;i<=n;i++)
    {
        int am; cin >> am;
        for(int j=0;j<am;j++)
        {
            int x;cin >> x;
            graph[i].push_back(x);
            arr[x] = true;
        }
    }
    int root =0;
    // find root
    for(int i=1;i<=n;i++)
        {
            if(!arr[i]){root = i;break;}
        }
    int height = dfs(root);
    cout << root <<'\n';
    cout << total;
}