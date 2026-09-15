#include <bits/stdc++.h>
using namespace std;


int main()
{
    /*freopen("censor.in","r",stdin);
    freopen("censor.out","w",stdout);*/
    string s,tar;
    cin >> s >> tar;
    int tarL = tar.length();
    int sL = s.length();
    string fin;
    
    for(int i=0;i<sL;i++)
    {
        fin += s[i];
        if(fin.length()<tarL)continue;
        if(fin[fin.length()-tarL] == tar[0])
        {
            bool nah  = false;
            for(int j=0;j<tarL;j++)
            {
                if(fin[fin.length()-tarL+j]!=tar[j]){nah=true;break;}
            }
            if(!nah)
            {
                fin.erase(fin.length()-tarL,tarL);
            }
        }
    }
    cout << fin;
}