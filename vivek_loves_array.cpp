#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define fio ios_base::sync_with_stdio(false); cin.tie(0);
#define MOD 1000000007
#define pb push_back
#define ip(arr, n) for (int i = 0; i < n; i++) cin >> arr[i];
using namespace std;
//0 1 2 3 4 5 6 7
ll solve(int* arr, ll* pre, int l, int r) {
  if(l >= r) return 0;
  ll sum = pre[r] - (l? pre[l - 1]: 0);
  if(sum%2) return 0;
  ll s = 0;
  for(int i = l; i < r; i++) {
    s += arr[i];
    if(s == sum/2) return 1 + max(solve(arr, pre, l, i), solve(arr, pre, i + 1, r));
  }
  return 0;
}

int main()
{
	fio;
  int t; cin >> t;
  while(t--) {
    int n; cin >> n;
    int arr[n]; ll pre[n];
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
      if(i == 0) pre[i] = arr[i];
      else {
        pre[i] = pre[i - 1] + arr[i];
      }
    }
    cout << solve(arr, pre, 0, n - 1) << endl;
  }

	return 0;
}
