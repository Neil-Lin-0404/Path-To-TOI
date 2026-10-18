#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("score.in","r",stdin);
    freopen("score.out","w",stdout);
    vector<vector<int>>sc(37,vector<int>(15));
    for(int i =1;i<=36;i++)
    {
        for(int j=0;j<15;j++)cin>>sc[i][j];
        sort(sc[i].begin(),sc[i].end());
    }
    
    for(int k=1;k<=36;k++)
    {
        int total=0;
    for(int i=5;i<15;i++)
    {
        total+=sc[k][i];
    }
    cout << k << ": " << (float)total/10 << '\n';
    }
    
}