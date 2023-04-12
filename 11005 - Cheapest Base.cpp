#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
	int t, n, tmp;
	vector<int> ar;
	cin >> t;
	for (int x = 0; x < t; x++) {
		if (x) cout << '\n';
		for (int i = 0; i < 36; i++) {
			cin >> tmp;
			ar.push_back(tmp);
		}
		cin >> n;
		cout << "Case " << x + 1 << ":\n";
		while (n-- and cin >> tmp) {
			cout << "Cheapest base(s) for number " << tmp << ":";
			int sum, mn = INT_MAX, num;
			vector<int> ans(37, 0);
			for (int i = 2; i <= 36; i++) {
				num = tmp;
				sum = 0;
				while (num) {
					sum += ar[num % i];
					num /= i;
				}
				ans[i] = sum;
				mn = min(mn, sum);
			}
			for (int i = 2; i <= 36; i++) {
				if (ans[i] == mn)
					cout << ' ' << i;
			}
			cout << '\n';
		}
		ar.clear();
	}
}

int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	solve();
	return 0;
}