#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define fio ios_base::sync_with_stdio(false); cin.tie(0);
#define MOD 1000000007
#define pb push_back
#define vi vector<int>
#define ip(arr, n) for (int i = 0; i < n; i++) cin >> arr[i];
using namespace std;

bool solve(int* arr, int n, int summ, int taken) {
  if(summ == 0 and taken) return true;
  if(n < 0) return false;
  bool op1 = solve(arr, n - 1, summ + arr[n], taken + 1);
  if(op1) return true;
  bool op2 = solve(arr, n - 1, summ, taken);
  return op1 or op2;
}

int main()
{
  int t; cin >> t;
  while(t--) {
    int n; cin >> n;
    int arr[n]; ip(arr, n);
    // arr, index, sum, taken item
   if(solve(arr, n - 1, 0, 0))
    cout << "Yes" << endl;
   else
    cout << "No" << endl;
  }
	return 0;
}
