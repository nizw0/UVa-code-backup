#include <iostream>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0); cin.tie(0);
	int n, sum;
	bool borrow;
	while (cin >> n) {
		sum = n;
		borrow = false;
		if (n % 3 == 2) {
			n++;
			borrow = true;
		}
		while (n / 3) {
			sum += n / 3;
			n = n / 3 + n % 3;
		}
		if (n == 2 && !borrow)
			sum++;
		cout << sum << '\n';
	}
	return 0;
}