#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  string str;  cin>>str;
  const char* hlo = "hello";
  int count = 0;
  for(int i = 0; i < str.size(); i++){
    if(str[i] == hlo[count])  count++;
  }
  if(count >= 5) cout<<"YES";
  else cout<<"NO";
  return 0;
}
