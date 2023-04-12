#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	size_t index;
	string str, ans;
	string table = "`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
	while (getline(cin, str)) {
		for (size_t i = 0; i < str.size(); i++) {
			if (str.at(i) == ' ')
				ans.push_back(' ');
			else {
				str.at(i) = tolower(str.at(i));
				index = table.find(str.at(i));
				ans.push_back(table.at(index - 2));
			}
		}
		cout << ans << "\n";
		str.clear(), ans.clear();
	}
	return 0;
}