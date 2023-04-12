#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0); cin.tie(0);
	int n, N, count = 1;
	long long int tmp;
	char blank;
	bool flag;
	vector<long long int>vec;
	cin >> n;
	while (n--) {
		cin >> blank >> blank >> N;
		for (int i = 0; i < N * N; i++) {
			cin >> tmp;
			vec.push_back(tmp);
		}
		flag = true;
		for (size_t i = 0; i < (vec.size() + 1) / 2; i++)
			if (vec.at(i) != vec.at(vec.size() - i - 1) || vec.at(i) < 0 || vec.at(vec.size() - i - 1) < 0)
				flag = false;
		cout << "Test #" << count++ << ": ";
		if (flag)
			cout << "Symmetric.\n";
		else
			cout << "Non-symmetric.\n";
		vec.clear();
	}
	return 0;
}