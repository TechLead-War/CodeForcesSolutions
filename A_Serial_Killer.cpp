/*
ross rachel
4
ross joey
rachel phoebe
phoebe monica
monica chandler


ross rachel
joey rachel
joey phoebe
joey monika
joey chandler
*/
#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  string str1, str2, str3, str4;  cin>>str1>>str2;
  int n;  cin>>n;
  cout<<str1<<" "<<str2<<endl;
  while(n--){
    //death_name   new_person
    cin>>str3>>str4;
    if(str1 == str3){
      str1 = str4;
    }else{
      str2 = str4;
    }cout<<str1<<" "<<str2<<endl;
  }
  return 0;
}
