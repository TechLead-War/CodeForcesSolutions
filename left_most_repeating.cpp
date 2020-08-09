#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  string str;  cin>>str;
  int count[26] = {0};
  for(auto it : str){
    if(count[it-'a']){
      cout<<"1";
      return 0;
    }
    count[it-'a']++;
  }
  cout<<"-1";
  return 0;
}
