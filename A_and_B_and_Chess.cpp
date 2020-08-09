#define LOG 8
#include <bits/stdc++.h>
using namespace std;
/*
the queen's weight is 9,
the rook's weight is 5,
the bishop's weight is 3,
the knight's weight is 3,
the pawn's weight is 1,
*/
int main(int argc, char const *argv[]) {
  vector<char> Board;
  unordered_map<char,int> point;
  point['q'] = 9;
  point['r'] = 5;
  point['b'] = 3;
  point['n'] = 3;
  point['p'] = 1;

  point['Q'] = 9;
  point['R'] = 5;
  point['B'] = 3;
  point['N'] = 3;
  point['P'] = 1;

  char item;int cost1 = 0, cost2 = 0;
  for(int i = 0; i < LOG; i++){
    for(int j = 0; j < LOG; j++){
      cin>>item;  Board.push_back(item);
      if((item >='a') && (item <='z')){
        cost1 += point[item];
      }
      else if((item >='A') && (item <='Z')){
        cost2 += point[item];
      }
    }
  }
  (cost1 > cost2)?cout<<"Black":(cost1==cost2)?(cout<<"Draw"):cout<<"White";
  return 0;
}
