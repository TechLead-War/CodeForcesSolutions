#include <bits/stdc++.h>
#define endl '\n'
#define ll long long 
#define fio ios_base::sync_with_stdio(false); cin.tie(0);
#define MOD 1000000007
using namespace std;
ll max(ll a, ll b) {
	if(a > b) return a;
	return b;
}

unordered_map<ll, ll> mp;
ll solve(ll num) {
	if(num <= 0) return 0;
	if(num == 1) return 1;
	if(mp.find(num) != mp.end()) return mp[num];
	ll ans = INT_MIN;
	return mp[num] = max(num, solve(num/2) + solve(num/3) + solve(num/4));
}

int main(int argc, char const *argv[])
{
	fio
	ll num; cin >> num;
	cout << solve(num) << endl;
	return 0; 
}