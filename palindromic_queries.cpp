#include <bits/stdc++.h>
using namespace std;
int dp[1001][1001];

void solve(string& str, int n) {
	int gap = 0;
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n - i; j++) {
			if(j == j + gap) dp[j][j + gap] = 1;
			else if(gap == 1 and str[j] == str[j + gap]) dp[j][j + gap] = 1;
			else if(dp[j + 1][j + gap - 1] and str[j] == str[j + gap]) dp[j][j + gap] = 1;
			else dp[j][j + gap] = 0;
		}
		gap++;
	}
}

int main(int argc, char const *argv[])
{
	int n; cin >> n;
	string str; cin >> str;
	solve(str, n);
	int t; cin >> t;
	while(t--) {
		int l, r; cin >> l >> r;
		if(dp[l - 1][r - 1]) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
} 