#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  string str; cin>>str;
  int cont = 1, i = 0, rounds = 0, cW = 0;
  while(str[i]){
    cW = abs((str[i]-'a'+1) - cont);
    rounds += cW > (26 - cW) ? (26 - cW) : cW;
    cont = abs(str[i]- 'a' + 1);
    i++;
  }
  cout<<rounds<<endl;
  return 0;
}
