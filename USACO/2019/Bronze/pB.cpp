#include <bits/stdc++.h>
using namespace std;


int main()
{
    freopen("revegetate.in","r",stdin);
    freopen("revegetate.out","w",stdout);
    int n,c;
    cin >> n >> c;
    vector<vector<int>>cd(n+1);
    vector<int>pasture(n+1,0);
    for(int i=0;i<c;i++)
    {
        int a,b;
        cin >> a >> b;
        if(a > b)swap(a,b);
        cd[a].push_back(b);
        cd[b].push_back(a);
    }

    for(int i=1;i<=n;i++)
    {
        vector<bool>can(5,1);
        can[0]=false;
        for(auto v : cd[i])
            if(can[pasture[v]])can[pasture[v]]=false;
        for(int j=1;j<=4;j++)
        {
            pasture[i] = j;
            if(can[j])break;
        }
    }
    for(int i=1;i<=n;i++)cout << pasture[i];
}