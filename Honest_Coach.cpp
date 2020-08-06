#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  int t; cin>>t;
  while(t--){
    int n, item; cin>>n;
    vector<int> arr;
    for(int i = 0; i < n; i++){
      cin>>item;
      arr.push_back(item);
    }
    sort(arr.begin(),arr.end()); //O(n*Logn)
    int diff = INT_MAX;
    for(int i = 1 ; i < n ; i++){
      diff = min(diff,abs(arr[i-1] - arr[i]));
    }
    cout<<diff<<endl;
  }
  return 0;
}
