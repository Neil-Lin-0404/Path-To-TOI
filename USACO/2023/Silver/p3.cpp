#include <bits/stdc++.h>
using namespace std;


struct flight
{
    int end,startTime,arrTime;
};
const int MAXN = 2e5+5;
// the startTime will be arrTime + layOver
vector<int>layover(MAXN);
// currently quickest time to it
vector<int>tim(MAXN,INT_MAX);
// to scan over
vector<vector<flight>>g(MAXN);

int main()
{
    int n,m;
    cin >> n >> m;
    for(int i=0;i<m;i++)
    {
        int c;
        flight r;
        cin >> c >> r.startTime >> r.end >> r.arrTime;
        g[c].push_back(r);
    }
    for(int i=1;i<=n;i++)cin >> layover[i];
    stack<flight>stk;
    flight p;
    p.end = 1;
    p.startTime =0;;
    p.arrTime = 0;
    stk.push(p);
    bool startDo=true;
    // because of N , M too large , so Im not using recursion
    // it will cause seg fault in worst case
    while(!stk.empty())
    {
        flight f = stk.top();
        stk.pop();
        int endNode = f.end;
        int depTime = f.startTime;
        int arrive = f.arrTime;
        if(tim[endNode] <= arrive)continue;
        tim[endNode] = arrive;
        int totalTime=0;
        if(!startDo)totalTime = layover[endNode] + arrive;
        startDo = false;
        for(auto v : g[endNode])
        {
            int flightStart = v.startTime;
            if(flightStart < totalTime)continue;
            stk.push(v);
        }
        
    }
    for(int i=1;i<=n;i++)cout << ((tim[i] == INT_MAX) ? -1 : tim[i]) << '\n';
    
}