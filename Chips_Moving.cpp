/*
find the max char
make rest max ->
  if element is same parity => cost = 0
  else cost = 1
  */
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
  int n, item, cost = 0;  cin>>n;
  vector<int> arr(0,n);
  for(int i = 0; i < n ; i++){  cin>>item;  arr.push_back(item);}

  for(auto it : arr){
    if((it&1)) cost++;
  }
  cout<<min(cost , n-cost)<<endl;
  // min(even,odd)

  return 0;
}
