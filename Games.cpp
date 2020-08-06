#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  int n; cin>>n;
  int a,b;
  multimap<int,int> mp;
  while(n--){
    cin>>a>>b;
    mp.insert({a,b});
  }
  int count = 0;
  for(auto it = mp.begin(); it != mp.end(); it++){
    for(auto i2 = mp.begin(); i2 != mp.end(); i2++){
      if(it->first == i2->second){
        //cout<<it->first<<i2->second<<endl;
        count++;
      }
    }
  }
  cout<<count<<endl;
  return 0;
}
