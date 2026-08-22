#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll N,D;cin >> N>>D;
    vector<ll>arr(N);
    for(ll i=0;i<N;i++)cin >> arr[i];
    sort(arr.begin(),arr.end());
    ll ans=0;
    ll l =0,r=N-1;
    while(l<=r)
    {
        ll req = D / arr[r];
        if(req ==0)
        {
            ans++;
            r--;
            continue;
        }
        if(l+req >r)break;
        l+= req;
        r--;
        ans++;
    }
    cout << ans;
}