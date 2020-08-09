/*
5 7 8 4  => 25
9 5 3 2  => 19
1 6 6 4  => 17
9 5 7 3  => 24

24 23 24 13

25 19 17 24
24 23 24 13

*/
#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  int n, item;   cin>>n;
  vector<vector<int> > arr(n);
  vector<int> rows, cols;
  for(int i = 0; i < n; i++){
    arr[i].resize(n);
    for(int j = 0; j < n;j++){
      cin>>arr[i][j];
    }
  }

  //calc cols sums..
  int sum = 0;
  for(int i = 0; i < n; i++){
    sum = 0;
    for(int j = 0; j < n; j++){
      sum += arr[j][i];
    }
    cols.push_back(sum);
  }
  //calc sum rows..
  for(int i = 0; i < n; i++){
    sum = 0;
    for(int j = 0; j < n; j++){
      sum += arr[i][j];
    }
    rows.push_back(sum);
  }

  //how many elements of rows are greater in cols..
  int wins = 0;
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      if(rows[i] < cols[j])  wins++;
    }
  }
  cout<<wins<<endl;
  return 0;
}
