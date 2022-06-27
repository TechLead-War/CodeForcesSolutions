#include <bits/stdc++.h>
#define endl '\n'
#define ll long long 
#define fio ios_base::sync_with_stdio(false); cin.tie(0);
using namespace std;
int dp[100000000];
int main(int argc, char const *argv[])
{
	fio
	int n; cin >> n;
	
	dp[0] = 0;
	dp[1] = 1;
	dp[2] = 2;

	for (int i = 3; i <= n; i++) {
		dp[i] = (dp[i - 1]%1000000007 + dp[i - 2]%1000000007)%1000000007;
	}
	cout << dp[n] << endl;
	return 0;
}


// optimised 

#include <bits/stdc++.h>
#define endl '\n'
#define ll long long 
#define fio ios_base::sync_with_stdio(false); cin.tie(0);
#define MOD 1000000007
using namespace std;
void solve() {
	int n; cin >> n;
	if(n <= 2) {
	    cout << n << endl;
	    return 0;
	} 
	
	int prev1 = 1, prev2 = 2, ans;
	for (int i = 3; i <= n; i++) {
	    ans = (prev1%MOD + prev2%MOD)%MOD;
	    prev1 = prev2;
	    prev2 = ans;
	}
	cout << ans << endl;
	return 0; 
}


int main(int argc, char const *argv[])
{
	fio
	int t; cin >> t;
	while(t--) {
		solve();
	}
	return 0;
}

