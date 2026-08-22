#include <bits/stdc++.h>
using namespace std;
vector<int> coins;
const int MAXN = 1e6+5;
const int INF = 1e9;
int target;
int dp[MAXN]; // current value ( index ) , minimum coins ( value )
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n>>target;
    for(int i=0;i<n;i++)
    {
        int x;
        cin >> x;
        coins.push_back(x);
    }
    for(int i=1;i<=target;i++)
    {
        dp[i] = INF;
    }
    dp[0] = 0;
    for(int x=1;x<=target;x++)
    {
        for(int i=0;i<coins.size();i++)
        {
            if(x-coins[i]>=0)
            {
                dp[x] = min(dp[x], dp[x-coins[i]]+1);
            }
        }
    }
    cout << (dp[target] == INF ? -1 : dp[target]);

    return 0;
}
