#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
	int t;
	string str;
	int a, b;
	cin >> t;
	while (t-- and cin >> str) {
		a = (str[0] - 'A') * 26 * 26 + (str[1] - 'A') * 26 + (str[2] - 'A');
		b = (str[4] - '0') * 1000 + (str[5] - '0') * 100 + (str[6] - '0') * 10 + (str[7] - '0');
		cout << (abs(a - b) <= 100 ? "nice\n" : "not nice\n");
	}
}

int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	solve();
	return 0;
}