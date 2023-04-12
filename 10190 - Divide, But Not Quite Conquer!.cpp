#include <iostream>
#include <vector>
using namespace std;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, m, tmp;
	vector<int>vec;
	while (cin >> n >> m) {
		if (n <= 1 || m <= 1) {
			cout << "Boring!\n";
			continue;
		}
		vec.push_back(n);
		while (n != 1) {
			if (n % m)
				break;
			tmp = n / m;
			vec.push_back(tmp);
			n /= m;
		}
		if (n == 1) {
			cout << vec.at(0);
			for (size_t i = 1; i < vec.size(); i++)
				cout << " " << vec.at(i);
			cout << "\n";
		}
		else
			cout << "Boring!\n";
		vec.clear();
	}
	return 0;
}