#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define fio ios_base::sync_with_stdio(false); cin.tie(0);
#define MOD 1000000007
#define pb push_back
#define ip(n) for (int i = 0; i < n; i++) cin >> arr[i];
using namespace std;
ll dp[101][101];

ll sum(int* arr, int i, int j) {
	ll ans = 0;
	for(int k = i; k <= j; k++) {
		ans = (ans + arr[k])%100;
	}
	return ans;
}

ll solve(int* arr, int i, int j) {
	if(j == i) return 0;
	if(j - i == 1) return arr[i] * arr[j];
	if(dp[i][j]) return dp[i][j];
	ll res = LONG_MAX;
	for(int k = i; k < j; k++) {
		//keep on finding a k where product is min,
		//at any k, we have to sum entire left, and entire right then product.
		res = min(res, sum(arr, i, k) * sum(arr, k + 1, j) + solve(arr, i, k) + solve(arr, k + 1, j));
	}
	return dp[i][j] = res;
}

int main()
{
	int n; cin >> n;
	int arr[n]; ip(n);
	cout << solve(arr, 0, n - 1);
	return 0;
}
