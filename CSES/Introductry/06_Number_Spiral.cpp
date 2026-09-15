#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >>t;
    while(t--)
    {
        int x,y;
        cin >> x >> y;
        // x > y即 我在下行，y > x即 我在右行
        if(x > y)
        {
            if(x % 2 == 0)
            {
                // checked
                cout << 1LL*x*x - y + 1 << endl;
            }
            else
            {
                // Odd
                // y-x 代表我距離交點距離為多少(horizontal)
                // x-y+1 代表我平方數距離交點多少(vertical)
                /*
                平行差別: x^2 - x +1
                垂直差別: x-y
                */
                cout << (1LL*x*x) - (x-y) - (x-1) << endl;
            }
        }
        // 右邊
        else if(y > x)
        {
            if(y % 2 == 1)
            {
                cout << 1LL*y*y - x + 1 << endl;
            }
            else
            {
                // Even
                /*
                平行差別: y^2 - y +1
                垂直差別: y-x
                */

                cout << (1LL*y*y) - (y-x) - (y-1) << endl;
            }
        }
        else
        {
            cout << 1 + ((1LL*2+2*(x-1))*(x-1))/2 << endl;
        }
    }
}