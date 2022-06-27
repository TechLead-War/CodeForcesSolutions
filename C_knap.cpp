#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define fio ios_base::sync_with_stdio(false); cin.tie(0);
#define MOD 1000000007
#define pb push_back
#define ip(arr, n) int arr[n]; for (int i = 0; i < n; i++) cin >> arr[i];
using namespace std;

vector<int> Col[101];
ll dp[101][10001];
int maxx = 101;

ll cKnap(int col, int w) {
	if(w < 0) return INT_MAX;
	if(col == maxx) return w;
	
	if(dp[col][w] != -1) return dp[col][w];
	ll ans = INT_MAX;
	for(int i = 0; i < Col[col].size(); i++) {
		ans = min(ans, cKnap(col + 1, w - Col[col][i]));
	}
	return dp[col][w] = ans;
}

int main() {
	fio
	int n, m, w; cin >> n >> m >> w; // n ~100, m colors ~100, weight of knapsack ~10000
	ip(wt, n);
	ip(col, n);
	maxx = m + 1;
	memset(dp, -1, sizeof dp);
	for(int i = 0; i < n; i++) {
		Col[col[i]].pb(wt[i]);
	}
	cout << cKnap(1, w);
	return 0;
}
