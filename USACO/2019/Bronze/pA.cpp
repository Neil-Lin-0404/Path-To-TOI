#include <bits/stdc++.h>
using namespace std;

int main()
{

    freopen("shell.in","r",stdin);
    freopen("shell.out","w",stdout);

    int n;
    cin >>n;
    vector<tuple<int,int,int>> swaps;
    for(int i=0;i<n;i++)
    {
        int a,b,c;
        cin >> a >> b >> c;
        swaps.push_back({a,b,c});
    }
    int maxAns = 0;
    for(int i=1;i<=3;i++)
    {
        int ans = 0;
        int pos = i;
        for(auto [a,b,c] : swaps)
        {
            if(pos == a) pos =b;
            else if(pos == b) pos =a;
            if(pos==c)ans++;
        }
        maxAns = max(maxAns,ans);
    }
    cout << maxAns << endl;
    return 0;
}