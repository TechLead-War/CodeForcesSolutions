#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
int main(int argc, char const *argv[]) {
  int n; cin>>n;
  while(n--){
    ull x, y; cin>>x>>y;
    if(x-y > 1)
      cout<<"YES"<<endl;
    else
      cout<<"NO"<<endl;
  }
  return 0;
}
