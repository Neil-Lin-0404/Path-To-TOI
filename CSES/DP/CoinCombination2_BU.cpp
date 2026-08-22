#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9+7;
const int MAXN = 1e6+5;
int target;
vector<int> coins;
int dp[MAXN]; // index for value , value for counts (unordered)
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
    for(int i=0;i<n;i++) // n is coins amount
    {
        for(int x=coins[i];x<=target;x++)
        {
            dp[x] = (dp[x] + dp[x-coins[i]])%MOD;
        }
    }
    cout << dp[target];
    return 0;
}
