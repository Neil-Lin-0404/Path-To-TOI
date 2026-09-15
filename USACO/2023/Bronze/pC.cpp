#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n,k;
    cin >>n>>k;
    vector<ll>days(n);
    ll coins=0;
    for(int i=0;i<n;i++)
    {
        cin>>days[i];
        if(i==0)coins= k +1;
        else
        {
            if((ll)(days[i] - days[i-1]) > k)
            {
                /*
                5 2
                1 4 5 6 8

                11
                */
                coins+= (ll)k+1;
            }else coins+= (ll)days[i] - days[i-1];
        }
    }
    cout << coins;
}