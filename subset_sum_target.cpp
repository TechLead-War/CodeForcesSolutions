#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define fio ios_base::sync_with_stdio(false); cin.tie(0);
#define MOD 1000000007
#define pb push_back
#define ip(arr, n) for (int i = 0; i < n; i++) cin >> arr[i];
using namespace std;

int main()
{
	int n, sum; cin >> n >> sum;
	int arr[n];	ip(arr, n);
	bool** dp = new bool*[n + 1]; // items, sum
	for(int i = 0; i <= n; i++) dp[i] = new bool[sum + 1];

	dp[0][0] = 1;
	//no items left and whatever sum is i can't make it.
	for(int i = 0; i <= sum; i++) dp[0][i] = false;

	//if sum is 0, whatever items are left, it's always possible
	for(int i = 0; i <= n; i++) dp[i][0] = true;

	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= sum; j++) {
			if(j < arr[i - 1]) dp[i][j] = dp[i - 1][j];
			else dp[i][j] = dp[i - 1][j] or dp[i - 1][j - arr[i - 1]];
		}
	}
	if(dp[n][sum]) cout << "Yes";
	else cout << "No";
	return 0;
}
