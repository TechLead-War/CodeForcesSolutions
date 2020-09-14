#include <bits/stdc++.h>
using namespace std;

template <typename T>
void print_me(const pair<T,int>& data){
  cout<<data.first<<" ";
}
int main(int argc, char const *argv[]) {
  int n;  cin>>n;
  while(n--){
  string str;  cin>>str;
  unordered_map<char,int> mp;
  for(auto it : str){
    mp[it]++;
  }
  if(mp.size() == 1)
    cout<<"-1";
  else{
    for(auto it : mp){
      while(it.second--)
        cout<<it.first;
    }
    cout<<endl;
  }
}
  return 0;
}
