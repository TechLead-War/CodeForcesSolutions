#include <bits/stdc++.h>
using namespace std;
//1 2 3 4 5
//  i j
int main(int argc, char const *argv[]) {
  int n, i, j;  cin>>n;
  string str;  cin>>str;
  //even     logva

  if(n%2 == 0){   i = n/2 - 1;  j = n/2;  }
  //odd
  else{
     cout<<str[n/2];
     str.erase(str.begin() + n/2);
     n--;
     i = n/2 - 1;
     j = n/2;
    }
  while((i >= 0) && (j <= n-1)){
    cout<<str[i--]<<str[j++];
  }
  return 0;
}
