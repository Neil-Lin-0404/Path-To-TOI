#include <bits/stdc++.h>
using namespace std;

struct hps
{
    int hoof,paper,scissors;
};

int main()
{
    freopen("hps.in","r",stdin);
    freopen("hps.out","w",stdout);
    int n;
    cin >>n;
    vector<hps>v(n+1);
    v[0].hoof =0;
    v[0].paper = 0;
    v[0].scissors=0;
    for(int i=1;i<=n;i++)
    {
        char c;
        cin >>c;
        int n;
        if(c=='H')n=1;
        if(c=='P')n=2;
        if(c=='S')n=3;
        v[i].hoof = v[i-1].hoof + ((n==1) ? 1 :0);
        v[i].paper = v[i-1].paper + ((n==2) ? 1 : 0);
        v[i].scissors = v[i-1].scissors + ((n==3)?1:0);
    }
    int maxWins=0;
    for(int i=1;i<=3;i++)
    {

        for(int j =1;j<=3;j++)
        {
            for(int k=1;k<=n;k++)
            {
                int Wins =0;
                if(i==1)Wins+=v[k].scissors;
                if(i==2)Wins+=v[k].hoof;
                if(i==3)Wins+=v[k].paper;
                if(j==1)Wins+=v[n].scissors - v[k].scissors;
                if(j==2)Wins+=v[n].hoof - v[k].hoof;
                if(j==3)Wins+=v[n].paper - v[k].paper;
                maxWins = max(maxWins,Wins);
            }
        }
    }
    cout << maxWins;

}