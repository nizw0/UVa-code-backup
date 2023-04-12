#include <bits/stdc++.h>
using namespace std;
#define ll long long

int rx, ry;

void turn(char& direction, char order) {
	if (order == 'L') {
		switch (direction) {
		case 'N':
			direction = 'W'; break;
		case 'W':
			direction = 'S'; break;
		case 'S':
			direction = 'E'; break;
		case 'E':
			direction = 'N'; break;
		}
	}
	else {
		switch (direction) {
		case 'N':
			direction = 'E'; break;
		case 'W':
			direction = 'N'; break;
		case 'S':
			direction = 'W'; break;
		case 'E':
			direction = 'S'; break;
		}
	}
}

void move_(int& x, int& y, char& direction, char order) {
	if (order == 'F') {
		switch (direction) {
		case 'N':
			y++; break;
		case 'W':
			x--; break;
		case 'S':
			y--; break;
		case 'E':
			x++; break;
		}
	}
	else
		turn(direction, order);
}

bool fall(int x, int y, char direction, char order) {
	move_(x, y, direction, order);
	return x > rx or x < 0 or y > ry or y < 0;
}

void solve() {
	int x, y;
	char direction;
	string str;
	cin >> rx >> ry;
	vector<vector<bool>> fallout(rx + 1, vector<bool>(ry + 1, false));
	cin.ignore();
	while (cin >> x >> y >> direction) {
		cin.ignore();
		getline(cin, str);
		bool flag = true;
		for (auto& i : str) {
			if (fall(x, y, direction, i)) {
				if (fallout[x][y]) continue;
				fallout[x][y] = true;
				flag = false;
				break;
			}
			move_(x, y, direction, i);
		}
		cout << x << ' ' << y << ' ' << direction << (flag ? "\n" : " LOST\n");
	}
}

int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	solve();
	return 0;
}