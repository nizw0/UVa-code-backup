#include <iostream>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0), cin.tie(0);
	long long S, D, count;
	while (cin >> S >> D) {
		count = 0;
		while (true) {
			count += S;
			if (count >= D) break;
			else S++;
		}
		cout << S << '\n';
	}
	return 0;
}