#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N=2e5+10;
ll cnt=0;
vector<int>a(N);
void cmp(int i)
{
    if(a[i] < a[i-1])
    {
        cnt += abs(a[i]-a[i-1])*(ll)1;
        a[i] =a[i-1];
    }
}

int main()
{
    int n;
    cin >>n;
    for(int i=0;i<n;i++)
    {
        cin >>a[i];
        if(i>0)
            cmp(i);
    }
    cout << cnt;
    return 0;
}