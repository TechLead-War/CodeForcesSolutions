#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  string str ="Let's do this, each in new line.";
  stringstream strr(str);
  while(! strr.eof()){
    string temp;
    strr >> temp;
    cout << temp << endl;
  }
  return 0;
}
