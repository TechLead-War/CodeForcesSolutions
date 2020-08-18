#include <bits/stdc++.h>
using namespace std;
//at most 8 candles
int main(int argc, char const *argv[]) {
  int n, k, item;  // k = total k candles to give..
  cin>>n>>k;
  vector<int> arr;
  for(int i = 0; i < n; i++){
    cin>>item;
    arr.push_back(item);
  }
// 9 9 1
// 19

  int buffer = 0, given = 0, days = 0;
  for(auto it : arr){
    buffer += it;
    if(buffer >= 8){
      given += 8;  // buffer = 3
      buffer -= 8; // given = 16
    }
    else{
      given += buffer;
      buffer -= buffer;
    }
    days++;
    if(given >= k) {
      cout<<days<<endl;
      return 0;
    }
  }

  cout<<"-1"<<endl;
  return 0;
}
