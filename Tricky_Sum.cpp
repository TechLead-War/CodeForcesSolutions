#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  int t;   cin>>t;
  __int64 n = 0, sum = 0, it = 0;
  while(t--){
    sum = 0, n, it = 0;
    cin>>n;
    sum = n*(n+1)/2;
    while(n >= pow(2,it)){
      sum = sum - 2*pow(2,it++);
    }
    cout<<sum<<endl;
  }
  return 0;
}
