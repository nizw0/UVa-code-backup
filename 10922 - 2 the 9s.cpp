#include <stdio.h>
#include <iostream>
#include <sstream>
using namespace std;
int nine_degree(string str);
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int count;
	string num, ans;
	stringstream ss;
	while (cin >> num) {
		if (num == "0") break;
		ans = num;
		count = 1;
		while (nine_degree(num) != 9) {
			if (nine_degree(num) == -1) {
				count--;
				break;
			}
			else
				count++;
			ss << nine_degree(num);
			num.clear();
			ss >> num;
			ss.str(""), ss.clear();
		}
		if (count)
			cout << ans << " is a multiple of 9 and has 9-degree " << count << ".\n";
		else
			cout << ans << " is not a multiple of 9." << "\n";
		num.clear(), ss.str(""), ss.clear();
	}
	return 0;
}
int nine_degree(string str) {
	int count = 0;
	for (size_t i = 0; i < str.size(); i++) {
		count += str.at(i) - '0';
	}
	if (count % 9 == 0)
		return count;
	else
		return -1;
}