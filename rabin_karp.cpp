#include <bits/stdc++.h>
using namespace std;
__int64 HashFunc(string pat){
  __int64 hash = 0;
  int p = pat.size();
  for(char ch : pat){
    hash += ((ch - 'a') + 1) * pow(10,--p);
  }
  return hash;
}
int main(int argc, char const *argv[]) {
  string text, pat;  cin>>text>>pat;

  __int64 patt = HashFunc(pat);
  for(int i = 0; i < text.size() - pat.size() + 1; i++){
    string temp = text.substr(i,pat.size());
    if( HashFunc(temp) == patt ){
      if( temp == pat){
        cout << i <<" ";
      }
    }
  }
  return 0;
}
