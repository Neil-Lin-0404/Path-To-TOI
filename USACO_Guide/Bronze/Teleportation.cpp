#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("teleport.in","r",stdin);
    freopen("teleport.out","w",stdout);
    int a,b,x,y;
    cin >> a >> b >> x >> y;
    if(a > b) swap(a,b);
    if(x > y) swap(x,y);
    cout << min(b-a,abs(a-x)+abs(b-y));
    return 0;
}