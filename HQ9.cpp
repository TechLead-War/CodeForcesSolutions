#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  string str; cin>>str;
  bool ans = false;
  int i = 0;
  while(str[i]){
    if(str[i] == 'H' || str[i] == 'Q' || str[i] == '9'){
      ans = true;break;
    }
    i++;
  }
  if(ans)  cout<<"YES";
  else cout<<"NO";
  return 0;
}
