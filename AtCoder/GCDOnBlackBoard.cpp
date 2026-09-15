#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin >>n;
    vector<int>original(n);
    vector<int>gcdP(n),gcdS(n);
    for(int i=0;i<n;i++)
    {
        int val;
        cin >>val;
        original[i] = val;
        if(i==0)gcdP[i]=val;
        else gcdP[i] = gcd(gcdP[i-1],val);
    }
    for(int i=n-1;i>=0;i--)
    {
        if(i==n-1)gcdS[i] = original[i];
        else gcdS[i] = gcd(gcdS[i+1],original[i]);
    }
    int ans =0;
    for(int i=0;i<n;i++)
    {
        if(i==0)ans = max(ans,gcdS[i+1]);
        else if(i==n-1)ans=max(ans,gcdP[i-1]);
        else
        {
            int g = gcd(gcdP[i-1],gcdS[i+1]);
            ans  = max(ans,g);
        }
    }
    cout << ans;
}