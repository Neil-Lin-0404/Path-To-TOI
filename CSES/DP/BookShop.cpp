#include <bits/stdc++.h>
using namespace std;
const int MAXX = 1e5+5;
int dp[MAXX]; // index is money used , value is max pages
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,x;
    cin >> n>>x;
    vector<int> h(n),s(n); // price , pages
    for(int i=0;i<n;i++)
    {
        cin >> h[i];
    }
    for(int i=0;i<n;i++)
    {
        cin >> s[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int w=x;w>=h[i];w--)
        {
            dp[w] = max(dp[w], dp[w-h[i]]+s[i]);
        }
    }
    cout << dp[x];
    return 0;
}
