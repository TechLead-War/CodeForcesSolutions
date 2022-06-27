#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define fio ios_base::sync_with_stdio(false); cin.tie(0);
#define MOD 1000000007
#define pb push_back
#define ip(A,n) for (int i = 0; i < n; i++) cin >> A[i];
using namespace std;

//A choose ,
//B choose ,
//none choose ,
int dp[5001][5001];
ll solve(int* A, int* B, int n, int a, int b) {
	if(n < 0) return 0LL;
	if(dp[n][b]) return dp[n][b];
	ll ans = 0LL;
	if(A[n] >= B[n] and a >= 0)
		ans = max(ans, A[n] + solve(A, B, n - 1, a - 1, b));
	else if(A[n] < B[n] and b >= 0)
		ans = max(ans, B[n] + solve(A, B, n - 1, a, b - 1));
	ans = max(ans, solve(A, B, n - 1, a, b));
	return dp[n][b] = ans;
}

int main()
{
	fio
	int n, a, b; cin >> n >> a >> b;
	int A[n], B[n];
	ip(A, n);
	ip(B, n);

	cout << solve(A, B, n - 1, a, b);
	return 0;
}
