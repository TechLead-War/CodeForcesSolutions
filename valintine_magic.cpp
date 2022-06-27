#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define fio ios_base::sync_with_stdio(false); cin.tie(0);
#define MOD 1000000007
#define pb push_back
#define ip(arr, n) for (int i = 0; i < n; i++) cin >> arr[i];
using namespace std;
int dp[5001][5001];
int solve(int* b, int* g, int n, int m) {
    if(n < 0) return 0;
    if(m < 0) return INT_MAX;
    if(dp[n][m] != -1) return dp[n][m];
    int s1 = solve(b, g, n - 1, m - 1); // allocate jth girl to ith boy
    if(s1 != INT_MAX) s1 += abs(b[n] - g[m]);
    int s2 = solve(b, g, n, m - 1);
    return dp[n][m] = min(s1, s2);
}

int main()
{
	fio
	memset(dp, -1, sizeof(dp));
	int n, m; cin >> n >> m;
	int b[n]; ip(b, n);
	int g[m]; ip(g, m);
	sort(b, b + n);
	sort(g, g + m);
	cout << solve(b, g, n - 1, m - 1) << endl;
	return 0;
}