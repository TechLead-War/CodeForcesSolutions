#include<bits/stdc++.h>
using namespace std;
int maxi(int a,int b){
  return a>b?a:b;
}
int main(){
    int n;
    cin>>n;
    while(n--){
      string str; cin>>str; //aaaaa
      int maxx = 1, curr = 1;
      for(int i = 0; i < str.length()-1; i++){
        if(str[i] == str[i+1]) curr++;
        else
          curr = 1;
        maxx = maxi(maxx,curr);
      }
      cout<<maxx<<endl;
    }
    return 0;
}
