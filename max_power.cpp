#include <bits/stdc++.h>
#define endl '\n'
#define ll long long 
#define fio ios_base::sync_with_stdio(false); cin.tie(0);
#define MOD 1000000007
using namespace std;

int main(int argc, char const *argv[])
{
	fio
	register int n; cin >> n;
	ll nums[n];
	for (int i = 0; i < n; i++) cin >> nums[i];
	
	ll minn = nums[0], maxx = nums[0], ans = nums[0];
	for (int i = 1; i < n; i++) {
		if(nums[i] < 0) swap(minn, maxx);
		maxx = max(maxx * nums[i], nums[i]);
		minn = min(minn * nums[i], nums[i]);
		ans = max(ans, maxx);
	}
	cout << ans << endl;
	return 0; 
}
