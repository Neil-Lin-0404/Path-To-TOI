#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector<ll> dp;
void f()
{

}
int main()
{
    int n;
    cin >> n;
    dp.resize(n);
    vector<int>h(n);
    fill(dp.begin(),dp.end(),LLONG_MAX);
    for(int i = 0 ; i <n;i++)cin>>h[i];
    dp[0]=0;
    for(int i = 1; i <n;++i)
    {
        dp[i]=min(dp[i],abs(h[i] - h[i-1])+dp[i-1]);
        if(i>=2)dp[i] = min(dp[i],abs(h[i]-h[i-2])+dp[i-2]);
    }
    cout <<dp[n-1];
    
}