#include <bits/stdc++.h>
using namespace std;
bool is_vovel(char ch){
  ch = tolower(ch);
  if(ch =='a' || ch =='e' || ch =='i' || ch =='o' || ch =='u')
    return true;
  return false;
}
int main(int argc, char const *argv[]) {
  string str;  getline(cin,str);
  stringstream ss(str);
  string temp, succ = "maa";
  while(!ss.eof()){
    ss >> temp;
    if(!is_vovel(temp[0])){
      char tp = temp[0];
      temp.erase(temp.begin());
      temp.push_back(tp);
    }
    temp += succ;
    succ.push_back('a');
    cout<<temp<<" ";
  }
  return 0;
}
