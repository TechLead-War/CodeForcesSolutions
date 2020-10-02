#include<bits/stdc++.h>
using namespace std;
int main()
{
  stack<char> s;
  string str; int i = 0;
  getline(cin, str);
  while(str[i++]){
    if(str[i] == '{' || str[i] == '[' || str[i] =='(')
      s.push(str[i]);
    else if(str[i] == '}' || str[i] == ']' || str[i] ==')'){
      if(s.empty()) return 0;
      if((s.top() == '{') && (str[i] != '}')) return 0;
      if((s.top() == '[') && (str[i] != ']')) return 0;
      if((s.top() == '(') && (str[i] != ')')) return 0;
      else s.pop();
    }
    i++;
  }
}
