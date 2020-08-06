//reverse vector print with template
#include <bits/stdc++.h>
#define PI 3.14159
char alpha[] = {"abcdefghijklmnopqrstuvwxyz"};
using namespace std;

template <typename T>
vector<T> reverse(std::vector<T> v){
  stack<T> s;
  for(auto it : v) { s.push(it); }
  v.clear();
  while(!s.empty()){
    v.push_back(s.top());
    s.pop();
  }
  return v;
}

template <typename T>
void print(std::vector<T> v){
  for(auto it : v){
    cout<<it<<" ";
  }  cout<<endl;
}

int main(int argc, char const *argv[]) {
  vector<int> v1; vector<bool> v2; vector<float> v3; vector<char> v4;
  srand(time(NULL));
  for(int i = 0; i < 5+rand()%5; i++){
    v1.push_back(rand()%10);
    v2.push_back(rand()%2);
    v3.push_back(PI*(rand()%10));
    v4.push_back(alpha[rand()%26]);
  }
  v1 = reverse(v1); print(v1);
  v2 = reverse(v2); print(v2);
  v3 = reverse(v3); print(v3);
  v4 = reverse(v4); print(v4);
  return 0;
}
