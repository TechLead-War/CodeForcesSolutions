#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  string str1, str2;  cin>>str1>>str2;

  int l1 = str1.length(), l2 = str2.length();
  while((str1[l1-1] == str2[l2-1]) && ((l1 > 0) && (l2 > 0))){
    l1--;l2--;
  }
  cout<<l1+l2;
  return 0;
}
