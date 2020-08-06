#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  int n, L = 0; cin>>n;
  string str; cin>>str;
  for(int i = 0; i < str.length(); i++){
    if(str[i] == 'L') L++;
  }
  cout<<L+1+(n-L);
  return 0;
}
