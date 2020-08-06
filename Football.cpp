#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  string str; cin>>str;
  int i = 1,dang = 1; char ch = str[0];
  bool ans = false;
  while(str[i]){
    if(str[i] == ch){
      if(++dang == 7) { ans = true; break; }
    }
    else{
      ch = str[i];
      dang = 1;
    }
    i++;
  }
  if(ans) cout<<"YES";
  else cout<<"NO";
  return 0;
}
