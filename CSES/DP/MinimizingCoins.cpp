#include <bits/stdc++.h>
using namespace std;
vector<int> coins;
const int MAXN = 1e6+5;
const int INF = 1e9;
int target;
int dp[MAXN]; // current value ( index ) , minimum coins ( value )
int f(int cur)
{
    if(dp[cur] != -1)
    {
        return dp[cur];
    }
    dp[cur] = INF;
    for(int i=0;i<coins.size();i++)
    {
        if(cur-coins[i]>=0)
        {
            dp[cur] = min(dp[cur],f(cur-coins[i])+1);
        }
    }
    return dp[cur];
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n>>target;
    for(int i = 1;i<=target;i++)
    {
        dp[i] = -1;
    }
    dp[0] = 0;
    for(int i=0;i<n;i++)
    {
        int x;
        cin >> x;
        coins.push_back(x);
    }
    int ans = f(target);
    cout << (ans == INF ? -1 : ans);
    
    return 0;
}