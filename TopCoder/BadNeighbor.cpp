#include <bits/stdc++.h>
using namespace std;

int main()
{
    char c;
    cin >>c;
    int n;
    const int MAXN=45,MP=2;
    vector<int>seq;
    while(cin >> n >>c)
    {
        seq.push_back(n);
        if(c=='}')break;
    }
    int ss=seq.size();
    vector<vector<vector<int>>>dp(MAXN,vector<vector<int>>(MP,vector<int>(MP)));
    dp[0][0][0]=0;
    dp[0][1][1] = dp[1][0][1] = seq[0];
    dp[1][1][0] = seq[1];
    for(int i=2;i<ss;i++)
    {

        dp[i][0][0] = max(dp[i-1][1][0],dp[i-1][0][0]);
        dp[i][1][0]=dp[i-1][0][0]+seq[i];
        dp[i][0][1]=max(dp[i-1][1][1],dp[i-1][0][1]);
        dp[i][1][1]=dp[i-1][0][1]+seq[i];
    }
    cout << max(dp[ss-1][1][0],max(dp[ss-1][0][0],dp[ss-1][0][1]));
}