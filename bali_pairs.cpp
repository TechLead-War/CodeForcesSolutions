#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define fio ios_base::sync_with_stdio(false); cin.tie(0);
#define MOD 1000000007
using namespace std;

ll power(int n, int x) {
	ll ans = 1;
	for(int i = 0; i < x; i++) {
		ans = (ans * n)%MOD;
	}
	return ans;
}

int main(int argc, char const *argv[]) {
	int n; cin >> n;
	int f, s;
	int oo = 0, ee = 0, eo = 0;

  for (int i = 0; i < n; i++) {
		cin >> f >> s;
    if(f%2 == 0 and s%2 == 0) ee++;
    else if(f%2 != 0 and s%2 != 0) oo++;
    else eo++;
  }

	long long ans = 0;
	if(eo == 0 and oo%2 == 1)
		ans = power(2, n);
	else if(eo != 0)
		ans = power(2, n - 1);

	cout << ans << endl;
	return 0;
}
