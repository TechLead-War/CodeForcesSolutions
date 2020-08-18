#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
  string s1, s2;   cin>>s1>>s2;
  int a1  = 0, a2 = 0, b1 = 0, b2 = 0;
  a1 = (s1[0] - '0')*10 + (s1[1] - '0');
  b1 = (s1[3] - '0')*10 + (s1[4] - '0');

  a2 = (s2[0] - '0')*10 + (s2[1] - '0');
  b2 = (s2[3] - '0')*10 + (s2[4] - '0');
  /*
   a1:b1
   23:44

   // time os sleep..

   a2:b2
   23:55
  */
  if(b1 < b2) {  a1 -= 1, b1 += 60;  }
  if(a1 < a2) {  a1 += 24;  }

  printf("%02d:%02d\n",a1-a2,b1-b2);
  return 0;
}
