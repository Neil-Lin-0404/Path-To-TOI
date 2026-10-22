using namespace std;
#include <bits/stdc++.h>
int main()
{
    freopen("hps.in", "r", stdin);
freopen("hps.out", "w", stdout);

    int n,t;
    cin >> n >>t;
    cerr << "n: " << n << " t: " <<t << '\n';
    vector<char>EG(n+1);
    for(int i =1;i<=n;i++)cin>>EG[i];
    vector<vector<vector<int>>>canWin(n+1,vector<vector<int>>(t+1,vector<int>(3,0))); // [games][hasChange][curGesture]
    /*
    index :
    0 = HOOF
    1 = SCISSORS
    2 = PAPER
    */
    cerr << "CheckPoint 1 \n";
    for(int i =1;i<=n;i++)
    {
        canWin[i][0][0] = canWin[i-1][0][0] + (EG[i] == 'S');
        canWin[i][0][1] = canWin[i-1][0][1] + (EG[i] == 'P');
        canWin[i][0][2] = canWin[i-1][0][2] + (EG[i] == 'H');
    }
    cerr << "CheckPoint 2 \n";
    // Games
    for(int j =1;j<=t;j++)
    {
        cerr << "CheckPoint 3 \n";
        // hasChange
        for(int i = 1;i<=n;i++)
        {
            canWin[i][j][0]= max(canWin[i-1][j][0],max(canWin[i-1][j-1][1],canWin[i-1][j-1][2])) + (EG[i] == 'S');
            canWin[i][j][1]= max(canWin[i-1][j-1][0],max(canWin[i-1][j][1],canWin[i-1][j-1][2])) + (EG[i] == 'P');
            canWin[i][j][2]= max(canWin[i-1][j-1][0],max(canWin[i-1][j-1][1],canWin[i-1][j][2])) + (EG[i] == 'H');
        }
    }
    int MAXANS=0;
    for(int i = 0;i<=t;i++)
    {
        for(int j=0;j<3;j++)
        {
            MAXANS = max(MAXANS,canWin[n][i][j]);
        }
    }
    cout << MAXANS;
}
