#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  /*
  n_oranges | b_maxSizeOfOrange | d_sizeOfJuicer
  n(s) oranges size
  2 7 10
  5 6

  */
  int n, b, d, empty = 0, sum = 0;
  cin>>n>>b>>d;
  int* arr = new int[n];
  for(int i = 0; i < n; i++){
    cin>>arr[i];
    if(arr[i] <= b)
      sum += arr[i];
    if(sum > d){
      sum = 0;
      empty++;
    }
  }
  cout<<empty<<endl;
  return 0;
}
