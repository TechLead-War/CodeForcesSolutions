#include <bits/stdc++.h>
using namespace std;
string count_sort(string str){
  int count[26] = {0};
  for(auto it : str){  count[it-'a']++;  }//aaabcefg 3 0 0 1 1 2
    str = "";
  for(int i = 0; i < 26; i++){
    if(count[i]){
      while(count[i]){
        str += ('a' + i);
        count[i]--;
      }
    }
  }
    return str;
  }
int main(int argc, char const *argv[]) {
  string str1, str2;  cin>>str1;//ayush
  str2 = count_sort(str1);
  int times = 1;
  while(str1 != str2){
    next_permutation(str2.begin(),str2.end());
    times++;
  }
  cout<<times<<endl;
  return 0;
}
