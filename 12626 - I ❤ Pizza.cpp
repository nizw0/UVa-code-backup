#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
	int t;
	string str;
	cin >> t;
	while (t-- and cin >> str) {
		map<char, int> mp;
		for (auto& x : str) mp[x]++;
		cout << min(mp['A'] / 3, min(mp['R'] / 2, min(mp['M'], min(mp['G'], min(mp['I'], mp['T']))))) << '\n';
	}
}

int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	solve();
	return 0;
}