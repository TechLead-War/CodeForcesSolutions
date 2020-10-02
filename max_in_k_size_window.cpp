#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  vector<int> v;
  int n, k, item;  cin >> n >> k;
  for(int i = 1; i <= n; i++){
    cin >> item;
    v.push_back(item);
  }
  
  set<int> s(v.begin(), v.begin() + k);
  for(int i = 0; i <= n - k; i++){
    cout << *prev(s.end()) << endl;
    s.erase(v[i]);
    s.insert(v[i+k]);
  }
  return 0;
}
