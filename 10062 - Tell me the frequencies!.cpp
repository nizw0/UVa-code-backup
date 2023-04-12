#include <iostream>
#include <map>
#include <vector>
#include <utility>
#include <string>
#include <algorithm>
using namespace std;

bool cmp(pair<int, int>, pair<int, int>);

int main(void) {
	ios::sync_with_stdio(0); cin.tie(0);
	bool flag = false;
	string str;
	map<int, int>mp;
	map<int, int>::iterator iter;
	vector<pair<int, int>>vec;
	while (getline(cin, str)) {
		if (flag)
			cout << '\n';
		for (size_t i = 0; i < str.size(); i++) {
			if (!mp.count(str.at(i)))
				mp.insert(pair<char, int>(str.at(i), 1));
			else {
				iter = mp.find(str.at(i));
				iter->second++;
			}
		}
		for (iter = mp.begin(); iter != mp.end(); iter++)
			vec.push_back(pair<int, int>(iter->first, iter->second));
		sort(vec.begin(), vec.end(), cmp);
		for (size_t i = 0; i < vec.size(); i++)
			cout << vec.at(i).first << ' ' << vec.at(i).second << '\n';
		mp.clear(); vec.clear();
		flag = true;
	}
	return 0;
}
bool cmp(pair<int, int>a, pair<int, int>b) {
	if (a.second == b.second)
		return a.first > b.first;
	else 
		return a.second < b.second;
}