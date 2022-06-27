#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define fio ios_base::sync_with_stdio(false); cin.tie(0);
#define MOD 1000000007
#define pb push_back
#define ip(arr, n) for (int i = 0; i < n; i++) cin >> arr[i];
using namespace std;
bool opens[51];
int dp[51][51];
int n;
int solve(int i = 0, int op = 0) { // number of counter opening's left
	if(op < 0) return 0;
	if(dp[i][op]) return dp[i][op];
	if(i == n) {
		return (op == 0);
	}
	if(dp[i][op]) return dp[i][n];
	if(opens[i]) return solve(i + 1, op + 1);
	int ans = (solve(i + 1, op + 1) + solve(i + 1, op - 1) );
	return dp[i][op] = ans;
}

int main()
{
	int t; cin >> t;
	while(t--) {
		int k; cin >> n >> k;
		n *= 2;
		memset(opens, false, sizeof(opens));

		for(int i = 0; i < k; i++) {
			int r; cin >> r;
			opens[r - 1] = true;
		}

		memset(dp, 0, sizeof(dp));
		cout << solve() << endl; // current_ind, open brackets
	}
	return 0;
}
