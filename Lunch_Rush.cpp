#include <bits/stdc++.h>
using namespace std;
int max(int a, __int64 b){
  return a > b? a : b;
}
int main(int argc, char const *argv[]) {
  int n; __int64 k;  cin>>n>>k;
  int p1, p2, maxx = INT_MIN;
  vector<pair<int,int>> arr;
  while(n--){
    cin>>p1>>p2;
    arr.push_back({p1,p2});
  }
  // fun time        f i - (t i - k)
  for(auto it : arr){
    if(it.second > k){
      maxx = max(maxx , it.first - (it.second - k));
    }
    else{
      maxx = max(maxx , it.first);
    }
  }
  cout<<maxx<<endl;
  return 0;
}
