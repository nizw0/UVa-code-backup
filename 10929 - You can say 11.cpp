#include <stdio.h>
#include <iostream>
using namespace std;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int L, R;
	string n;
	while (cin >> n) {
		if (n == "0") return 0;
		L = R = 0;
		for (size_t i = 0; i < n.length(); i++) {
			if (!(i % 2))
				L += n[i] - '0';
			else
				R += n[i] - '0';
		}
		if ((L - R) % 11 == 0)
			cout << n << " is a multiple of 11.\n";
		else
			cout << n << " is not a multiple of 11.\n";
	}
	return 0;
}