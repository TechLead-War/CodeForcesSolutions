#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  int n;  cin>>n;

  int* arr = new int[n];
  for(int i = 0; i < n ; i++){  cin>>arr[i];  }
  sort(arr,arr+n);
  //1st element
  cout<<arr[1] - arr[0]<<" "<<arr[n-1] - arr[0]<<endl;
  //for 2nd to n-1 elements
  for(int i = 1; i<= n-2; i++){
    cout<<min(arr[i] - arr[i-1] , arr[i+1] - arr[i])<<" "<<\
    max(arr[i] - arr[0] , arr[n-1] - arr[i])<<endl;
}
  //for last element
  cout<<arr[n-1] - arr[n-2]<<" "<<arr[n-1] - arr[0]<<endl;
  return 0;
}
