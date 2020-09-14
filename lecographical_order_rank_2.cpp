//lecographical_order_rank_2.cpp
#include <bits/stdc++.h>
using namespace std;
int patt[256] = {0};
int textt[256] = {0};

void change_rank(string text, int i, int j){
  textt[text[i]]--;
  textt[text[j]]++;
}
void preprocessing1(const string& str, int n){
  for(int i = 0; i < n; i++){
    textt[str[i]]++;
  }
}
void preprocessing(const string& str){
  for(const char& ch : str){
    patt[ch]++;
  }
}
bool is_same_here(){
  for(int i = 0; i < 256; i++){
    if(patt[i] != textt[i])  return false;
  }
  return true;
}

int main(int argc, char const *argv[]) {
  string text, pat;  cin>>text>>pat;
  preprocessing1(text,pat.size());
  preprocessing(pat);

  for(int i = 0; i <= text.size() - pat.size(); i++){
    if(is_same_here()) {
      cout<<"True";
      return 0;
    }
    else{
      change_rank(text, i ,i + pat.size());
    }
  }
  cout<<"False";
  return 0;
}
