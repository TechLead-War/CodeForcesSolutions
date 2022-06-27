#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define fio ios_base::sync_with_stdio(false); cin.tie(0);
#define MOD 1000000007
#define pb push_back
#define ip(arr, n) for (int i = 0; i < n; i++) cin >> arr[i];
using namespace std;

//s1 -> s2

// Insert a character at any position.
// Remove a character from any position.
// Replace a character with any other character.
string s1, s2;
int dp[2001][2001];
int solve(int l1, int l2) {
  if(l1 == 0 or l2 == 0) return l1 + l2;
  if(dp[l1][l2]) return dp[l1][l2];
  //if char match, then no char needed to match
  if(s1[l1 - 1] == s2[l2 - 1]) return dp[l1][l2] = solve(l1 - 1, l2 - 1);
  return dp[l1][l2] = 1 + min({solve(l1 - 1, l2), solve(l1 - 1, l2 - 1), solve(l1, l2 - 1)});
}

int main()
{
	fio
  cin >> s1 >> s2;
  cout << solve(s1.size(), s2.size()) << endl;
	return 0;
}
