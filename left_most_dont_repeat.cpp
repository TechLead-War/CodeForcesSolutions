#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  string str;  cin>>str;
  int count[26] = {0}, index = - 1;
  //geeksforgeeks
  for(int i = str.length() - 1; i >=0 ; i--){
    count[str[i] - 'a']++;
    if(count[str[i] - 'a'] == 1){
      index = i;
    }
  }
  cout<<index;            
  return 0;
}
