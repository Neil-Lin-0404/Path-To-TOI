#include <bits/stdc++.h>
using namespace std;

int solve() {
    int n, a, b;
    cin >> n >> a >> b;
    vector<string> rows(n);
    vector<vector<bool>> star(n, vector<bool>(n, false));
    for (int i = 0; i < n; i++) cin >> rows[i];

    // Force: every B needs a star here and at the source (first photo).
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (rows[i][j] != 'B') continue;
            if (i < b || j < a) return -1;
            star[i][j] = true;
            star[i - b][j - a] = true;
        }
    }

    // Greedy: for G, reuse an already-placed source star if possible;
    // never manufacture stars by rewriting history.
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (rows[i][j] == 'W') {
                if (star[i][j]) return -1;
            } else if (rows[i][j] == 'G') {
                if (star[i][j]) continue;
                if (i >= b && j >= a && star[i - b][j - a]) continue;
                star[i][j] = true;
            }
        }
    }

    int ans = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (star[i][j]) ans++;
    return ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) cout << solve() << '\n';
}
