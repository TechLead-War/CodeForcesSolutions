#include <bits/stdc++.h>
#define endl '\n'
#define ll long long 
#define fio ios_base::sync_with_stdio(false); cin.tie(0);
#define MOD 1000000007
using namespace std;

int main(int argc, char const *argv[])
{
	int n; cin >> n;
	int arr[n]; for (int i = 0; i < n; i++) cin >> arr[i];
	int dp[n + 1] = {0};
	dp[0] = 0;
	dp[1] = arr[0];
	dp[2] = max(2 * arr[0], arr[1]);

	for(int i = 3; i <= n; i++) {
		dp[i] = arr[i - 1];
		for(int j = 1; j < i; j++) {
			dp[i] = max(dp[i], dp[j] + dp[i - j]);
		}
	}
	cout << dp[n] << endl;
	return 0;
}