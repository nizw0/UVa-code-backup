#include <iostream>
#include <cstdlib>
using namespace std;

long long gcd(long long a, long long b) {
	if (a % b == 0)
		return b;
	else
		return gcd(b, a % b);
}

int main(void) {
	ios::sync_with_stdio(0), cin.tie(0);
	long long n, cas = 1, _s1, _s2;
	string s1, s2;
	cin >> n;
	while (n-- && cin >> s1 >> s2) {
		_s1 = strtoll(s1.c_str(), NULL, 2);
		_s2 = strtoll(s2.c_str(), NULL, 2);
		if (gcd(_s1, _s2) != 1)
			cout << "Pair #" << cas++ << ": " << "All you need is love!\n";
		else
			cout << "Pair #" << cas++ << ": " << "Love is not all you need!\n";
	}
	return 0;
}