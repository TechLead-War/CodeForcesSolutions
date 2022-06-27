#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define mod 1000000007
unordered_map<int, ll> mp;

ll tiling(int n,int m){
    if(n==0) return 1ll;
	if(mp.find(n) != mp.end()) return mp[n];
	ll res = tiling(n - 1, m)%mod;
	if(n - m >= 0) res += tiling(n - m, m)%mod;
	return mp[n] = res;
}


int main() {
    int t;
    cin>>t;
    int n,m;
    while(t--){
		mp.clear();
        cin>>n>>m;
        cout<<tiling(n,m)%mod<<endl;
    }
}
 



//bottom up
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define mod 1000000007

int main() {
    int t;
    cin>>t;
    while(t--){
		int n,m; cin >> n >> m;
		ll dp[n + 1] = {1ll};
    	for(int i = 1; i <= n; i++) {
    		dp[i] = dp[i - 1];
    		dp[i] += (i - m >= 0)? dp[i - m]: 0;
    		dp[i] %=mod;
    	}
    	cout << dp[n] << endl;
    }
}