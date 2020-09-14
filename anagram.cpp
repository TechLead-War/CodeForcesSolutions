
#include <bits/stdc++.h>
using namespace std;
bool isAnagram(string txt, string pat){
  int arr[26] = {0};
  for(int i = 0; i < txt.size(); i++)  arr[txt[i] - 'a']++;
  for(int i = 0; i < pat.size(); i++)  arr[pat[i] - 'a']--;
  for(int i = 0; i < 26; i++)  if(arr[i]) return 0;
  return 1;
}
int main(int argc, char const *argv[]) {
  string txt, pat;
  getline(cin,txt);
  getline(cin,pat);
  if(isAnagram(txt,pat)){
    cout << "anagram";
  }
  else
   cout << "Not Anagram";
  return 0;
}
