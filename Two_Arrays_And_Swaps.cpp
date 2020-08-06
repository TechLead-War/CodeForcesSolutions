#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  int t; cin>>t;
  while(t--){
    int n,k; cin>>n>>k;
    int a[n], b[n];
    for(int i = 0; i < n; i++){
      cin>>a[i];
    }
    for(int i = 0; i < n; i++){
      cin>>b[i];
    }
    sort(a,a+n);
    sort(b,b+n,greater<int>());
    for(int i = 0 ; i < n ; i++){
      if(k <= 0) break;
      if(a[i] < b[i]){
        swap(a[i],b[i]);k--;
      }
    }
    int ans = 0;
    //accumulate(a,a+n,ans);
    for(int i = 0; i < n ; i++){
      ans += a[i];
    }
    cout<<ans<<endl;
  }
  return 0;
}
