#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  string str;  cin>>str;
  int index = str.find("WUB");
  while(index != string::npos){
    if(index == 0  || str[index-1] == ' ')
      str.replace(index,3,"");
    else
      str.replace(index,3," ");
    index =  str.find("WUB");
  }
  cout<<str;
  return 0;
}
