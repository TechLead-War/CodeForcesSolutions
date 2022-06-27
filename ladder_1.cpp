//edge case -

/* 7 2
	 0 0 0 0 1 1 0
 */


#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define fio ios_base::sync_with_stdio(false); cin.tie(0);
#define MOD 1000000007
using namespace std;

int main(int argc, char const *argv[]) {
	int n, k; cin >> n >> k;
	bool arr[n]; for (int i = 0; i < n; i++) cin >> arr[i];
	int dp[n] = {1};
	for (int i = 0; i < n; i++) {
		if(arr[i] == 1) continue;
		for(int j = i + 1; j <= i + k and j < n; j++) {
			if(not arr[j])
				dp[j] = (dp[j] + dp[i])%MOD;
		}
	}
	cout << dp[n - 1] << endl;
	return 0;
}
