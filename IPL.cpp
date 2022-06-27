#include <bits/stdc++.h>
using namespace std;
#define ll long long 

ll minn(ll a, ll b, ll c) {
	return min(a, min(b, c));
}

ll summ(ll* arr, int n) {
	ll ans = 0;
	for(ll i = 0; i < n; i++) ans += arr[i];
	return ans;
}

int main(int argc, char const *argv[]) {
	ll n; cin >> n;
	ll arr[n];
	for(ll i = 0; i < n; i++) cin >> arr[i];
	ll sum = summ(arr, n);
	for(ll i = 3; i < n; i++) {
		arr[i] += minn(arr[i - 1], arr[i - 2], arr[i - 3]);
	}
	cout << sum - minn(arr[n - 1], arr[n - 2], arr[n - 3]) << endl;
	return 0;
}