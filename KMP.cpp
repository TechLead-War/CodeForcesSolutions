
#include <bits/stdc++.h>
using namespace std;
int* compute_LPS(string pat, int n){
  int* LPS = new int[n];
  LPS[0] = 0;
  int i = 1, len = 0;
  while(i < n){
    if(pat[i] == pat[len])
       LPS[i++] = ++len;
    else{
      if(len == 0)
        LPS[i++] = 0;
      else
        len = LPS[len - 1];
    }
  }
  return LPS;
}
int find_pattern(string& txt, string& pat, int* LPS){
  int m = pat.size();
  for(int i = 0, j = 0; i < txt.size();){
    if(txt[i] == pat[j])  i++,j++;
    if(j == m) cout<<(i - m), j = LPS[j - 1];
    else if((i < txt.size()) && (txt[i] != pat[j])){
      if(j == 0) i++;
      else
       j = LPS[j - 1];
    }
  }
  return 1;
}
int main(int argc, char const *argv[]) {
  string txt; cin>>txt;
  string pat; cin>>pat;
  //make LPS array
  int* LPS = compute_LPS(pat,pat.size());

  if(cout<<find_pattern(txt, pat, LPS)){

  }
  return 0;
}
