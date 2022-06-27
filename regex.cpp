#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define fio ios_base::sync_with_stdio(false); cin.tie(0);
#define MOD 1000000007
#define pb push_back
#define ip(arr, n) for (int i = 0; i < n; i++) cin >> arr[i];
using namespace std;

string str1, str2;
ll n, m;
int** dp;
bool solve(ll i, ll j) {
	if(i == n and j == m) return 1;
	if(i == n or j == m) return 0;
	if(dp[i][j] != -1) return dp[i][j];
	if((str1[i] == str2[j]) or (str2[j] == '.')) return dp[i][j] = solve(i + 1, j + 1);
	if(str2[j] == '*') return dp[i][j] = solve(i + 1, j) or solve(i, j + 1);
	return dp[i][j] = 0;
}

int main()
{
	fio
	cin >> str1 >> str2;
	n = str1.size();
	m = str2.size();
	dp = new int*[n];
	for (int i = 0; i < n; i++) 
		dp[i] = new int[m];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			dp[i][j] = -1;
	cout << solve(0, 0);
	return 0;
}
