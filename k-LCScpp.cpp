#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define fio ios_base::sync_with_stdio(false); cin.tie(0);
#define MOD 1000000007
#define pb push_back
#define ip(arr, n) for (int i = 0; i < n; i++) cin >> arr[i];
using namespace std;
int dp[2001][2001][6];
int solve(int* s1, int* s2, int n, int m, int k) {
    if(n < 0 or m < 0) return 0;
    if(dp[n][m][k] != -1) return dp[n][m][k];
    int ans = -1;
    if(s1[n] == s2[m]) ans = 1 + solve(s1, s2, n - 1, m - 1, k);
    if(k > 0)
		ans = max(ans, 1 + solve(s1, s2, n - 1, m - 1, k - 1));
	ans = max(ans, solve(s1, s2, n - 1, m, k));
	ans = max(ans, solve(s1, s2, n, m - 1, k));
	return dp[n][m][k] = ans;
}

//123
//343

int main()
{
	fio
	int n, m, k; cin >> n >> m >> k;
	int s1[n]; ip(s1, n);
	int s2[m]; ip(s2, m);
	memset(dp, -1, sizeof(dp));
	cout << solve(s1, s2, n - 1, m - 1, k) << endl;
	return 0;
}

