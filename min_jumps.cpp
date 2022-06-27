#include <bits/stdc++.h>
#define endl '\n'
#define ll long long 
#define fio ios_base::sync_with_stdio(false); cin.tie(0);
using namespace std;

int main() {
	fio
	register int n; cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++) cin >> arr[i];

	int high = arr[0], curr = high;
	int jumps = 1;
	for(int i = 1; i < n; i++) {
		high--, curr--;
		high = max(high, arr[i]);
		if(i + curr >= n) break;
		if(curr == 0) {
			jumps++;
			curr = high;
		}
	}
	cout << jumps << endl;
	return 0;
}