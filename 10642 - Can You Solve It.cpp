#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
	int t, x1, y1, x2, y2;
	cin >> t;
	for (int x = 1; x <= t; x++) {
		cin >> x1 >> y1 >> x2 >> y2;
		int count = (y1 + x1 + 1 + y2 + x2) * (y2 + x2 - y1 - x1) / 2 + (x2 - x1);
		cout << "Case " << x << ": " << count;
		if (x != t) cout << '\n';
	}
}

int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	solve();
	return 0;
}