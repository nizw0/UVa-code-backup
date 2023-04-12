#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	string str, tmp, ans;
	while (getline(cin, str)) {
		ans = "";
		for (size_t i = 0; i < str.size(); i++) {
			if (str.at(i) == ' ')
				continue;
			for (size_t j = i; j < str.size() && str[j] != ' '; i++, j++)
				tmp.push_back(str[j]);
			reverse(tmp.begin(), tmp.end());
			ans += tmp;
			ans.push_back(' ');
			tmp.clear();
		}
		ans.pop_back();
		cout << ans << "\n";
		ans.clear();
		str.clear();
	}
	return 0;
}