#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  int n, ans = 0;
  cin>>n;
  if(n%2){
    cout<<"NO";
    return 0;
  }
  for(int i = 0; i < n/2; i++){
    for(int j = i; j < n/2; j++){
      if(n == ((2*i) + (2*j))){
        ans = 1;
        break;
      }
    }
    if(ans) break;
  }
  if(ans) cout<<"YES";
  else cout<<"NO";
  return 0;
}
