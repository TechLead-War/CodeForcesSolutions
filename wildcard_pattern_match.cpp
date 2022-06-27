#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define fio ios_base::sync_with_stdio(false); cin.tie(0);
#define MOD 1000000007
#define pb push_back
#define ip(arr, n) for (int i = 0; i < n; i++) cin >> arr[i];
using namespace std;
string s, t;

struct hash_pair {
    template <class T1, class T2>
    size_t operator()(const pair<T1, T2>& p) const
    {
        auto hash1 = hash<T1>{}(p.first);
        auto hash2 = hash<T2>{}(p.second);
        return hash1 ^ hash2;
    }
};

unordered_map<pair<int, int>, int, hash_pair> mp;
int solve(int i, int j, int& n, int& m) {
  //cout << i << " " << j << endl;
  if(i == n and j == m) return 1;
  if(mp[{i, j}] != 0) return mp[{i, j}];
  if(i < n and j < m) {
    if(s[i] == t[j])
      return mp[{i, j}] = solve(i + 1, j + 1, n, m);
    else if(t[j] == '*')
      return mp[{i, j}] = solve(i, j + 1, n, m) or solve(i + 1, j, n, m);
    else if(t[j] == '?')
      return mp[{i, j}] = solve(i + 1, j + 1, n, m);
    else
      return 0;
    }
    if(j < m and t[j] == '*') return solve(i, j + 1, n, m);
    return 0;
}
// aaaaaaaaaaaaa
// a
int main()
{
  fio
  cin >> s >> t;
  int n = s.size(), m = t.size();
  cout << solve(0, 0, n, m) << endl;
	return 0;
}
