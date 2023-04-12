#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	size_t Bsize = 0;
	string str, ans;
	vector<string>vec;
	while (getline(cin, str)) {
		vec.push_back(str);
		if (str.size() > Bsize)
			Bsize = str.size();
	}
	for (size_t i = 0; i < vec.size(); i++)
		vec.at(i).resize(Bsize);
	for (size_t i = 0; i < Bsize; i++) {
		for (int j = vec.size() - 1; j >= 0; j--) {
			if (vec.at(j).at(i) == '\0')
				ans.push_back(' ');
			else
				ans.push_back(vec.at(j).at(i));
		}
		ans.push_back('\n');
	}
	cout << ans;
	return 0;
}