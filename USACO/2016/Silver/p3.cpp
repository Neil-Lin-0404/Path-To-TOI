#include <bits/stdc++.h>
using namespace std;
struct cow
{
    int num,x,y,power;
};
const int MAXN = 205;
vector<cow>g;
int MD=0;
int dfs(cow node,vector<bool>&vis)
{
    int dis=1;
    vis[node.num] = true;
    int x = node.x;
    int y = node.y;
    int p = node.power;
    for(auto v : g)
    {
        if(vis[v.num])continue;
        int vx = v.x;
        int vy = v.y;
        int xd = abs(x-vx);
        int yd = abs(y-vy);
        int s = ceil((float)sqrt( xd*xd +yd*yd));
        if(s <= p)
            dis +=dfs(v,vis);
    }
    return dis;
}

int main()
{
    freopen("moocast.in","r",stdin);
    freopen("moocast.out","w",stdout);
    int n;
    cin >>n;
    for(int i=1;i<=n;i++)
    {
        int x,y,pow;
        cin >> x >> y >> pow;
        cow c;
        c.num = i;
        c.x=x;
        c.y=y;
        c.power=pow;
        g.push_back(c);
    }
    
    for(int i=0;i<n;i++)
    {
        vector<bool>vis(MAXN,false);
        MD = max(dfs(g[i],vis),MD);
    }
    cout << MD;
}