#include <bits/stdc++.h>
using namespace std;

string yo = "yoo\n";
int main()
{
    /*freopen("milkorder.in","r",stdin);
    freopen("milkorder.out","w",stdout);*/
    int n,m,k;
    cin >> n >> m >> k;
    vector<bool>cows(n+1,false);
    vector<int>hierachy(m);
    vector<int>cowPos(n+1,0);
    vector<int>posis(n+1,0);
    posis[0] = -1;
    bool inHierachy = false;
    for(int i=0;i<m;i++)
    {
        cin>>hierachy[i];
        if(hierachy[i] == 1)inHierachy = true;
    }
    for(int i=0;i<k;i++)
    {
        int cow,pos;
        cin >> cow >> pos;
        posis[pos] = cow;
        cowPos[cow]=pos;
        cows[cow] = true;
        if(cow == 1)
        {
            cout << pos;
            return 0;
        }
    }
    if(inHierachy)
    {
        int finalPos =0;
        int curHiPos=0;
        do{
            if(posis[finalPos]==hierachy[curHiPos])curHiPos++;
            finalPos++;
            
        }while(posis[finalPos]);
        posis[finalPos]=hierachy[curHiPos];
        while(hierachy[curHiPos] !=1 && posis[finalPos] !=1)
        {
            curHiPos++;
            if(posis[finalPos])
            {
                do{
                    if(posis[finalPos]==hierachy[curHiPos])curHiPos++;
                    finalPos++;
                }while(posis[finalPos]);
            }
            posis[finalPos] = hierachy[curHiPos];
        }
        cout << finalPos;
    }
    else
    {
        int available=0;
        int lastPlaced =0;// for hierachy)
        for(int i=1;i<=n;i++)
        {
            if(!posis[i])available++;
            if(posis[i])
            {
                for(int j=0;j<m;j++)
                {
                    if(posis[i] == hierachy[j])
                    {
                        available -= j + lastPlaced;
                        fill(posis.begin() + i -j,posis.begin()+i,1);
                        if(available>0){cout << i+1;return 0;}
                    }
                }
            }
        }
        for(int i=1;i<=n;i++)
        {
            if(!posis[i])
            {
                cout << i;
                return 0;
            }
        }
    }
}