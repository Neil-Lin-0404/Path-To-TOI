#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >>t;
    while(t--)
    {
        ll A,B,Ca,Cb,tar;
        cin >>A >>B >>Ca >>Cb >>tar;
        ll ans = (int)((tar-A)/Ca + (tar-A)%Ca)*1LL * Cb-B;
        cout << (ans > 0 ? ans : 0) << endl;
    }
}