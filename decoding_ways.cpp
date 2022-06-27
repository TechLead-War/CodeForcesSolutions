#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define fio ios_base::sync_with_stdio(false); cin.tie(0);
#define MOD 1000000007
using namespace std;

ll solve(string str) {
	int n = str.size();
	if(str[0] == '0') return 0;
	if(n == 1) return 1;
	ll dp[n + 1] = {1, 1};
	for(int i = 2; i <= n; i++) {
		int one = str[i - 1] - '0';
		int two = (str[i - 2] - '0') * 10 + (str[i - 1] - '0');
		if(one >= 1) dp[i] += dp[i - 1];
		if(two >= 10 and two <= 26) dp[i] += dp[i - 2];
	}
	return dp[n];
}

int main(int argc, char const *argv[])
{
	fio
	string n;
	cin >> n;
	cout << solve(n) << endl;
	return 0;
}
