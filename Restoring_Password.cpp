#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  string str, query[10];  cin>>str; cin.ignore(1);
  for(int i = 0; i < 10; i++){
    getline(cin,query[i]);
  }
  int index ;
  for(int i = 0; i < 10; i++){
    index = str.find(query[i]) / 10;
    cout<<index<<" ";
  }
  cout<<"\n";
  return 0;
}
