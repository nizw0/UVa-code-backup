#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
	int num, low, high;
	while (cin >> num and num) {
		cin.ignore();
		string str;
		low = 1, high = 10;
		while (getline(cin, str) and str != "right on") {
			if (str == "too low")
				low = max(low, num + 1);
			else
				high = min(high, num - 1);
			cin >> num;
			cin.ignore();
		}
		if (num >= low and num <= high)
			cout << "Stan may be honest\n";
		else
			cout << "Stan is dishonest\n";
	}
}

int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	solve();
	return 0;
}