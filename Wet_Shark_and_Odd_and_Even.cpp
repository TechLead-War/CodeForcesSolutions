//max even sum ..
#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  int n, item;  cin>>n;
  __int64 sum = 0;
  multiset<int,greater<int>> s;
  for(int i = 0; i < n; i++){
    cin>>item;
    if(item%2)
      s.insert(item);
    else
      sum += item;
  }
  if(s.size()%2){
      auto it = prev(s.end());
      s.erase(it);
  }

  for(auto it : s)  {  sum += it;   }
    cout<<sum;
  return 0;
}
