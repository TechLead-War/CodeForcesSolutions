//Restoring_Three_Numbers.cpp
#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  multiset<int> s;
  int item;
  for(int i = 0 ; i < 4; i++){
    cin>>item;
    s.insert(item);
  }
  auto it = prev(s.end());
  int A = (*it); it = prev(it);
  int B = (*it); it = prev(it);
  int C = (*it); it = prev(it);
  int D = (*it); it = prev(it);
  //4 3 2 1
  cout<<A - B<<" "<<A - C<<" "<<A - D;
  return 0;
}
