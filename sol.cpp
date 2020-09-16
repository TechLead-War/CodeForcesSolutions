#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  for(int i = 0; i <= 9; i++){
    for(int j = 0; j <= 9; j++){
      for(int k = 0; k <= 9; k++){
        if( ((i+j+k)%6 == 5) && ((i+j+k)%7 == 5))
          cout << i << j << k << endl;
      }
    }
  }
  return 0;
}
