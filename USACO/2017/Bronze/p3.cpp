#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("cowtip.in","r",stdin);
    freopen("cowtip.out","w",stdout);
    int n;
    cin >>n;
    vector<vector<char>>grid(n,vector<char>(n));
    int times=0;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin>>grid[i][j];
    for(int i=n-1;i>=0;i--)
    {
        for(int j=n-1;j>=0;j--)
        {
            if(grid[i][j] == '1') // means tipped
            {
                for(int k = 0;k<=i;k++)
                {
                    for(int p =0;p<=j;p++)
                    {
                        grid[k][p] = (grid[k][p] == '1')? '0' : '1';
                    }
                }
                times++;
            }
        }
    }
    cout << times;
}