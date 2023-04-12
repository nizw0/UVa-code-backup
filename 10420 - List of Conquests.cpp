#include <iostream>
#include <vector>
#include <utility>
#include <string>
#include <set>
#include <algorithm>
using namespace std;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, count = 0;
	string str, tmp;
	string::iterator striter;
	vector<pair<string, int>>country;
	vector<pair<string, int>>::iterator veciter;
	set<string>name;
	cin >> n;
	cin.ignore();
	while (n--) {
		getline(cin, str);
		for (striter = str.begin(); *striter == ' ';)
			striter = str.erase(striter);
		for (striter = str.begin(); *striter != ' ';) {
			tmp.push_back(*striter);
			striter = str.erase(striter);
		}
		while (*striter == ' ')
			striter = str.erase(striter);
		for (veciter = country.begin(); veciter != country.end(); veciter++)
			if (veciter->first == tmp)
				break;
		if (veciter == country.end()) {
			country.push_back(make_pair(tmp, 0));
			veciter = country.end() - 1;
		}
		tmp.clear();
		while (striter != str.end()) {
			tmp.push_back(*striter);
			striter++;
		}
		if (!name.count(tmp))
			veciter->second++;
		name.insert(tmp);
		str.clear(), tmp.clear();
	}
	sort(country.begin(), country.end());
	for (veciter = country.begin(); veciter != country.end(); veciter++) {
		cout << veciter->first << ' ' << veciter->second;
		if (veciter != country.end() - 1)
			cout << "\n";
	}
	cout << "\n";
	return 0;
}