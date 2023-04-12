#include <iostream>
#include <cstdlib>
#include <cctype>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0), cin.tie(0);
	int n, t = 1;
	char chr;
	string str, ans, tmp;
	cin >> n;
	while (n--) {
		cin >> str;
		chr = str.at(0);
		for (size_t i = 1; i < str.size(); i++) {
			if (isalpha(str.at(i))) {
				if (!tmp.empty()) {
					for (int i = atoi(tmp.c_str()); i != 0; i--)
						ans.push_back(chr);
					tmp.clear();
				}
				chr = str.at(i);
			}
			else
				tmp.push_back(str.at(i));
		}
		for (int i = atoi(tmp.c_str()); i != 0; i--)
			ans.push_back(chr);
		cout << "Case " << t++ << ": " << ans << '\n';
		str.clear(); ans.clear(); tmp.clear();
	}
	return 0;
}