#include <bits/stdc++.h>
using namespace std;

struct c
{
    int b1,b2,b3;
};
int main()
{
    freopen("bcount.in","r",stdin);
    freopen("bcount.out","w",stdout);

    int n,q;cin >> n >> q;
    vector<c>cows(n+1);
    cows[0].b1 = 0;
    cows[0].b2 = 0;
    cows[0].b3 = 0;
    for(int i=1;i<=n;i++)
    {
        int x;cin >>x;
        cows[i].b1 = (x == 1) ? 1+cows[i-1].b1 : cows[i-1].b1;
        cows[i].b2 = (x == 2) ? 1+cows[i-1].b2 : cows[i-1].b2;
        cows[i].b3 = (x == 3) ? 1+cows[i-1].b3 : cows[i-1].b3;
    }
    for(int i=0;i<q;i++)
    {
        int s,e;cin >>s >> e;
        s-=1;
        int first=cows[e].b1 - cows[s].b1;
        int second=cows[e].b2 - cows[s].b2;
        int third=cows[e].b3 - cows[s].b3;
        cout << first << ' ' << second << ' ' << third << '\n';
    }
}