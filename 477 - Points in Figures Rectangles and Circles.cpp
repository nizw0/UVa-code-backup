#include <bits/stdc++.h>
using namespace std;
#define ll long long

class rectangle {
public:
	int id;
	double x1, y1, x2, y2;

	bool isIn(double x, double y) {
		if (x <= x1 or x >= x2 or y <= y2 or y >= y1)
			return false;
		return true;
	}
}r;

class circle {
public:
	int id;
	double x, y, radius;

	bool isIn(double x, double y) {
		return (x - this->x) * (x - this->x) + (y - this->y) * (y - this->y) <= (radius * radius);
	}
}c;

void solve() {
	char chr;
	int cas = 1, id = 1;
	double x1, y1, x2, y2, radius, x, y;
	vector<rectangle> rec;
	vector<circle> cir;
	while (cin >> chr and chr != '*') {
		if (chr == 'r') {
			cin >> x1 >> y1 >> x2 >> y2;
			r.id = id++; r.x1 = x1; r.y1 = y1; r.x2 = x2; r.y2 = y2;
			rec.push_back(r);
		}
		else {
			cin >> x1 >> y1 >> radius;
			c.id = id++; c.x = x1; c.y = y1; c.radius = radius;
			cir.push_back(c);
		}
	}
	while (cin >> x >> y and x != 9999.9 and y != 9999.9) {
		string prefix = "Point " + to_string(cas++);
		vector<int> figure;
		for (int i = 0; i < rec.size(); i++)
			if (rec[i].isIn(x, y))
				figure.push_back(rec[i].id);
		for (int i = 0; i < cir.size(); i++) {
			if (cir[i].isIn(x, y))
				figure.push_back(cir[i].id);
		}
		sort(figure.begin(), figure.end());
		if (!figure.empty())
			for (auto& i : figure)
				cout << prefix << " is contained in figure " << i << '\n';
		else
			cout << prefix << " is not contained in any figure\n";
	}
}

int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	solve();
	return 0;
}