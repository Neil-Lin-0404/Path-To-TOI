#include <bits/stdc++.h>
using namespace std;

int main()
{
    int s,u;
    cin >> s >> u;
    vector<vector<char>>grid(s+1,vector<char>(s+1));
    for(int i=1;i<=s;i++)
    {
        for(int j=1;j<=s;j++)
        {
            cin >> grid[i][j];
        }
    }   
    // x y 左上

    // y + s/2 ( 右上) , x = 左上x
    // x + s/2 (左下) , y = 左上y
    // x + s/2 , y + s/2 (右下)
    int ans=0;
    for(int x=1;x<=s/2;x++)
    {
        for(int y=1;y<=s/2;y++)
        {
            int cnt=0;
            if(grid[x][y]=='#')cnt++;
            if(grid[x][s-y+1]=='#')cnt++;
            if(grid[s-x+1][y]=='#')cnt++;
            if(grid[s-x+1][s-y+1]=='#')cnt++;
            ans += min(cnt,4-cnt);
        }
    }
    // grab updates
    cout << ans << '\n';
    for(int i=0;i<u;i++)
    {
        int ux,uy;
        cin >> ux >> uy;
        int originalCnt=0,afterCnt=0;
        int tx,ty;
        tx = (ux > s/2 ? s+1-ux: ux);
        ty = (uy > s/2 ? s+1-uy: uy);
        if(grid[tx][ty]=='#')originalCnt++;
        if(grid[tx][s-ty+1]=='#')originalCnt++;
        if(grid[s-tx+1][ty]=='#')originalCnt++;
        if(grid[s-tx+1][s-ty+1]=='#')originalCnt++;

        grid[ux][uy] = (grid[ux][uy] == '#' ? '.' : '#');
        if(grid[tx][ty]=='#')afterCnt++;
        if(grid[tx][s-ty+1]=='#')afterCnt++;
        if(grid[s-tx+1][ty]=='#')afterCnt++;
        if(grid[s-tx+1][s-ty+1]=='#')afterCnt++;
        if(originalCnt > 2)
            ans -= afterCnt - originalCnt;
        else if(originalCnt < 2)
            ans += afterCnt - originalCnt;
        else
            ans--;
        cout << ans << '\n';
    }
    return 0;
}