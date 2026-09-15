#include <iostream>
#include <vector>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n,q;
    cin >> n>>q;
    vector<ll>pref(n);
    for(int i=0;i<n;i++)
    {
        int x; cin >>x;
        if(i==0)pref[i] = x;
        else pref[i] = pref[i-1] + x;
    }
    for(int i=0;i<q;i++)
    {
        int l,r;
        cin >> l >> r;
        if(l==0)
            cout << pref[--r];
        else
            cout << pref[--r] - pref[--l];
        cout << '\n';
    }
}