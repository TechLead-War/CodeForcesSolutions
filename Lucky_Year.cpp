#include<bits/stdc++.h>
using namespace std;
//this function count the number of digits and finds the first digit.
pair<int,int> calc(int n){
  int digits = 0, first_dig = n;
  while(n){
    digits++;
    first_dig = n;
    n /= 10;
  }
  return {digits,first_dig+1};
}
int main(int argc, char const *argv[]) {
  int n;  cin>>n;
  pair<int,int> a;
  a = calc(n); // digits  first_number
  while(--a.first){
    a.second *= 10;
  }
  cout<<a.second - n <<endl;
  return 0;
}
