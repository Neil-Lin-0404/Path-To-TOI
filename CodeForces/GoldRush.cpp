#include <bits/stdc++.h>
using namespace std;
int target;
bool found(int x)
{
    if(x == target)return true;
    if(x%3)return false;
    return found(x/3) || found(x*2/3);
}
int main()
{
    int t;
    cin >>t;
    while(t--)
    {
        int curPile;
        cin >> curPile >> target;
        if(found(curPile))cout << "YES" << '\n';
        else cout << "NO" << '\n';

    }
}