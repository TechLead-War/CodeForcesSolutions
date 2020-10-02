#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  int n, item; cin>>n;
  std::vector<int> v;
  while(n--){
    cin>>item;
    v.push_back(item);
  }
  stack<int> s;
  for(auto i = v.rbegin(); i != v.rend(); i++){
    while((!s.empty()) && s.top() < *i){
      s.pop();
    }
    s.push(*i);
    cout << s.size() << " ";
  }
  return 0;
}
