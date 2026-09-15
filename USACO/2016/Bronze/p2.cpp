#include <bits/stdc++.h>
using namespace std;


int main()
{
    freopen("blocks.in","r",stdin);
    freopen("blocks.out","w",stdout);
    unordered_map<char,int>mp;
    for(int i=0;i<26;i++)
        mp[i+'a']=0;
    int n;
    cin >>n;
    for(int i=0;i<n;i++)
    {
        string a,b;
        cin >> a >>b;
        unordered_map<char,int>tempa,tempb;
        for(int j=0;j<26;j++)
        {
        tempa[j+'a']=0;
        tempb[j+'a']=0;
        }
        for(char c : a)tempa[c] ++;
        for(char c:b)tempb[c]++;
        for(int j=0;j<26;j++)
        {
            mp[j+'a'] += max(tempa[j+'a'],tempb[j+'a']);
        }
    }
    for(int i=0;i<26;i++)
    {
        cout << mp[i+'a'] << '\n';
    }
}