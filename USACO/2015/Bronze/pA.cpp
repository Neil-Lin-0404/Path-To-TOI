#include <bits/stdc++.h>
using namespace std;


int main()
{
    freopen("paint.in","r",stdin);
    freopen("paint.out","w",stdout);
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    if(b < c || d < a)
    {
        cout << d-c + b-a;
    }
    else
    {
        cout <<max(b,d) - min(a,c);
    }
    return 0;
}