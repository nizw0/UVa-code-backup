#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
	int start, a, b, c;
	while (cin >> start >> a >> b >> c and (start or a or b or c))
		cout << ((start - a) + (b - a) + (b - c) + (start < a) * 40 + (a > b) * 40 + (c > b) * 40) * 9 + 720 + 360 << '\n';
}

int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	solve();
	return 0;
}