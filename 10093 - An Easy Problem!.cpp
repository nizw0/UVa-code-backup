#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
	string str;
	while (getline(cin, str)) {
		int sum = 0, tmp = 0, mx = 1, i;
		for (auto& x : str) {
			if (isdigit(x))
				tmp = x - '0';
			else if (isupper(x))
				tmp = x - 'A' + 10;
			else if (islower(x))
				tmp = x - 'a' + 36;
			mx = max(mx, tmp);
			sum += tmp;
		}
		for (i = mx; i < 62; i++) {
			if (!(sum % i)) {
				cout << i + 1 << '\n';
				break;
			}
		}
		if (i == 62)
			cout << "such number is impossible!\n";
	}
}

int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	solve();
	return 0;
}