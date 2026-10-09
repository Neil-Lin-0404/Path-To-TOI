    #include <bits/stdc++.h>
    using namespace std;

    int main()
    {
        int t,a;
        cin >>t>>a;
        map<int,int>mp;
        int mf=0;
        for(int i=0;i<t;i++)
        {
            int a;
            cin >>a;
            mp[t-a]+=1;
            mf = max(mf,mp[t-a]);
        }
        cout <<mf;
    }