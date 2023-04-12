#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <algorithm>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0), cin.tie(0);
	int n;
	double count;
	string str, blank;
	vector<string>vec;
	cin >> n;
	cin.ignore();
	getline(cin, blank);
	while (n--) {
		while (getline(cin, str)) {
			if (str == "") break;
			vec.push_back(str);
		}
		if (vec.size() == 1) {
			cout << vec.back() << " 100.0000\n";
			continue;
		}
		sort(vec.begin(), vec.end());
		count = 1; str = vec.at(0);
		for (size_t i = 1; i < vec.size(); i++) {
			if (vec.at(i) != str) {
				cout << str << ' ' << setprecision(4) << fixed << count / (double)vec.size() * 100 + 1e-8 << '\n';
				str = vec.at(i);
				count = 1;
			}
			else
				count++;
			if (i + 1 == vec.size()) {
				cout << str << ' ' << setprecision(4) << fixed << count / (double)vec.size() * 100 + 1e-8 << '\n';
			}
		}
		if (n != 0) cout << '\n';
		vec.clear();
	}
	return 0;
}