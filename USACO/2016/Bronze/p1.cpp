#include <bits/stdc++.h>
using namespace std;



int main()
{
    freopen("pails.in","r",stdin);
    freopen("pails.out","w",stdout);
    int x,y,m;
    cin >>x>>y>>m;
    int maxval=0;
    for(int i =0;i<=m/x;i++)
    {
        int cur = i * x;
        cur += (m-cur)/y * y;
        maxval = max(maxval,cur);
    }
    cout << maxval;
}