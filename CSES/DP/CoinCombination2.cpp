#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9+7;
const int MAXN = 1e6+5;
int target;
vector<int> coins;
int dp[MAXN][105]; //first one for current sum, second one for index of coin
int f(int cur,int index)
{
    if(cur>target )
        return 0;
    if(index>=coins.size())
        return 0;
    if(cur==target)
    {
        return 1;
    }
    if(dp[cur][index] != -1)
        return dp[cur][index];
    dp[cur][index] = 0;
    dp[cur][index] += f(cur+coins[index],index)%MOD;
    dp[cur][index] += f(cur,index+1)%MOD;
    /*
    for(int i=target)
    */
    return dp[cur][index]%MOD;
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
    for(int i=0;i<=target;i++)
    {
        for(int j=0;j<n;j++)
        {
            dp[i][j] = -1;
        }
    }
    sort(coins.begin(),coins.end());
    if(n==1 && coins[0] <= target){cout << 1;return 0;}
    cout << f(0,0)%MOD;
    return 0;
}