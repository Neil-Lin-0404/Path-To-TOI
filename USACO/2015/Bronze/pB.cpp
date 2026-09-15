#include <bits/stdc++.h>
using namespace std;


int main()
{
    freopen("speeding.in","r",stdin);
    freopen("speeding.out","w",stdout);
    int n,m;
    cin >> n >> m;
    vector<int> roadLen(n,0);
    vector<int> roadSpeed(n,0);
    for(int i=0;i<n;i++)
    {
        int len,speed;
        cin >> len >> speed;
        roadLen[i] = len + roadLen[i == 0 ? 0 : i-1];
        roadSpeed[i] = speed;
    }
    vector<pair<int,int>> driSpd; // first is drove length , second is the speed
    int mxOverSpeed=0;
    for(int i=0;i<m;i++)
    {
        int len,speed;
        cin >> len >> speed;
        driSpd.push_back({len,speed});
    }
    int curDroveLen = 0;
    for(int i=0;i<m;i++)
    {
        int droveLen = driSpd[i].first;
        int droveSpeed = driSpd[i].second;
        int lenInd = upper_bound(roadLen.begin(),roadLen.end(),curDroveLen) - roadLen.begin();
        curDroveLen += droveLen;
        int endInd = lower_bound(roadLen.begin(),roadLen.end(),curDroveLen) - roadLen.begin();
        for(int j=lenInd;j<=endInd;j++)
        {
            mxOverSpeed = max(mxOverSpeed,droveSpeed - roadSpeed[j]);
        }
    }
    cout << mxOverSpeed << endl;
    return 0;
}