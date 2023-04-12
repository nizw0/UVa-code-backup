#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
	int t, x, y;
	cin >> t;
	while (t-- and cin >> x >> y) {
		int s = 1;
		if (x != y)
			s = (int)sqrt(y - x - 1.0) + 1;
		if (y - x <= s * s - s)
			cout << 2 * s - 2 << '\n';
		else 
			cout << 2 * s - 1 << '\n';

	}
}

int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	solve();
	return 0;
}