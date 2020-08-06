//number of eggs to buy to get at least 1 sticker and 1 toy
#include <bits/stdc++.h>
using namespace std;
/*LOGIC
logic is to find the minimum overlap + 1 (so we get other item as well)

//eg ..
//max(20 - 10, 20 - 14) + 1 = 11

  0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
  ^ ^ ^ ^ ^ ^ ^ ^ ^ ^
              ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^ ^
*/
int main(int argc, char const *argv[]) {
  int t;  cin>>t;
  while(t--){
    int n, stickers, toys;  cin>>n>>stickers>>toys;
    cout<<max(n - stickers, n - toys) + 1<<endl;
  }
  return 0;
}
