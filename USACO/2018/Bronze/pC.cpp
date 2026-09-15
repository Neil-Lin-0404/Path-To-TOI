#include <bits/stdc++.h>
using namespace std;


int main()
{
    freopen("outofplace.in","r",stdin);
    freopen("outofplace.out","w",stdout);
    int n,diff=0;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    vector<int>ori = v;
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++)
        if(ori[i]!=v[i])diff++;
    cout << (diff ? --diff : 0);
}