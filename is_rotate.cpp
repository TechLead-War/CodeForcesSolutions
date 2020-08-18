//is_rotate.cpp
#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  string str1, str2;  cin>>str1>>str2;
  str1 = str1 + str1;
  if(str1.find(str2) != string::npos){
    std::cout << "Found" << '\n';
  }
  else{
    std::cout << "Not Found" << '\n';
  }
  return 0;
}
