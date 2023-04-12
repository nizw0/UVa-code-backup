#include <stdio.h>
#include <iostream>
#include <vector>
#include <string.h>
#include <sstream>
#include <algorithm>
using namespace std;
int GCD(int, int);
int main(void) {
	vector<int>vec;
	int n, arr[100] = { 0 };
	string str;
	stringstream ss;
	cin >> n;
	cin.ignore();
	while (n--) {
		getline(cin, str);
		ss << str;
		for (int i = 0; !ss.fail(); i++)
			ss >> arr[i];
		for (int i = 0; arr[i] != 0; i++)
			for (int j = i + 1; arr[j] != 0; j++)
				vec.push_back(GCD(arr[i], arr[j]));
		sort(vec.begin(), vec.end());
		cout << vec.back() << "\n";
		ss.str("");
		ss.clear();
		vec.clear();
		memset(arr, 0, sizeof(arr));
	}
	return 0;
}
int GCD(int a, int b) {
	if (a % b == 0)
		return b;
	else
		return GCD(b, a % b);
}