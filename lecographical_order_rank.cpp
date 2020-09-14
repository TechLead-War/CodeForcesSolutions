#include <bits/stdc++.h>
using namespace std;

int fact(int n){
  int ans = 1;
  while(--n){
    ans *= n;
  }
  return ans;
}

int main(int argc, char const *argv[]) {
  string str;  cin>>str;

  int factt = fact(str.size() - 1);

  char count[256] = {0};
  //count char's
  for(char ch : str)  {  count[ch]++;  }

  //make cummulative char array
  for(int i = 1; i <= 256; i++)  {  count[i] = count[i] + count[i-1];  }

  __int64 ans = 0;
  //count premutation's
  //how many elements are smaller than or equal to the the current char * factorial
     //next time don't count the prev element becuase it's already placed.

  for(int i = 0; i < str.size(); i++){  //aayush

    ans += count[str[i]] * factt;
    factt /= (str.size() - i - 1);
    for(int j = str[i]; j <=256; j++){
      count[j]--;
      cout<<ans;
    }
  }
  cout<<ans<<endl;
  return 0;
}
