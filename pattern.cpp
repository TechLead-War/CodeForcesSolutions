//find all the occurances of text..
#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  string text, pat;  cin>>text>>pat;
  /*
  aaaabbaa
  ba
  */
  for(int i = 0; i <= text.size() - pat.size();){
    int j = 0;
    for(j = 0 ; j < pat.size();j++){
      if(pat[j] != text[i + j])
        break;
    }
    if(j == pat.size())  cout<<i<<" ";
    if(j == 0) i++;
    else i += j;
  }
  return 0;
}
