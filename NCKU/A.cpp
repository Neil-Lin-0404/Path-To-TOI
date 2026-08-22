#include <bits/stdc++.h>
using namespace std;
int MOD = 1e9+7;
int n;
vector<int>height;
int cnt=0;
bool check(int prev,int cur,bool higher)
{
    if(higher)
    {
        return cur > prev;
    }
    else
    {
        return cur < prev;
    }
}
// prev 上一個有沒有選
void cho(int prev_height,int pos,bool higher)
{
    if(pos==n)
    {
        if(prev_height==-1)
        {
            return;
        }
        cnt = (cnt+1)%MOD;
        return;
    }
    // pos 為0 直接把目前為 低 或 高 直接納入情況 然後開始
    if(pos==0)
    {
        // 我這個沒選
        cho(-1,pos+1,true);
        // 我這個選了 低
        cho(height[pos],pos+1,false);
        // 我這個選了 高
        cho(height[pos],pos+1,true);
        return;
    }

        
        if(check(prev_height,height[pos],higher))
        {
            if(prev_height==-1)
            {
                cho(height[pos],pos+1,higher);
            }
            // 且現在這個可以去選 (符合條件)
            cho(height[pos],pos+1,!higher);
            // true代表選了 那下一個就要 !higher
            cho(prev_height,pos+1,higher);
            // 如果不選 那維持原樣
        }
        // 如果這個沒有符合higher 條件 就不選 代表砍掉
        else
        {
            cho(prev_height,pos+1,higher);
        }
}

int main()
{
    cin >> n;
    height.resize(n);
    if(n==1)
    {
        int x;
        cin >>x;
        cout << 1;
        return 0;
    }
    for(int i=0;i<n;i++)
    {
        cin >> height[i];
    }
    // 這裡因為function已經處理好了 所以只需要呼叫一次
    cho(-1,0,true);
    cout << cnt << '\n';
}