#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define fio ios_base::sync_with_stdio(false); cin.tie(0);
#define MOD 1000000007
#define pb push_back
#define ip(n) for (int i = 0; i < n; i++) cin >> arr[i];
using namespace std;
int dp[1001][1001];

string lcs(string& str1, string& str2, int r1, int r2) {
	string ans = "";
	for (int i = 0; i <= r1; i++) {
		for (int j = 0; j <= r2; j++) {
			if(!i or !j) continue;
			if(str1[i - 1] == str2[j - 1])
				dp[i][j] = 1 + dp[i - 1][j - 1];
			else dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
		}
	}
	int i = r1, j = r2;
	while(i > 0 and j > 0) {
		if(str1[i - 1] == str2[j - 1])
		{
			ans = str1[i - 1] + ans;
			i--, j--;
		}
		else if(dp[i - 1][j] > dp[i][j - 1])
		{
			i--;
		}
		else {
			j--;
		}
	}
	return ans;
}

int main()
{
	string str1, str2; cin >> str1 >> str2;
	int r1 = str1.size(), r2 = str2.size();
	cout << lcs(str1, str2, r1, r2);
	return 0;
}
