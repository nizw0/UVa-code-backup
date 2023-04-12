#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0), cin.tie(0);
	int n;
	string task, dise, tmp;
	while (cin >> n && n) {
		dise = "123456";
		while (n-- && cin >> task) {
			if (task == "north") {
				tmp.push_back(dise.at(4)); tmp.push_back(dise.at(0)); tmp.push_back(dise.at(2)); 
				tmp.push_back(dise.at(3)); tmp.push_back(dise.at(5)); tmp.push_back(dise.at(1));
				dise = tmp;
				tmp.clear();
			}
			if (task == "east") {
				tmp.push_back(dise.at(2)); tmp.push_back(dise.at(1)); tmp.push_back(dise.at(5));
				tmp.push_back(dise.at(0)); tmp.push_back(dise.at(4)); tmp.push_back(dise.at(3));
				dise = tmp;
				tmp.clear();
			}
			if (task == "south") {
				tmp.push_back(dise.at(1)); tmp.push_back(dise.at(5)); tmp.push_back(dise.at(2));
				tmp.push_back(dise.at(3)); tmp.push_back(dise.at(0)); tmp.push_back(dise.at(4));
				dise = tmp;
				tmp.clear();
			}
			if (task == "west") {
				tmp.push_back(dise.at(3)); tmp.push_back(dise.at(1)); tmp.push_back(dise.at(0));
				tmp.push_back(dise.at(5)); tmp.push_back(dise.at(4)); tmp.push_back(dise.at(2));
				dise = tmp;
				tmp.clear();
			}
		}
		cout << dise.front() << '\n';
		dise.clear();
	}
	return 0;
}