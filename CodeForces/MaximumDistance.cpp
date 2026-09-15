#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin >> n;
    vector<int>x(n);
    vector<int>y(n);
    for(int i=0;i<n;i++)cin>>x[i];
    for(int i=0;i<n;i++)cin>>y[i];
    int md =0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int xdif = x[j] - x[i];
            int ydif = y[j] - y[i];
            int square = xdif * xdif + ydif * ydif;
            md = max(md,square);
        }
    }
    cout << md;
}