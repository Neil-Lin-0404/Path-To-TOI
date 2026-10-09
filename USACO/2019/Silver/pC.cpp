#include <bits/stdc++.h>

using namespace std;

vector<vector<int>>g;
vector<int>belong;
vector<bool>vis;
vector<char>breeds;
void dfs(int node,int anc)
{
	vis[node] = true;
	if(anc == 0)
	{belong[node] = node;anc=node;}
	else belong[node] = anc;
	for(auto u : g[node])
	{
		if(vis[u])continue;
		if(breeds[u] != breeds[anc])
			dfs(u,0);
		else dfs(u,anc);
	}
}
int main()
{
	freopen("milkvisits.in","r",stdin);
	freopen("milkvisits.out","w",stdout);
	int n,m;
	cin >> n >> m;
	belong.resize(n+1);
	vis.resize(n+1);
	g.resize(n+1);
	breeds.resize(n+1);
	vector<bool>ba(n+1,false);
	for(int i=1;i<=n;i++)cin >> breeds[i];
	for(int i=0;i<n-1;i++)
	{
		int u,v;
		cin >> u >>v;
		g[u].push_back(v);
		g[v].push_back(u);
	}
	dfs(1,0);
	for(int i=0;i<m;i++)
	{
		int u,v;
		char b;
		cin >> u >> v >> b;
		if(breeds[u] == b)ba[i] = 1;
		else if(belong[u] == belong[v])ba[i]=0;
		else ba[i] = 1;
	}
	for(int i=0;i<m;i++)cout << ba[i];
	
}
