// Merge 2 sorted Lists
//
// Input: list1 = [1,2,4], list2 = [1,2,4]
//
// Output: [1,1,2,3,4,4]
//
//
//
// in sorted order,  without using any inbuilt sort function
#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define fio ios_base::sync_with_stdio(false); cin.tie(0);
#define MOD 1000000007
#define pb push_back
#define ip(n) for (int i = 0; i < n; i++) cin >> arr[i];
using namespace std;

int main()
{
  vector<int> v1 = {1,2,4}, v2 = {1,2,4};
  int p1 = 0, p2 = 0;
  vector<int> ans;
  int n1 = v1.size(), n2 = v2.size();
  while(p1 < n1 and p2 < n2) {
    if(v1[p1] < v2[p2]) {
      ans.pb(v1[p1++]);
    } else {
      ans.pb(v2[p2++]);
    }
  }

  while(p1 < n1) ans.pb(v1[p1++]);
  while(p2 < n2) ans.pb(v2[p2++]);

  for(int item: ans) cout << item;
	return 0;
}
