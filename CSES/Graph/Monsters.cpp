#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1005;
char graph[MAXN][MAXN];
int dist[MAXN][MAXN];
char dir[MAXN][MAXN];
int dx[] = {0,0,1,-1};
int dy[] = {1,-1,0,0};
char dir_char[] = {'R','L','D','U'};
struct nodes
{
    int x,y,dist;
};
int main()
{
    int n,m;
    cin >> n >>m;
    queue<nodes>monst;
    queue<nodes>player;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            dist[i][j] = INT_MAX;
            char x;
            cin >>x;
            if(x=='A')
            {
                player.push({i,j,0});
                dir[i][j] = 'A';
                if(i==0 || i==n-1 || j==0 || j==m-1)
                {
                    cout << "YES\n";
                    cout << 0 << '\n';
                    return 0;
                }
            }
            else if(x=='M')
            {
                monst.push({i,j,0});
                dist[i][j] = 0;
            }
            graph[i][j] = x;
        }
    }
    while(!monst.empty())
    {
        nodes cur = monst.front();
        int x = cur.x;
        int y = cur.y;
        int dis = cur.dist;
        monst.pop();
        for(int i=0;i<4;i++)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if(nx<0 || nx>=n || ny<0 || ny>=m || graph[nx][ny]=='#' || dis+1 >= dist[nx][ny])
            {
                continue;
            }
            dist[nx][ny] = dis+1;
            monst.push({nx,ny,dis+1});
        }
    }
    while(!player.empty())
    {
        nodes cur = player.front();
        int x = cur.x;
        int y = cur.y;
        int dis = cur.dist;
        player.pop();
        for(int i=0;i<4;i++)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if(nx<0 || nx>=n|| ny<0 || ny>=m || graph[nx][ny]=='#' || dis+1 >= dist[nx][ny] || dir[nx][ny] == 'A')
            {
                continue;
            }
            dist[nx][ny] = dis+1;
            player.push({nx,ny,dis+1});
            dir[nx][ny] = dir_char[i];
            if(nx==0 || nx==n-1 || ny==0 || ny==m-1)
            {
                cout << "YES\n";
                cout << dis+1 << '\n';
                string path = "";
                while(dir[nx][ny]!='A')
                {
                    char to = dir[nx][ny];
                    path+=to;
                    if(to=='R')
                        ny--;
                    else if(to=='L')
                        ny++;
                    else if(to=='D')
                        nx--;
                    else if(to=='U')
                        nx++;
                    
                }
                reverse(path.begin(),path.end());
                cout << path << '\n';
                return 0;
            }
        }
    }
    cout << "NO\n";
    return 0;
}