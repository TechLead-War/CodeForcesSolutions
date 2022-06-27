#include <bits/stdc++.h>
#define endl '\n'
#define ll long long 
#define fio ios_base::sync_with_stdio(false); cin.tie(0);
#define MOD 1000000007
using namespace std;

int solve() {
    int n; cin >> n;
    int start[n], end[n];
    for (int i = 0; i < n; i++) cin >> start[i];
    for (int i = 0; i < n; i++) cin >> end[i];
    vector<pair<int, int>> bridge;
    for (int i = 0; i < n; i++) {
        bridge.push_back({start[i], end[i]});
    }
    sort(bridge.begin(), bridge.end());
    int lis[n], ans = INT_MIN;
    for(int i = 0; i < n; i++) {
        lis[i] = 1;
        for(int j = 0; j < i; j++) {
            if(bridge[j].second <= bridge[i].second) 
                lis[i] = max(lis[i], lis[j] + 1);
        }
        if(ans < lis[i]) ans = lis[i];
    }
    return ans;
}

int main(int argc, char const *argv[])
{
    int t; cin >> t;
    while(t--) {
        cout << solve() << endl;
    } 
    return 0;
}