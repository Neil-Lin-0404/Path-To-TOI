#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("cowsignal.in","r",stdin);  
    freopen("cowsignal.out","w",stdout);
    int m,n,k;
    cin >> m >> n >> k;
    vector<string> signal(m);
    for(int i=0;i<m;i++)
    {
        cin >> signal[i];
    }
    for(int i=0;i<m;i++)
    {
        for(int p=0;p<k;p++)
        {
        for(int j=0;j<n;j++)
        {
                for(int l=0;l<k;l++)
                {
                    cout << signal[i][j];
                }
        }
        cout << endl;
    }
    }
    return 0;
}