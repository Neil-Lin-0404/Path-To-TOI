#include <bits/stdc++.h>
using namespace std;


int main()
{
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
    int n;
    cin >>n;
    int FoffSetMn=0,FoffSetMx=0;
    int RoffSetMn=0,RoffSetMx=0;
    vector<tuple<string,int,int>>segs;
    for(int i=0;i<n;i++)
    {
        string type;
        int min,max;
        cin >> type >>min>>max;
        segs.push_back({type,min,max});
    }
    int FMn=INT_MIN,FMx=INT_MAX;
    // correct
    for(auto [t,mn,mx] : segs)
    {
        if(t == "on")
        {
            FoffSetMn-=mx;
            FoffSetMx -=mn;
        }
        if(t == "off")
        {
            FoffSetMn+=mn;
            FoffSetMx+=mx;
        }
        if(t=="none")
        {
            FMn = max(FMn,mn+FoffSetMn);
            FMx = min(FMx,mx+FoffSetMx);
            if(FMn < 0)FMn=0;
            if(FMx < 0)FMx =0;
        }
    }
    int RMn = INT_MIN,RMx=INT_MAX;
    for(int i =segs.size()-1;i>=0;i--)
    {
        // tuple
        tuple<string,int,int> t = segs[i];
        string type = get<0>(t);
        int mn = get<1>(t);
        int mx = get<2>(t);
        if(type == "none")
        {
            RMn = max(RMn,mn+RoffSetMn);
            RMx = min(RMx,mx+RoffSetMx);
            if(RMn<0)RMn=0;
            if(RMx<0)RMx=0;
        }
        if(type == "on")
        {
            RoffSetMn += mn;
            RoffSetMx += mx;
        }
        if(type == "off")
        {
            RoffSetMn -= mx;
            RoffSetMx -= mn;
        }

    }
    cout << FMn << ' ' << FMx << '\n' << RMn << ' ' << RMx;
    return 0;
}