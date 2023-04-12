#include <iostream>
#include <vector>
#include <utility>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;
bool cmp(pair<int, char>&, pair<int, char>&);
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	vector<pair<int, char>>vec;
	vector<pair<int, char>>::iterator iter;
	string str;
	int n, a2z[26] = { 0 };
	cin >> n;
	cin.ignore();
	while (n--) {
		getline(cin, str);
		for (size_t i = 0; i < str.size(); i++) {
			if (isalpha(str.at(i))) {
				str.at(i) = toupper(str.at(i));
				a2z[str.at(i) - 'A']++;
			}
		}
		str.clear();
	}
	for (int i = 0; i < 26; i++)
		vec.push_back(make_pair(a2z[i], 'A' + i));
	sort(vec.begin(), vec.end(), cmp);
	for (iter = vec.begin(); iter != vec.end(); iter++) {
		if (iter->first == 0) break;
		cout << iter->second << ' ' << iter->first << '\n';
	}
	return 0;
}
bool cmp(pair<int, char>& a, pair<int, char>& b) {
	if (a.first != b.first)
		return a.first > b.first;
	else
		return a.second < b.second;
}