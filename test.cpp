//Rabin- karp
//Dictionary rank of word
//add binary strings
//khan academy - cryptography
//Seive of eratosthenes
//LCM & HCF


//isAnagram in sub-string     O(n)
#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  tuple<int,char> t(1,'a');
  tuple<string,float> t1("Ayush Kapri",2.45);
  auto t2 = tuple_cat(t,t1);
  cout << get<1>(t2);
  return 0;
}
