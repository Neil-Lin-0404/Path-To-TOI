#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int k,n,w;
    cin >> k >> n >> w;
    ll ans=0;
    ans = (1LL*k+1LL*k*w)*w/2 - n;
    cout << (ans > 0 ? ans : 0) << endl;
    return 0;
}