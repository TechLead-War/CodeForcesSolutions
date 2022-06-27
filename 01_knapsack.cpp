#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define fio ios_base::sync_with_stdio(false); cin.tie(0);
#define MOD 1000000007
#define pb push_back
#define ip(n) for (int i = 0; i < n; i++) cin >> arr[i];
using namespace std;
int dp[1001][1001];
int solve(int* w, int* v, int n, int kn) {
	if(n <= 0 or kn <= 0) return 0;
	if(dp[n][kn]) return dp[n][kn];
	//pick or not pick
	int ans = 0;
	if(kn >= w[n - 1])
		ans = v[n - 1] + solve(w, v, n - 1, kn - w[n - 1]);
	ans = max(ans, solve(w, v, n - 1, kn));
	return dp[n][kn] = ans;
}

int main() {
	int n, s; cin >> n >> s;
	int sz[n], vl[n];
	for (int i = 0; i < n; i++) cin >> sz[i];
	for (int i = 0; i < n; i++) cin >> vl[i];
	//knapsack
	cout << solve(sz, vl, n, s) << endl; // weight arr, value arr, n, knapsack_Weight_Left
	return 0;
}
