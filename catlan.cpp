#include<bits/stdc++.h>
using namespace std;
unordered_map<int, int> mp;
int solve(int n) {
	if(n <= 1) return 1;
	if(mp.find(n) != mp.end()) return mp[n];
	int res = 0;
	for(int i = 1; i <= n; i++) {
		res += solve(i - 1) * solve(n - i);
	}
	return mp[n] = res;
}

int main() {
	int n; std::cin >> n;
	std::cout << solve(n);
}