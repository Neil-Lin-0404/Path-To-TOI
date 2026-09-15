#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int solve(){
	int n, a, b;
    cin >> n >> a >> b;
    vector<string> rows(n);
    vector<vector<bool>> star(n, vector<bool>(n));
    for (int i = 0; i < n; i++){
    	cin >> rows[i];
	}
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			if (rows[i][j] == 'B'){
				if (i < b || j < a) return -1;
				star[i][j] = star[i - b][j - a] = 1;
			}
		}
	}
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			if (rows[i][j] == 'W'){
				if (star[i][j]) return -1;
			}else if (rows[i][j] == 'G'){
				if (star[i][j]) continue;
				if (i >= b && j >= a && star[i - b][j - a]) continue;
				star[i][j] = 1;
			}
		}
	}
	int ans = 0;
	for (int i = 0; i < n; i++) ans += accumulate(star[i].begin(), star[i].end(), 0);
	return ans;
}

int main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0);

    int t;
    cin >> t;
    while (t--){
    	cout << solve() << endl;
	}
}