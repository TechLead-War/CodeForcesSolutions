#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  int n, m, diff = INT_MAX; cin>>n>>m;
  int* arr = new int[m];
  for(int i = 0; i < m ; i++){  cin>>arr[i];  }
  sort(arr,arr+m); //1 3 5 6 8 11    n = 3, m = 6
  for(int i = 0 ; i < m - n + 1 ; i++){
    diff = min(arr[i+n-1] - arr[i] , diff); // 
  }
  cout<<diff<<endl;
  return 0;
}
