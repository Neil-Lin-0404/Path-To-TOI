#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >>n;
    vector<int>a(n-1);
    for(int i=0;i<n-1;i++)
        cin >>a[i];
    sort(a.begin(),a.end());
    for(int i=0;i<n-1;i++)
    {
        if(a[i] != i+1)
        {
            cout << i+1;
            return 0;
        }
    }
    cout << n;
    return 0;
}