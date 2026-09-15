#include <bits/stdc++.h>
using namespace std;
#define pii pair<int,int>
#define ll long long
int main()
{
 /*
 int n,m k
 讀入 n m k
 一個vector<vector<int>> edges(n+1)
 for 讀入 m 個邊
 每個邊是 u v w
 表示 u 到 v 有一條邊 權重為 w
 
 一個vector<vector<int>> dist
 讀入 k 個邊
 每個邊是 u v w
 表示 u 到 v 有一條邊 權重為 w
 
 如果目前不足k個邊 不檢查 -> 直接靶心dist推進去
 如果足k個邊 就檢查 -> 如果 >dist[u][k] 就把新dist 推進去 然後sort 並且放進queue

 在queue裡面 用vector<tuple<int,int,int>> 代表 起點 , 終點 跟 總權重
 使用edges[u][v] 來拿該邊的權重
 

 流程就是:
 推進queue
 queue 終點 看目前總權重有沒有大於 dist[終點][k]
 如果大於 就不要增加至dist , 反之 增加進去 然後進行sort
 然後再來掃描全部可以到的點 然後推進queue
 直到queue為空
 輸出 dist[n][0..k-1]
 */   
 int n,m,k;
 cin >> n >> m >> k;
 vector<vector<pii>> edges(n+1);
 for(int i=0;i<m;i++)
 {
    int u,v,w;
    cin >> u >> v >> w;
    edges[u].push_back(make_pair(v,w));
 }
 vector<vector<ll>> dist(n+1,vector<ll>(k,LLONG_MAX));

 priority_queue<tuple<ll,int,int>,vector<tuple<ll,int,int>>,greater<tuple<ll,int,int>>> pq;
 // dist , start , end
 pq.push({(ll)0,1,1});
 while(!pq.empty())
 {
    auto [w,u,v] = pq.top();
    pq.pop();
    if(w >= dist[v][k-1]) continue;
    
    dist[v][k-1] = w;
    
    sort(dist[v].begin(),dist[v].end());
    for(auto [v2,w2] : edges[v])
    {
        pq.push({(ll)(w+w2),v,v2});
    }
}
for(int i=0;i<k;i++)
    cout << dist[n][i] << " ";
return 0;
}