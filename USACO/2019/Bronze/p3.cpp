#include <bits/stdc++.h>
using namespace std;
vector<bool>vis(7,false);
vector<vector<string>>namesl(8);
map<int,string>names = {{0,"Beatrice"},{1,"Belinda"},{2,"Bella"},{3,"Bessie"},{4,"Betsy"},{5,"Blue"},{6,"Buttercup"},{7,"Sue"}};
map<string,int>mp = {{"Beatrice",0},{"Belinda",1},{"Bella",2},{"Bessie",3},{"Betsy",4},{"Blue",5},{"Buttercup",6},{"Sue",7}};
void dfs(string node)
{
    cout << node << '\n';
    vis[mp[node]] = true;
    int curNode = mp[node];
    for(string name : namesl[curNode])
    {
        int tarNode = mp[name];
        if(vis[tarNode])continue;
        dfs(name);
    }
}
int main()
{
    freopen("lineup.in","r",stdin);
    freopen("lineup.out","w",stdout);
    
    int t;
    cin >>t;
    for(int i=0;i<t;i++)
    {
        string name1,name2;
        for(int i=0;i<6;i++)
        {
            string shit;
            cin >>shit;
            if(i==0)name1=shit;
            if(i==5)name2=shit;
        }
        namesl[mp[name1]].push_back(name2);
        namesl[mp[name2]].push_back(name1);
    }
    for(int i=0;i<8;i++)
    {
        if(namesl[i].size()==2)continue;
        if(vis[i])continue;
        dfs(names[i]);
    }

}