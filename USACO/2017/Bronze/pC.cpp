#include <bits/stdc++.h>
using namespace std;


int main()
{
    freopen("measurement.in","r",stdin);
    freopen("measurement.out","w",stdout);
    int n;
    cin >>n;
    vector<tuple<int,int,int>>dcg;
    vector<int>mp = {7,7,7};
    for(int i=0;i<n;i++)
    {
        int d,l,ni;
        string n;
        cin >> d>>n>>l;

        if(n=="Bessie")ni=0;
        if(n=="Elsie")ni=1;
        if(n=="Mildred")ni=2;
        dcg.push_back({d,ni,l});
    }
    sort(dcg.begin(),dcg.end());

    int times=0;
    set<int>arr;
    for(int i=0;i<n;i++)
    {
        int d = get<0>(dcg[i]);
        int nd = -1;
        if(i!=n-1)nd=get<0>(dcg[i+1]);
        int n = get<1>(dcg[i]);
        int l = get<2>(dcg[i]);
        mp[n] += l;
        if(d==nd)continue;
        priority_queue<pair<int,int>>pq;
        for(int i=0;i<3;i++)
            pq.push({mp[i],i});
        set<int>comp;
        int prev = pq.top().first;
        comp.insert(pq.top().second);
        while(!pq.empty())
        {
            if(pq.top().first == prev)comp.insert(pq.top().second);
            pq.pop();
        }
        if(comp == arr)continue;
        times++;
        arr = comp;

    }
    cout << times;
}