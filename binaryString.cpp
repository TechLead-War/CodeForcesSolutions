#include <bits/stdc++.h>
#define ll long long 
using namespace std;
int main() {
	int t; cin >> t;
	while(t--) {
		int n; cin >> n;
		ll dp[n][2];
		dp[0][0] = 1;
		dp[0][1] = 1;
		for(int i = 1; i < n; i++) {
			dp[i][0] = dp[i - 1][0] + dp[i - 1][1];
			dp[i][1] = dp[i - 1][0];
		}
		cout << dp[n - 1][0] + dp[n - 1][1] << endl;
	}
}