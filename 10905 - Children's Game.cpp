#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool cmp(string&, string&);
int main(void) {
	ios::sync_with_stdio(0), cin.tie(0);
	int n;
	string str;
	vector<string>vec;
	while (cin >> n && n) {
		for (int i = 0; i < n; i++) {
			cin >> str;
			vec.push_back(str);
		}
		sort(vec.begin(), vec.end(), cmp);
		for (int i = 0; i < n; i++)
			cout << vec.at(i);
		cout << '\n';
		vec.clear();
	}
	return 0;
}
bool cmp(string& a, string& b) {
	return (a + b) > (b + a);
}