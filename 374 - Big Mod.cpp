#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll bigmod(ll b, ll p, ll m) {
	if (!p)
		return 1;
	else if (p == 1)
		return b % m;
	else {
		long long result = bigmod(b, p / 2, m);
		if (p & 1)
			return result * result * b % m;
		else
			return result * result % m;
	}
}

void solve() {
	ll b, p, m;
	while (cin >> b >> p >> m)
		cout << bigmod(b, p, m) << '\n';
}

int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	solve();
	return 0;
}