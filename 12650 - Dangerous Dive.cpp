#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
	int n, r, id;
	while (cin >> n >> r) {
		bool flag = false;
		vector<bool> ar(n + 1, false);
		for (int i = 0; i < r; i++) {
			cin >> id;
			ar[id] = true;
		}
		for (int i = 1; i < ar.size(); i++) {
			if (!ar[i]) {
				cout << (flag ? " " : "") << i;
				flag = true;
			}
		}
		cout << (!flag ? "*" : "") << '\n';
	}
}

int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	solve();
	return 0;
}