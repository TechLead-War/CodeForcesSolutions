#include<bits/stdc++.h>
using namespace std;
bool is_anagram(const string str1, const string str2){
  int count[256] ={0}; //max characters in a string
  for(auto i : str1){
    count[i-'a']++;
  }
  for(auto it : str2){
    count[it-'a']--;
  }
  for(auto it : count){
      if(!it) return 0;
  }
  return 1;
}
int main(int argc, char const *argv[]) {
  string str1, str2;   cin>>str1; cin>>str2;
  cout<<(is_anagram(str1,str2))?"YES":"NO";
  return 0;
}
