#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;cin >>n;
    int arr[] = {100,20,10,5,1};
    int count = 0;
    for(int i=0;i<5;i++) {
        count += n/arr[i];
        n %= arr[i];
    }
    cout << count << endl;


    return 0;
}