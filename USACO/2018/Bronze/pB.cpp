#include <bits/stdc++.h>
using namespace std;


int main()
{
    freopen("blist.in","r",stdin);
    freopen("blist.out","w",stdout);
    int n;
    cin >> n;
    vector<tuple<int,int,int>> cows;
    // start end bucket
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
    for(int i=0;i<n;i++)
    {
        int start,end,bucket;
        cin >> start >> end >> bucket;
        cows.push_back({start,end,bucket});
    }
    sort(cows.begin(),cows.end());
    int available = 0;
    for(auto [start,end,bucket] : cows)
    {
        while(!pq.empty())
        {
            auto [curEnd,curBucket] = pq.top();
            if(curEnd <= start)
            {
                available += curBucket;
                pq.pop();
            }
            else
            {
                break;
            }
        }
        if(available >= bucket)
        {
            available -= bucket;
        }
        else
        {
            available = 0;
        }
        pq.push({end,bucket});
    }
    while(!pq.empty())
    {
        auto [_,curBucket] = pq.top();
        available += curBucket;
        pq.pop();
    }
    cout << available << endl;
    return 0;
}