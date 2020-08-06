/*
  20 10 20
  //(ai.x+1)
  //x = no. of cans down
  20 20 10
  // (20.0 + 1) + (20.1 + 1) + (10.2 + 1) = 1 + 21 + 21 = 43
  // (10.0 + 1) + (20.1 +1) + (20.2 + 1) = 1 + 21 + 41 = 63

  4
  10 10 10 10
 // 1 + 11 + 21 + 31 = 64


 6
 5 4 5 4 4 5
 // sort()
 // 5 5 5 4 4 4
 // 2 4 5 1 3 6
*/


#include<bits/stdc++.h>
using namespace std;
bool MyCmp(const pair<int,int>& a, const pair<int,int>& b){
  return a.first > b.first;
}
int main(int argc, char const *argv[]) {
  int n, item, ans = 0;  cin>>n;
  vector<pair<int,int>> arr; //item,index
  for(int i = 0; i < n; i++){
    cin>>item;
    arr.push_back({item,i+1});
  }
  sort(arr.begin(),arr.end(),MyCmp);
  //(ai.x+1)
  for(int i = 0; i < n; i++){
    ans += (arr[i].first * i) + 1;
  }
  cout<<ans<<endl;
  for(auto it : arr){
    cout<<it.second<<" ";
  }
  return 0;
}
