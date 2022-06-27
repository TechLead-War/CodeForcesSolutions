#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define fio ios_base::sync_with_stdio(false); cin.tie(0);
#define MOD 1000000007
#define ip(arr, n) for (int i = 0; i < n; i++) cin >> arr[i];
#define pb push_back
using namespace std;


//#of operations to make all array same
int dp[5001][5001];
int solve(vector<int>& ar, int l, int r) {
  //if only single character
  if(l == r) return 0;

  //if 2 characters left, and once we have removed all
  //same characters in step1 then if 2 characters are left they are diff
  if(l == r - 1) return 1;

  //if result is precalculated
  if(dp[l][r]) return dp[l][r];

  int res = 0;
  //if last 2 characters are same
  if(ar[l] == ar[r])
    res = 1 + solve(ar, l + 1, r - 1);
  else
    res = 1 + min(solve(ar, l + 1, r), solve(ar, l, r - 1));
  return dp[l][r] = res;
}

int main(int argc, char const *argv[]) {
  int n; cin >> n;
  int arr[n]; ip(arr, n);

  //remove duplicates..
  vector<int> ar;
  ar.pb(arr[0]);
  int lp = arr[0]; // last picked
  for (int i = 1; i < n; i++) {
    if(arr[i] != lp) {
      ar.pb(arr[i]);
      lp = arr[i];
    }
  }
  n = ar.size();
  cout << solve(ar, 0, n - 1);
	return 0;
}
