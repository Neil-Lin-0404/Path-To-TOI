#include <bits/stdc++.h>
using namespace std;
char grid[1000][1000];
int n,m;
int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,1,-1};
char dir[4] = {'D','U','R','L'};
bool visited[1000][1000];
char from[1000][1000];
struct node
{
    int x,y,layer;
};

queue<node>q;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    stack<char>path;

    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>grid[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(grid[i][j]=='A')
            {
                q.push({i,j,0});
                from[i][j] = 'A';
                visited[i][j] = true;
            }
        }
    }
    while(!q.empty())
    {
        node now = q.front();
        q.pop();
        if(grid[now.x][now.y]=='B')
        {
            cout<<"YES"<<endl;
            cout<<now.layer<<endl;
            int px = now.x;
            int py = now.y;

            while(grid[px][py]!='A')
            {
                path.push(from[px][py]);
                if(from[px][py]=='D') px--;
                else if(from[px][py]=='U') px++;
                else if(from[px][py]=='R') py--;   
                else if(from[px][py]=='L') py++;
            }
            while(!path.empty())
            {
                cout<<path.top();
                path.pop();
            }
            return 0;
        }
        for(int i=0;i<4;i++)
        {
            int nx = now.x + dx[i];
            int ny = now.y + dy[i];
            if(nx<0 || ny<0 || nx>=n || ny>=m) continue;
            if(grid[nx][ny]=='#') continue;
            if(visited[nx][ny]) continue;
            visited[nx][ny]=true;
            q.push({nx,ny,now.layer+1});
            from[nx][ny] = dir[i];
        }
    }
    cout<<"NO"<<endl;
    return 0;
}