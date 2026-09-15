// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;
//Complexity Time: O(n) Complexity 
int main() {
	freopen("milkorder.in", "r", stdin);
	freopen("milkorder.out", "w", stdout);
	int n, m, k; cin>>n>>m>>k;

	vector<int> heirarchy(m);
	for(int &x: heirarchy)
		cin>>x;

	//Part 1 of the porgram is to set the fixed ordered cow into the order vector
	vector<int> order(n,0);
	map<int, int> mp;
	for(int i=0; i<k; i++){
		int cow; int pos;
		cin>>cow>>pos;
		if(cow==1){
			cout<<pos<<endl; 
			return 0;
		}
		order[pos-1] = cow;
		mp[cow] = pos-1;
	

	//Part 2 is to fit the hierarchy cow into the order vector by iterating over heirarchy vector.
	//There is different direction of traversal based on whether the element is present in the heirarchy array or not.
	if(find(heirarchy.begin(), heirarchy.end(), 1)!=heirarchy.end()){
		int lastInsert = 0;
		for(int i=0; i<m; i++){
			if(mp.count(heirarchy[i]))
				lastInsert = mp[heirarchy[i]];
			else{
				for(int j=lastInsert; j<n; j++){
					if(order[j]==0){
						order[j] = heirarchy[i];
						lastInsert = j;
						break;
					}
						
				}
			}
			if(heirarchy[i]==1){
				cout<<lastInsert+1<<endl;
				return 0;
			}
		}
	}
	else{
		int lastInsert = n-1;
		for(int i=m-1; i>=0; i--){
			if(mp.count(heirarchy[i]))
				lastInsert = mp[heirarchy[i]];
			else{
				for(int j=lastInsert; j>=0; j--){
					if(order[j]==0){
						order[j] = heirarchy[i];
						lastInsert = j;
						break;
					}
				}
			}
			if(heirarchy[i]==1){
				cout<<lastInsert+1<<endl;
				return 0;
			}
		}
	}

	//Part3 after arranging all the cows based on heirarch and order we finally find the empty space from the front to place the last cow 1.
	for(int i=0; i<n; i++)
		if(order[i]==0){
			cout<<i+1<<endl;
			return 0;
		}
}
  