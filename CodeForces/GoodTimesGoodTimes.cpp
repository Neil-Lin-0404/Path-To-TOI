// 一句話解釋; x不超過兩中數字 y不超過兩種數字 xy也不超過兩種數字 
// x已保證不超過兩種
// 輸出 : 其中一種可行的y
// 2 <= y <= 1e9
// y 必須小於 1e4 (觀察到的constraint)
// t <= 1e4 t組測資

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int x;
        cin >>x;
        for(int i=2;i<=1e9;i++)
        {
            if(i %100 != i)
            {
                string s = to_string(i);
                set<int>st;
                for(int j =0;j<s.size();j++)
                    st.insert(s[j]);
                if(st.size() >2)continue;
            }
            set<int>st;
            long long res = 1LL * x * i;
            string s = to_string(res);
            for(int j =0;j<s.size();j++)
                st.insert(s[j]);
            if(st.size() >2)continue;
            cout << i << '\n';
            break;
        }
    }
}