#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("breedflip.in","r",stdin);
    freopen("breedflip.out","w",stdout);
    int times=0,l;cin >>l;
    vector<char>ord(l);
    for(int i=0;i<l;i++)cin >> ord[i];
    for(int i=0;i<l;i++)
    {
        char c;cin >>c;
        if(c != ord[i])
        {
            times++;
            for(i++;i<l;i++)
            {
                cin >>c;
                if(c==ord[i])break;
            }
        }
    }
    cout << times;
}