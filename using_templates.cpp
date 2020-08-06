//make a template fucntion for vector for reverse printing elements.
#include <bits/stdc++.h>
using namespace std;
template <typename T>
void print(vector<T> f){
  for(auto it : f){
    cout<<it<<" ";
  }
  cout<<"\n";
}
int main(int argc, char const *argv[]) {
  char alpha[] = {"abcdefghijklmnopqqrstuvwxyz"};
  vector<int> v1; vector<bool> v2; vector<float> v3; vector<char> v4;
  srand(time(0));
  for(int i = 0;i<rand()%20;i++){
    v1.push_back(rand()%10);
    v2.push_back(rand()%2);
    v3.push_back(rand()%10);
    v4.push_back(alpha[rand()%26]);
  }
  print(v1);
  print(v2);
  print(v3);
  print(v4);
  return 0;
}
