#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin >>t;
    while(t--)
    {
        int s;
        cin >> s;
        vector<int>v(s+1);
        vector<int>dp(s+1,INT_MAX);
        for(int i=0;i<s;i++)cin >> v[i];
        dp[0] = v[0];
        dp[1] = dp[0]+v[1];
        for(int curStage=0;curStage<s;curStage++)
        {
            for(int Iwalk = 1;Iwalk<=2;Iwalk++)
            {
                for(int fwalk = 1;fwalk<=2;fwalk++)
                {
                    int nextEnd = curStage+Iwalk+fwalk;
                    if(nextEnd >= s)continue;
                    int total = 0;
                    for(int temp = 1;temp<=fwalk;temp++ )total += v[curStage+Iwalk+temp];
                    dp[nextEnd] = min(dp[nextEnd],dp[curStage]+total);

                }
            }
        }
        int mn =INT_MAX;
        for(int i =0;i<s && i < 3;i++)
            mn = min(mn,dp[s-i-1]);
        cout << mn<<'\n';
    }
}