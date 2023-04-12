#include <iostream>
using namespace std;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	long long int n, f, area, animal, eco, sum;
	cin >> n;
	while (n--) {
		cin >> f;
		sum = 0;
		for (int i = 0; i < f; i++) {
			cin >> area >> animal >> eco;
			sum += area * eco;
		}
		cout << sum << "\n";
	}
	return 0;
}