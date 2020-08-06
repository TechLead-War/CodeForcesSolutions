#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int lli;
#define f front
#define p push

int main(int argc, char const *argv[]) {
  lli n; int four_rep = 0;
  cin>>n;
  stringstream s;  string str;
  s << n;  s >> str;
  //1. start with '1'. [done]
  //2. no consecutive 3 4's
  //3. only '1' and '4'
  if(str[0] != '1')  { cout<<"NO"; return 0;}

  for(int i = 0; i < str.length(); i++){
    if(str[i] != '1' && str[i] != '4') { cout<<"NO"; return 0;}
    if(str[i] == '4') { four_rep++; if(four_rep >=3){ cout<<"NO"; return 0;}}
    else four_rep = 0;
  }
  // 114114
  cout<<"YES";
  return 0;
}
