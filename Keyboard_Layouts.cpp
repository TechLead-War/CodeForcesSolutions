#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  string str1, str2, str3;  cin>>str1>>str2>>str3;
  //str3 = strlwr(str3);
  //transform(str3.begin(), str3.end(), str3.begin(), ::tolower);
  unordered_map<char,char> mp;
  int i = 0;
  for(auto it : str1){
    mp[it] = str2[i++];
  }
  for(auto it : str3){
    if(it >= '0' && it <= '9')
      cout<<it;
    else if(it >='a' && it <='z')
       cout<<mp[it];
    else{
      cout<<(char)toupper(mp[tolower(it)]); // 97 - 'a'  => 65 +
    }
  }
  return 0;
}
