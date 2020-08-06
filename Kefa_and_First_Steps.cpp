#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  int n; cin>>n;
  int* arr = new int[n];
  for(int i = 0; i < n; i++){  cin>>arr[i];  }
  int maxx = 1, curr = 1;
  for(int i = 0; i < n - 1; i++){
    if(arr[i] <= arr[i+1])  {  curr++;  }
    else{  curr = 1;  }
    maxx = max(maxx,curr);
  }
  cout<<maxx;
  return 0;
}
