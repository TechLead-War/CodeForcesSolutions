#include <bits/stdc++.h>
using namespace std;
void reverseStrWithWord(string str){
  stack<string> s;
  istringstream st(str);
  do{
    string tmp;  st >> tmp;  s.push(tmp);  }while(st);
  while(!s.empty()){
    cout<<s.top()<<" ";s.pop();
  }
}
int main()
{
    char str[] = "FuN iS Coding";
    reverseStrWithWord(str);
    return 0;
}
