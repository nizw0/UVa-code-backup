#include <iostream>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0); cin.tie(0);
	int N, n, b1, b2;
	string tobi, tohex, tmp;
	while (cin >> N) {
		while (N--) {
			b1 = 0, b2 = 0;
			cin >> n;
			for (int i = n; i; i /= 2)
				tobi.push_back((i % 2) + '0');
			for (size_t i = 0; i < tobi.size(); i++)
				if (tobi.at(i) == '1')
					b1++;
			while (n) {
				tmp.push_back((n % 10) + '0');
				n /= 10;
			}
			for (size_t i = 0; i < tmp.size(); i++) {
				int num = tmp.at(i) - '0';
				for (int j = 0; j < 4; j++) {
					if (num) {
						tohex.push_back((num % 2) + '0');
						num /= 2;
					}
					else
						tohex.push_back('0');
				}
			}
			for (size_t i = 0; i < tohex.size(); i++)
				if (tohex.at(i) == '1')
					b2++;
			cout << b1 << ' ' << b2 << '\n';
			tobi.clear(), tohex.clear(), tmp.clear();
		}
	}
	return 0;
}