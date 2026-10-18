#include <bits/stdc++.h>
using namespace std;
const int MAXN = 55;
const int MP=2;
// if second is 0 , means next one should be higher , if right now is 1 then next one should be lower
vector<vector<int>>memo(MAXN,vector<int>(MP));
vector<int>seq;
int main()
{
    char c;
    cin >> c;
    int n;
    while(cin >> n >> c)
    {
        seq.push_back(n);
        if(c=='}')break;
    }
    for(int i=0;i<seq.size();i++)fill(memo[i].begin(),memo[i].end(),1);
    for(int i=0;i<seq.size();i++)
    {
        for(int j=0;j<i;j++)
        {
            for(int k=0;k<2;k++)
            {
                // means next one should be higher
                if(k==0 && seq[i] > seq[j])memo[i][1-k]= max(memo[i][1-k],memo[j][k]+1);
                if(k==1 && seq[i] < seq[j])memo[i][1-k]= max(memo[i][1-k],memo[j][k]+1);
            }

        }
    }
    int MAXSEQ=0;
    for(int i=0;i<seq.size();i++)
    {
        for(int j=0;j<2;j++)
            MAXSEQ = max(MAXSEQ,memo[i][j]);
    }
    cout << MAXSEQ;

}