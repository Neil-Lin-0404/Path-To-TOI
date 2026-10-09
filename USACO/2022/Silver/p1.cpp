#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin >> n;
    vector<vector<int>>pref(n+1);
    vector<int>ans(n+1);
    // first is seq , second is num
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            int u;
            cin >> u;
            pref[i].push_back(u);
        }
    }
    vector<bool>has(n+1,false);
    for(int i=1;i<=n;i++)
    {
        for(int j =0;j<n;j++)
        {
            if(has[pref[i][j]])continue;
            has[pref[i][j]] = true;
            ans[i] = pref[i][j];
            break;
        }
    }
    for(int i=1;i<=n;i++)cout << ans[i] << '\n';
}