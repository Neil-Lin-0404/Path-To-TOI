#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("lostcow.in","r",stdin);
    freopen("lostcow.out","w",stdout);
    int x,y;
    cin >> x >> y;
    if(x == y)
    {
        cout << 0;
        return 0;
    }
    int cnt =0;
    int step =1;
    while(true)
    {
        if((x + step >= y && x < y) || (x +step <= y && x > y))
        {
            cnt+=abs(step/2);
            cnt+=abs(x-y);
            break;
        }
        cnt+=abs(step);
        cnt+=abs(step/2);
        step *= 2 * -1;
    }
    cout << cnt;
}