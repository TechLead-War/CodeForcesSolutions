#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define fio ios_base::sync_with_stdio(false); cin.tie(0);
#define MOD 1000000007
using namespace std;

int main(int argc, char const *argv[])
{
  int t; cin >> t;
  while(t--) {
    string str; cin >> str;
    int n = str.size();
    int dp[n + 1];
    memset(dp, 0, sizeof dp);
    dp[0] = 1;

    unordered_map<char, int> mp;
    for (int i = 1; i <= n; i++) {
        dp[i] = (2 * dp[i - 1])%MOD;
        if(mp.find(str[i - 1]) != mp.end()) {
          dp[i] = (dp[i] - dp[mp[str[i - 1]] - 1] + MOD)%MOD;
        }
        mp[str[i - 1]] = i;
    }
    cout << dp[n] << endl;
  }
	return 0;
}
