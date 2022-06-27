#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define fio ios_base::sync_with_stdio(false); cin.tie(0);
#define MOD 1000000007
#define pb push_back
#define ip(n) for (int i = 0; i < n; i++) cin >> arr[i];
using namespace std;

ll solve(int* arr, int i, int j) {
	if(i >= j) return 0LL;
	return max(arr[i] + min(solve(arr, i + 2, j), solve(arr, i + 1, j - 1)),
						 arr[j] + min(solve(arr, i, j - 2), solve(arr, i + 1, j - 1)));
}

int main()
{
	int n; cin >> n;
	int arr[n]; ip(n);
	cout << solve(arr, 0, n - 1);
	return 0;
}
