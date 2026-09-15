#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, q;
    cin >> n >> q;

    vector<long long> a(max(n, 31), 9e18);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 1; i < 31; i++) a[i] = min(a[i], 2 * a[i - 1]);

    while (q--){
        int x;
        cin >> x;
        long long ans = 9e18;
        long long cur = 0;
        for (int i = 30; i >= 0; i--){
            if (x & (1 << i)){
                ans = min(ans, cur + 2 * a[i]);
                cur += a[i];
            }else ans = min(ans, cur + a[i]);
        }

        cout << min(ans, cur) << endl;
    }

    return 0;
}