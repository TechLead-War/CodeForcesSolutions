#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  string a, b; cin>>a>>b;
  //lexographical string compare ...
  if(a > b)
   cout<<"a is bigger";
  else
    cout<<"b is bigger";

  //change int to string
  int num = 123;
  string str = to_string(num);

  //methord_2
  stringstream s;
  /*
    << input data to stringstream
    >> extract data from stringstream
  */
  string str;
  s << n;
  s >> str;
  cout<<str;
  cout<<endl<<str[0];
    
  return 0;
}
