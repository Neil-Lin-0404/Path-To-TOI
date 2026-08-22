#include <bits/stdc++.h>
using namespace std;
int count =0;
bool cmp(Block a,Block b)
{
    
}
struct Block
{
    int start;  
    int end;
    int number;
};
vector<
void f(int start,int target)
{

}
/*
block : 全部元素等於該陣列的長度

*/
int main()
{
    int t;
    cin >>t;
    while(t--)
    {
        int n;
        cin >>n;
        int curNum=0; // 目前是要哪個數字連在一起
        int NumCount =0; // 目前要連在一起的數字有幾個
        for(int i=0;i<n;i++)
        {
            int x;
            cin >>x;
            if(x == curNum)
            {
                NumCount++;
            }
            else
            {
                curNum =x;
                NumCount =1;
            }
            if(NumCount == x)
            {
                count+=NumCount;
                curNum =0;
                NumCount =0;
            }
        }
        cout << count << '\n';
    }
}