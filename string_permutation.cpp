//string_permutation.cpp
#include <bits/stdc++.h>
using namespace std;
int patt[256] = {0};

//cumulative array for pat [Global]
void pre_processing(string pat){
  for(const char &ch : pat){
    patt[ch]++;
  }
}
bool is_permutation(string str, int s, int e){
  //cumulative array from i-th index to (i-th + par.size())
  int strr[256] = {0};
  for(int i = s; i < s + e; i++){
    strr[str[i]]++;
  }

  //if cumulative both are same..
  for(int i = 0; i < 256; i++){
    if(patt[i] != strr[i]){
      return false;
    }
  }
  return true;
}
int main(int argc, char const *argv[]) {
  string str, pat;  cin>>str>>pat;
  pre_processing(pat);
  for(int i = 0; i <= str.size() - pat.size() ; i++){ // O(m*n)
    if(is_permutation(str, i, pat.size())){
      cout<<"True";
      return 0;
    }
  }
  cout<<"False";
  return 0;
}
