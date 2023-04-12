#include <stdio.h>
#include <iostream>
#include <string>
#include <string.h>
#include <sstream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
using namespace std;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, t, tmp, ans, count[100] = { 0 };
	string text;
	cin >> n; cin.ignore();
	while (n--) {
		ans = 0;
		cin >> t; cin.ignore();
		for (int i = 0; i < t; i++) {
			cin >> text;
			if (text == "LEFT")
				count[i] = -1;
			else if (text == "RIGHT")
				count[i] = 1;
			else {
				cin >> text >> tmp;
				count[i] = count[tmp - 1];
			}
		}
		for (int i = 0; count[i]; i++) {
			ans += count[i];
			count[i] = 0;
		}
		cout << ans << endl;
		text.clear();
	}
	return 0;
}