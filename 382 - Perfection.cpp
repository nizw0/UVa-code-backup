#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
	int n, s;
	cout << "PERFECTION OUTPUT\n";
	while (cin >> n and n) {
		s = to_string(n).size();
		int sum = 1;
		for (int i = 2; i <= n / 2; i++)
			if (!(n % i)) sum += i;
		for (int i = 0; i < 5 - s; i++) cout << ' ';
		cout << n << "  " << (sum == n and n != 1 ? "PERFECT" : (sum > n ? "ABUNDANT" : "DEFICIENT")) << '\n';
	}
	cout << "END OF OUTPUT\n";
}

int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	solve();
	return 0;
}