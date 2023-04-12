#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
	string str;
	bool flag = false;
	while (cin >> str) {
		if (flag) cout << '\n';
		for (auto& x : str) x -= 7;
		cout << str;
		flag = true;
	}
}

int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	solve();
	return 0;
}