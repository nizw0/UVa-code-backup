#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
	string str;
	while (cin >> str and str != "#") {
		if (next_permutation(str.begin(), str.end()))
			cout << str << '\n';
		else
			cout << "No Successor\n";
	}
}

int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	solve();
	return 0;
}