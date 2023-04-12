#include <iostream>
#include <string>
#include <sstream>
#include <cstdlib>
#include <vector>
#include <cmath>
using namespace std;
int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	long long int x, n, sum, tmp;
	string str;
	stringstream ss;
	vector<long long int>vec, ans;
	while (cin >> x) {
		cin.ignore();
		getline(cin, str);
		ss << str;
		while (ss >> tmp)
			vec.push_back(tmp);
		n = vec.size() - 1;
		ans.push_back(n * vec.at(0)); n--;
		for (size_t i = 1; i < vec.size(); i++, n--) {
			if (n != 0)
				ans.push_back(ans.at(i - 1) * x + n * vec.at(i));
		}
		sum = ans.back();
		cout << sum << '\n';
		ss.str(""); ss.clear(); vec.clear(); ans.clear();
	}
	return 0;
}