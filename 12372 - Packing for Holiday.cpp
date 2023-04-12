#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
	int t, l, w, h, cas = 1;
	cin >> t;
	while (t-- and cin >> l >> w >> h)
		cout << "Case " << cas++ << ": " << (l <= 20 and w <= 20 and h <= 20 ? "good\n" : "bad\n");
}

int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	solve();
	return 0;
}