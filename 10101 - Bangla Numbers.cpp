#include <iostream>
using namespace std;
void toBangla(long long int);
int main(void) {
	ios::sync_with_stdio(0), cin.tie(0);
	int count = 1;
	long long int num;
	while (cin >> num) {
		if (count < 1000 && count >= 100)
			cout << " ";
		else if (count < 100 && count >= 10)
			cout << "  ";
		else if (count < 10)
			cout << "   ";
		cout << count++ << ". ";
		toBangla(num);
		cout << '\n';
	}
	return 0;
}
void toBangla(long long int n) {
	if (n == 0) {
		cout << '0';
		return;
	}
	if (n >= 10000000) {
		toBangla(n / 10000000);
		n %= 10000000;
		if (n >= 10000000)
			cout << n / 10000000;
		cout << " kuti";
		if (n) cout << ' ';
	}
	if (n >= 100000) {
		cout << n / 100000 << " lakh";
		n %= 100000;
		if (n) cout << ' ';
	}
	if (n >= 1000) {
		cout << n / 1000 << " hajar";
		n %= 1000;
		if (n) cout << ' ';
	}
	if (n >= 100) {
		cout << n / 100 << " shata";
		n %= 100;
		if (n) cout << ' ';
	}
	if (n) {
		cout << n % 100;
		n /= 100;
	}
}