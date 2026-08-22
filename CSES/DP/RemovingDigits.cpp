#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e6+5;
const int INF = 1e9+5;
int mxcnt =INF;
int dp[MAXN]; // index is currently n , value is minimum count of digits to remove to make n 0
int f(int n)
{
    if(dp[n] != -1) return dp[n];
    if(n==0) return 1;
    string s = to_string(n);
    dp[n] = INF;
    for(int i=0;i<s.length();i++)
    {
        int digit = s[i]-'0';
        if(digit == 0) continue;
        dp[n] = min(dp[n],f(n-digit)+1);
    }
    return dp[n];
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    int n;
    cin >>n;
    dp[0] = 0;
    for(int i=1;i<10;i++)
    {
        dp[i] = 1;
    }
    for(int i=10;i<=n;i++)
    {
        dp[i] = -1;
    }
    cout << f(n);
}