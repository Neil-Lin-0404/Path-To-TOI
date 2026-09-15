#include <bits/stdc++.h>
using namespace std;


int main()
    {
        freopen("shuffle.in","r",stdin);
        freopen("shuffle.out","w",stdout);
    int n;
    cin >>n;
    vector<int>original(n+1),to(n+1),from(n+1);
    for(int i=1;i<=n;i++)
    {
        cin >> to[i];
        from[to[i]] = i;
    }
    for(int i=1;i<=n;i++)
    {
        int ID;
        cin >> ID;
            original[from[from[from[i]]]] = ID;
    }
    for(int i=1;i<=n;i++)
        cout << original[i] << '\n';

}