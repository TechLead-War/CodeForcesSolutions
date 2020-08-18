#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  string str;  getline(cin,str);
  int alphas[26] ={0};
  for(auto it : str){
    alphas[it-'a']++;
  }
  int count = 0;
  for(auto it : alphas){
    if(it) count++;
  }
  if(count%2){
    cout<<"IGNORE HIM!";
  }
  else
    cout<<"CHAT WITH HER!";
  return 0;
}
