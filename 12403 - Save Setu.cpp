#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
	int t, sum = 0, money;
	string str;
	cin >> t;
	while (t-- and cin >> str) {
		if (str == "donate") {
			cin >> money;
			sum += money;
		}
		else
			cout << sum << '\n';
	}
}

int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	solve();
	return 0;
}