#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
	int n, m;
	while (cin >> n)
		for (int t = 1; t <= n; ++t) {
			cin >> m;
			cout << "Case " << t << ":\n";
			cout << -45 * m / 20 << ' ' << 30 * m / 20 << '\n';
			cout << 55 * m / 20 << ' ' << 30 * m / 20 << '\n';
			cout << 55 * m / 20 << ' ' << -30 * m / 20 << '\n';
			cout << -45 * m / 20 << ' ' << -30 * m / 20 << '\n';
		}
}

int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	solve();
	return 0;
}