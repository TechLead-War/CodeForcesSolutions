//number of ways to reach nth ladder if you can jump from (1, 2, .. .k)
#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n, k; cin >> n >> k;
	int dp[n + 1];
	dp[0] = dp[1] = 1;
	for(int i = 2; i <= n; i++) {
		if(i <= k) 
			dp[i] = 2 * dp[i - 1];
		else 
			dp[i] = 2 * dp[i - 1] - dp[i - 1 - k];
	}

	for(int i = 0; i <= n; i++) cout << dp[i] << " ";
	return 0;
}