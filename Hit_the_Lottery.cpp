#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  int n, count = 0; cin>>n;
  while(n>0){
    if(n-100>=0){ n-=100; count++;}
    else if(n-20>=0){ n-=20; count++;}
    else if(n-10>=0){ n-=10; count++;}
    else if(n-5>=0){ n-=5; count++;}
    else {n--; count++;}
  }
  cout<<count<<endl;
  return 0;
}
