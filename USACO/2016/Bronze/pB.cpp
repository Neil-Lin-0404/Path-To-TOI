#include <bits/stdc++.h>
using namespace std;


int main()
{
    freopen("cbarn.in","r",stdin);
    freopen("cbarn.out","w",stdout);
    int n;
    cin >>n;
    vector<int>cows(n);
    for(int i=0;i<n;i++)cin>>cows[i];

    // pivot
    int minsteps=INT_MAX;
    for(int i=0;i<n;i++)
    {
        // total steps
        int sum =0;
        for(int j=0;j<n;j++)
        {
            if(i > j)
            {
                sum += abs(j-i+n) * cows[j];
            }
            else
            {
                sum += abs(i-j) * cows[j];
            }
        }
        minsteps=min(sum,minsteps);
    }
    cout << minsteps;
    return 0;
}