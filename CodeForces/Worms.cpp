#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int pilesAmount;cin >> pilesAmount;
    vector<int>piles(pilesAmount);
    for(int i=0;i<pilesAmount;i++)
    {
        int x;cin >>x;
        if(i == 0)piles[i] = x;
        else piles[i] = piles[i-1] + x;
    }
    int wormsAmount;cin >> wormsAmount;
    vector<int>worms(wormsAmount);
    for(int i=0;i<wormsAmount;i++)cin >> worms[i];
    for(int i=0;i<wormsAmount;i++)
    {
        int worm = worms[i];
        int pile = lower_bound(piles.begin(),piles.end(),worm) - piles.begin();
        cout << pile + 1 << '\n';
    }
}