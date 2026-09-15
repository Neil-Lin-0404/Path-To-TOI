#include <bits/stdc++.h>
using namespace std;
const int MAXN = 105;
const int DN = 1005;
vector<bool>vis(105,false);
vector<int>to(DN);
bool dfs(int node,int prev)
{

}

int main()
{
    freopen("hoofball.in","r",stdin);
    freopen("hoofball.out","w",stdout);
    int v;
    cin >> v;
    vector<int>a(v);
    vector<int>from
    int cnt =0;
    for(int i=0;i<v;i++)
        cin >> a[i];
    sort(a.begin(),a.end());
    for(int i=1;i<v;i++)
    {
        if(i==1)to[0] = a[1];
        if(i>=2)
        {
            int ld = a[i-1] - a[i-2];
            int rd = a[i] - a[i-1];
            if(ld <= rd)to[i-1] = a[i-2];
            else to[i-1] = a[i];
        }
        if(i==v-1)to[i] = a[i-1];
    }
    for(auto i = a.begin();i <a.end();i++)
    {
        if(!vis[i])
        {
            cnt++;
            dfs(i);
        }
    }
}