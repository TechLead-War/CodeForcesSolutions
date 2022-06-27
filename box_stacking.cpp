#include <bits/stdc++.h>
#define endl '\n'
#define ll unsigned long long
#define fio ios_base::sync_with_stdio(false); cin.tie(0);
#define MOD 1000000007
#define pb push_back
using namespace std;

struct box {
	int l, w, h;
};
ll dp[105][3];
ll solve(vector<box>& boxes, int prev_box, int orient) {
	if(dp[prev_box][orient] != 0) return dp[prev_box][orient];
	ll res = 0;
	ll prev_l, prev_h, prev_w;
	if(orient == 0) {
		prev_l = boxes[prev_box].l;
		prev_w = boxes[prev_box].w;
		prev_h = boxes[prev_box].h;
	} else if(orient == 1) {
		prev_l = boxes[prev_box].w;
		prev_w = boxes[prev_box].h;
		prev_h = boxes[prev_box].l;
	} else {
		prev_l = boxes[prev_box].h;
		prev_w = boxes[prev_box].l;
		prev_h = boxes[prev_box].w;
	}
	// l w h
	for(int i = 1; i < boxes.size(); i++) {
		if((boxes[i].l < prev_l and boxes[i].w < prev_w) or (boxes[i].w < prev_l and boxes[i].l < prev_w))
			res = max(res, boxes[i].h + solve(boxes, i, 0));
		if((boxes[i].w < prev_l and boxes[i].h < prev_w) or (boxes[i].h < prev_l and boxes[i].w < prev_w))
			res = max(res, boxes[i].l + solve(boxes, i, 1));
		if((boxes[i].h < prev_l and boxes[i].l < prev_w) or (boxes[i].l < prev_l and boxes[i].h < prev_w))
			res = max(res, boxes[i].w + solve(boxes, i, 2));
	}
	return dp[prev_box][orient] = res;
}

int main() {
	fio
	int t; cin >> t;
	while(t--) {
		int n; cin >> n;
		vector<box> boxes;
		memset(dp, 0, sizeof dp);
		boxes.push_back({INT_MAX, INT_MAX, INT_MAX});
		for(int i = 0; i < n; i++) {
			int x, y, z; cin >> x >> y >> z;
			boxes.push_back({x, y, z});
		}
		cout << solve(boxes, 0, 0) << endl;  // boxes, prev_box, orientation
	}
	return 0;
}
