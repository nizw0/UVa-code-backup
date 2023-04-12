#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
	string str;
	map<char, int> mp = {
		{'W', 64}, {'H', 32}, {'Q', 16}, {'E', 8}, {'S', 4}, {'T', 2}, {'X', 1}
	};
	int beat, count;
	while (cin >> str and str != "*") {
		beat = 0, count = 0;
		for (auto& x : str) {
			if (x == '/') {
				if (beat == 64) count++;
				beat = 0;
			}
			else
				beat += mp[x];
		}
		cout << count << '\n';
	}
}

int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	solve();
	return 0;
}