#include <bits/stdc++.h>
using namespace std;
int getWinner(vector<int>& A, int k) {
       // 1,3,45,3,6,2,63,34
       int cur = A[0], win = 0; // curr = 1, win = 0
                               // arr[] = 3
       for (int i = 1; i < A.size(); ++i) {
           if (A[i] > cur) {
               cur = A[i];
               win = 0;
           }
           if (++win == k) break;
       }
       return cur;
}

int main(int argc, char const *argv[]) {
  vector<int> v1 = {1,2,3};
  int k = 6;
  cout<<getWinner(v1,k);
  return 0;
}
