#include <bits/stdc++.h>
using namespace std;
int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,1,-1};
char grid[1000][1000];
bool visited[1000][1000];
int n,m;
void dfs(int x,int y)
{
    visited[x][y]=true;
    for(int i=0;i<4;i++)
    {
        int nx=x+dx[i];
        int ny=y+dy[i];
        if(nx<0 || ny <0 || nx>=n || ny>=m) continue;
        if(visited[nx][ny]) continue;
        if(grid[nx][ny]=='#') continue;
        visited[nx][ny]=true;
        dfs(nx,ny);
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    
    cin>>n>>m;
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>grid[i][j];
            visited[i][j]=false;
        }
    }
    int ans=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(!visited[i][j]&&grid[i][j]=='.')
            {
                ans++;
                dfs(i,j);
            }
        }
    }
    cout<<ans;

}