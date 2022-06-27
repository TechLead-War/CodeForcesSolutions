#include<bits/stdc++.h>
using namespace std;
int solve(vector<int>& coins, int sum, int n) {
	if(sum == 0) return 1;
	if(n <= 0 or sum < 0) return 0;
	// using nth coin
	int res = solve(coins, sum - coins[n - 1], n);
	//not using nth coin
	res += solve(coins, sum, n - 1);
	return res;
}
int main() {
	int n, m; cin >> n >> m;
	vector<int> coins(m);
	for(int i = 0; i < m; i++) cin >> coins[i];
	cout << solve(coins, n, m);	
}