#include <bits/stdc++.h>
using namespace std;
long long solve(int* arr, int n, int p) {
	long long back[n] = {0}, forward[n] = {0};
	back[0] = arr[0];
	back[1] = arr[0] + arr[1];
	
	for(int i = 2; i < n; i++) 
		back[i] = max(back[i - 1], back[i - 2]) + arr[i];
	
	for(int i = p; i < n; i++) {
		if(i == 1) 
			forward[i] = arr[i];
		else 
			forward[i] = arr[i] + max(forward[i - 1], forward[i - 2]);
	}

	long long res = INT_MIN;
	for(int i = p; i < n; i++) {
		res = max(res, forward[i] + back[i] - arr[i]);
	}
	return res;
}

int main(int argc, char const *argv[])
{
	int n, p; cin >> n >> p;
	int arr[n];
	for(int i = 0; i < n; i++) cin >> arr[i];
	cout << solve(arr, n, p);
	return 0;
}