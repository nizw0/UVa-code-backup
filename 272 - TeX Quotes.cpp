#include <iostream>
#include <string>
using namespace std;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	long long int count = 0;
	string str, ans;
	while (getline(cin, str)) {
		for (unsigned long long int i = 0; i < str.size(); i++) {
			if (str.at(i) == '\"') {
				count++;
				if (count % 2)
					ans.insert(ans.end(), 2, '`');
				else
					ans.insert(ans.end(), 2, '\'');
			}
			else
				ans.push_back(str.at(i));
		}
		ans.push_back('\n');
	}
	cout << ans;
	return 0;
}
//UVA 需要多一個換行...