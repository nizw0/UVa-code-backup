#include <iostream>
#include <algorithm>
using namespace std;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int count, tmp;
	string str1, str2;
	string::iterator it1, it2;
	while (cin >> str1 >> str2) {
		if (str1 == "0" && str2 == "0") break;
		count = 0;
		if (str1.size() < str2.size())
			swap(str1, str2);
		reverse(str1.begin(), str1.end()), reverse(str2.begin(), str2.end());
		it1 = str1.begin(), it2 = str2.begin();
		while (it2 != str2.end()) {
			tmp = (*it1 + *it2) - '0' * 2;
			if (tmp > 9) {
				count++;
				if ((it1 + 1) != str1.end())
					*(it1 + 1) += tmp / 10;
			}
			it1++, it2++;
		}
		while (it1 != str1.end()) {
			tmp = *it1 - '0';
			if (tmp > 9) {
				count++;
				if (it1 + 1 != str1.end())
					*(it1 + 1) += tmp / 10;
			}
			it1++;
		}
		if (count == 0)
			cout << "No carry operation.\n";
		else if (count == 1)
			cout << count << " carry operation.\n";
		else
			cout << count << " carry operations.\n";
		str1.clear(), str2.clear();
	}
	return 0;
}