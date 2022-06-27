#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(int argc, char const *argv[])
{
	int n; cin >> n;
	int arr[n];
	for(int i = 0; i < n; i++) cin >> arr[i];
	int prefix[n] = {0}, suffix[n] = {0};

	// building Prefix
	for(int i = 1; i < n; i++) {
		prefix[i] = max(prefix[i - 1], arr[i - 1]);
	}
	
	//building suffix
	for(int i = n - 2; i >= 0; i--) {
		suffix[i] = max(suffix[i + 1], arr[i + 1]);
	}
	
	//how much water is stored in each block
	ll ans = 0;
	for(int i = 0; i < n; i++) {
		ll temp = min(prefix[i], suffix[i]) - arr[i];
		if(temp > 0)
			ans += temp;
	}
	cout << ans << endl;
	return 0;
}