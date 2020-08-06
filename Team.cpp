#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  int n, b1, b2, b3, count = 0; cin>>n;
  while(n--){
    cin>>b1>>b2>>b3;
    if(b1+b2+b3 >= 2) count++;
  }
  cout<<count<<endl;
  return 0;
}
