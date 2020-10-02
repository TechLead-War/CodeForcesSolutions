#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  int n, item; cin>>n;
  vector<int> v;
  for(int i = 0; i < n; i++){
    cin>>item;
    v.push_back(item);
  }
  stack<int> s; // 1 2 3 4 5
  for(auto it = v.rbegin(); it != v.rend(); it++){
    while(!s.empty() && (s.top() < *it)){
      s.pop();
    }
    if(s.empty())
      cout << "-1";   // -1 5 4 3 2
    else
      cout << s.top();
    s.push(*it);     // 5 4 3 2 1
  }
  return 0;
}
