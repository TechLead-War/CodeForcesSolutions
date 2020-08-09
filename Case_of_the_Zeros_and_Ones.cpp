#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  int n; string str;  cin>>n>>str;
  int z = 0, o = 0;
  for(auto it : str){
    (it=='1')?(z++):(o++);
  }
  cout<<abs(z-o)<<endl;
  return 0;
}
