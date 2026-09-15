#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("tttt.in","r",stdin);
    freopen("tttt.out","w",stdout);
    int independentWin=0,teamWin=0;
    set<char>iteams;
    set<pair<char,char>>tteams;
    vector<vector<char>>ttt(3);
    // column
    for(int i=0;i<3;i++)
    {
        set<char>st;
        for(int j=0;j<3;j++)
        {
            char v;
            cin >>v;
            st.insert(v);
            ttt[i].push_back(v);
        }

        if(st.size()==1 && !iteams.count(*st.begin()))
        {
            independentWin++;
            iteams.insert(*st.begin());}
        else if(st.size()==2 &&
                !tteams.count({*st.begin(),*next(st.begin(),1)})
            )
            {teamWin++;
                tteams.insert({*st.begin(),*next(st.begin(),1)});
            }
    }
    // row
    for(int i=0;i<3;i++)
    {
        set<char>st;
        for(int j=0;j<3;j++)
        {
            st.insert(ttt[j][i]);
        }
        
        if(st.size()==1 && !iteams.count(*st.begin()))
        {
            independentWin++;
            iteams.insert(*st.begin());}
        else if(st.size()==2 &&
                !tteams.count({*st.begin(),*next(st.begin(),1)})
            )
            {teamWin++;
                tteams.insert({*st.begin(),*next(st.begin(),1)});}
    }
    set<char>st1,st2;
    // diag
    for(int i=0;i<3;i++)
    {
        st1.insert(ttt[i][i]);
        st2.insert(ttt[i][3-i-1]);
    }
    if(st1.size()==1 && !iteams.count(*st1.begin()))
    {
        independentWin++;
        iteams.insert(*st1.begin());}
    else if(st1.size()==2 &&
            !tteams.count({*st1.begin(),*next(st1.begin(),1)})
        )
        {teamWin++;
            tteams.insert({*st1.begin(),*next(st1.begin(),1)});}

    if(st2.size()==1 && !iteams.count(*st2.begin()))
    {
        independentWin++;
        iteams.insert(*st2.begin());}
    else if(st2.size()==2 &&
            !tteams.count({*st2.begin(),*next(st2.begin(),1)})
        )
        {teamWin++;
            tteams.insert({*st2.begin(),*next(st2.begin(),1)});}
    cout << independentWin << '\n' << teamWin;
}