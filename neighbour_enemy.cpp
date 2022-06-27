#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int main(int argc, char const *argv[])
{
	int n; cin >> n;
	ll arr[n], m = INT_MIN;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		m = max(m, arr[i]);
	}
	

	ll freq[m + 1] = {0};
	for (int i = 0; i < n; i++) freq[arr[i]]++;

	ll dp[m] = {0};
	for (int i = 1; i <= m; i++) {
		if(i - 2 >= 0) 
			dp[i] = max(dp[i - 1], dp[i - 2] + (i * freq[i]));
		else 
			dp[i] = i * freq[i];
	}
	cout << dp[m] << endl;
	return 0;
}