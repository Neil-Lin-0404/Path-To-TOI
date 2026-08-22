#include <bits/stdc++.h>
using namespace std;
/*
找最大的值在 odd or even

*/
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
    {
        int x;
        cin >>x;
        int odd=x/2,even =x/2 + (x%2 ? 1 : 0);
        int mxodd=0,mxeven=0;
        for(int i=0;i<x;i++)
        {
            int v;
            cin >>v;
            if(i%2==0)
            {
                if(mxeven < v)
                {
                    even += v - mxeven;
                    mxeven =v;
                }
            }
            else
            {
                if(mxodd < v)
                {
                    odd += v - mxodd;
                    mxodd =v;
                }
            }
            
        }
        cout << max(odd,even) << '\n';
        
}}