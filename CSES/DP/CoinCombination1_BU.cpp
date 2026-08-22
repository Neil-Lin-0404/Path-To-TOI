#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9+7;
const int MAXN = 1e6+5;
int target;
vector<int> coins;
int dp[MAXN]; // index for value , value for counts (ordered)
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
    dp[0] = 1;
    for(int x=0;x<=target;x++)
    {
        for(int i=0;i<coins.size();i++)
        {
            if(x+coins[i]<=target)
            {
                dp[x+coins[i]] = (dp[x+coins[i]] + dp[x])%MOD;
            }
        }
    }
    cout << dp[target];
    return 0;
}
