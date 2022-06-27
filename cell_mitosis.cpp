#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define fio ios_base::sync_with_stdio(false); cin.tie(0);
#define MOD 1000000007
using namespace std;

int main(int argc, char const *argv[])
{
	fio
	int n, x, y, z; cin >> n;
	cin >> x >> y >> z;
	ll dp[n + 1];
	dp[0] = dp[1] = 0;

	for (int i = 2; i <= n; i++) {
		if(i%2) {
			//if i is odd
			//then, we can't be coming from i/2
			//i + 1, computing is impossible so we (i-1)/2 , which always cost more
			dp[i] = min(dp[i - 1] + y, dp[(i + 1)/2] + x + z);
		} else{
			  // we can come from i/2 so i + 1 will always be costier.
				dp[i] = min(dp[i/2] + x, dp[i - 1] + y);
			}
	}
	cout << dp[n] << endl;
	return 0;
}
