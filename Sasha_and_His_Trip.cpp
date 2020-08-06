#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  int n, k; cin>>n>>k;
  if(k > n) k = n;
  int ans = 0;
  //finding the sum of n terms..
  ans = ((n - k) * ( 2 + (n - k - 1))) / 2;
  cout<< ans + (k - 1);
  return 0;
}
