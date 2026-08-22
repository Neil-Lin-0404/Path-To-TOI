#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
const int MAXN=1e6+5;
long long dp[MAXN];

int main()
{
    int n;
    cin>>n;
    dp[0] = 1;
    dp[1] = 1;
    for(int i=2;i<=n;i++)
    {
        for(int j=1;j<=6;j++)
        {
            if(i-j>=0)
            {
                dp[i] = (dp[i] + dp[i-j])%MOD;
            }
        }
    }
    cout<<dp[n]%MOD<<endl;
    return 0;
}