#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9+7;
const int MAXN = 1e6+5;
int target;
vector<int> coins;
int dp[MAXN]; // here store counts of combinations
// index for value , value for counts
int f(int cur)
{
    if(cur>target)
        return 0;
    if(cur==target)
        return 1;
    if(dp[cur] != -1)
        return dp[cur];
    dp[cur] = 0;
    for(int i=0;i<coins.size();i++)
    {
        if(cur+coins[i]<=target){
        dp[cur] = (dp[cur]+f(cur+coins[i]))%MOD;
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
    for(int i=0;i<n;i++)
    {
        int x;
        cin >> x;
        coins.push_back(x);
    }
    if(n==1 && coins[0] <= target){cout << 1;return 0;}
    for(int i=0;i<=target;i++)
    {
        dp[i] = -1;
    }
    cout << f(0);
    return 0;
}