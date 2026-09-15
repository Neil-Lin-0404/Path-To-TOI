#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("promote.in","r",stdin);
    freopen("promote.out","w",stdout);  
    int originalSum=0,afterSum=0;
    int orig[4],after[4];
    for(int i=0;i<4;i++)
    {
        cin >> orig[i];
        cin >> after[i];
        originalSum += orig[i];
        afterSum += after[i];
    }
    int miss = afterSum - originalSum;
    for(int i=0;i<4;i++)
    {
        miss -= (after[i] - orig[i]);
        if(i!=3)cout << miss << endl;
    }
}