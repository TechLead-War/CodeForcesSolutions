#include <bits/stdc++.h>
using namespace std;
bool MyCmp(const pair<int,int>& p1, const pair<int,int>& p2){
  return p1.first > p2.first;
}
int main(int argc, char const *argv[]) {
  vector<pair<int,int>> v;
  int n, item; cin>> n;
  for(int i = 0 ; i < n; i++){
    cin>>item;
    v.push_back({item,i});
  }
  sort(v.begin(), v.end(), MyCmp);
  for(auto x : v){
    cout << x.second << " ";
  }
  return 0;
}
