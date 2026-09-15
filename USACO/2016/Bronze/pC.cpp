#include <bits/stdc++.h>
using namespace std;
#define pii pair<int,int>


int main()
{
    freopen("mowing.in","r",stdin);
    freopen("mowing.out","w",stdout);
    int n;
    cin >> n;
    map<pii,int>mp;
    int x=0,y=0,time=0;
    int mintime=INT_MAX;
    mp[{x,y}] = time;
    for(int i=0;i<n;i++)
    {
        char dir;
        int val,walked=0;
        cin >> dir >> val;

        for(int j=0;j<val;j++)
        {
            time++;
            if(dir == 'N')x--;
            if(dir=='S')x++;
            if(dir=='E')y++;
            if(dir=='W')y--;
            auto it = mp.find({x,y});
            if(it != mp.end())
                mintime = min(time - it->second,mintime);
            mp[{x,y}] = time;
        }
    }
    cout << (mintime == INT_MAX ? -1 : mintime);
}