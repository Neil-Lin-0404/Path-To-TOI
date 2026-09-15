#include <bits/stdc++.h>
using namespace std;

int main()
{
   freopen("diamond.in","r",stdin);
    freopen("diamond.out","w",stdout);
       int n,k;
    cin >>n>>k;

    vector<int>sz(n);
    for(int i=0;i<n;i++)cin>>sz[i];
    sort(sz.begin(),sz.end());
    int maxItems=1;
    for(int i=0;i<n;i++)
    {
        int maxval = sz[i] + k;
        int items = (upper_bound(sz.begin(),sz.end(),maxval) - sz.begin()) - i;
        if(items==sz.size())items = sz.size() - i;
        maxItems = max(items,maxItems);
        /*
        k = 3
        1 1 3 4 6
        -2,4
        -2,4
        0,6
        1,7
        3,9
        */
    }
    cout << maxItems;
}