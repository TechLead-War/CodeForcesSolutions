#include <bits/stdc++.h>
using namespace std;
bool is_same_here(char ch1, char ch2){
    if(abs(ch1 - ch2) == 'a' - 'A')
      return true;
  return false;
}

int main(int argc, char const *argv[]) {
  string str;  cin>>str;
  for(int i = 0; (i < str.size() - 1) && !str.empty() ;){
    if(is_same_here(str[i], str[i+1])){
      str.erase(i, 2);
      i = 0;
  }
  else{
    i++;
  }
 }
  cout<<str;
  return 0;
}
