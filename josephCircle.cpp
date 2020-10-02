#include <bits/stdc++.h>
using namespace std;
int lastRemaining(int n) {
  list<int> ff; int k = 2;
  for(int i = 2; i <= n; i++){
    ff.push_back(i);
  }
  auto it = ff.begin();
  while(ff.size() > 1){
    //advance k times
    for(int i = 1; i < k; i++){
      it++;
      if(it == ff.end()) it = ff.begin();
    }
    it = ff.erase(it);
    if(it == ff.end()) it = ff.begin();
  }
  return *ff.begin();;
}
int main(int argc, char const *argv[]) {
  int n; cin>>n;
  cout << lastRemaining(n);
  return 0;
}
