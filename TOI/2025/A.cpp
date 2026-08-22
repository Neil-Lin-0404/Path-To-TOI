#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int n;
    cin >>n;
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
    for(int i=0;i<n;i++)
    {
        int x;
        cin >>x;
        int temp=x;
        int ans=0;
        int maxans=0;
        while(x!=0)
        {
            if(x&1)ans++;
            if(!(x&1))
            {   
                maxans=max(maxans,ans);
                ans=0;
            }
            x>>=1;
        }
        maxans=max(maxans,ans);
        pq.push({maxans,temp});
    }
    while(!pq.empty())
    {
        cout <<pq.top().second<<" ";
        pq.pop();
    }
}