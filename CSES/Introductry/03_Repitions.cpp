#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >>s;
    int max_len=0;
    int curr_len=1;
    for(int i=0;i<s.size()-1;i++)
    {
        if(s[i]==s[i+1])
        {
            curr_len++;
        }
        else
        {
            max_len=max(max_len,curr_len);
            curr_len=1;
        }
    }
    cout << max(max_len,curr_len);
    return 0;
}