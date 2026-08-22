#include <bits/stdc++.h>
using namespace std;
int f()
{

}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;cin >>n;
        vector<int>red(n);
        for(int i=0;i<n;i++)cin >> red[i];
        int m;cin >> m;
        vector<int>blue(m);
        for(int i=0;i<m;i++)cin >> blue[i];
        int ans = f();
        cout << ans << '\n';
    }
}