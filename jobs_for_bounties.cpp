#include <bits/stdc++.h>
#define endl '\n'
#define ll long long 
#define fio ios_base::sync_with_stdio(false); cin.tie(0);
#define MOD 1000000007
using namespace std;

int solve(string& str) {
	fio
	stack<int> index_stack;
	int n = str.size();
	int dp[n] = {0};
	for(int i = 0; i < n; i++) {
		if(str[i] == '(') index_stack.push(i);
		else {
			if(index_stack.size() == 0) continue;
			else {
				int ind = index_stack.top();
				index_stack.pop();
				dp[i] = (i - ind + 1);
				if(ind - 1 >= 0) dp[i] += dp[ind - 1];
			}
		}
	}
	int maxx = INT_MIN;
	for (int i = 0; i < n; i++) {
		maxx = max(maxx, dp[i]);
	}
	return maxx;
}

int main(int argc, char const *argv[])
{
	fio
	string str; cin >> str;
	cout << solve(str) << endl;
	return 0; 
}
