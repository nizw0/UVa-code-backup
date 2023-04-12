#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool isIn(double x1, double y1, double x2, double y2, double x, double y){
	if (x <= x1 or x >= x2 or y <= y2 or y >= y1)
		return false;
	return true;
}

class square {
public:
	double x1, y1, x2, y2;
}s;

void solve() {
	char c;
	int cas = 1;
	double x1, y1, x2, y2, x, y;
	vector<square> ar(1);
	while (cin >> c and c != '*' and cin >> x1 >> y1 >> x2 >> y2) {
		s.x1 = x1; s.y1 = y1; s.x2 = x2; s.y2 = y2;
		ar.push_back(s);
	}
	while (cin >> x >> y and x != 9999.9 and y != 9999.9) {
		string prefix = "Point " + to_string(cas++);
		vector<int> figure;
		for (int i = 1; i < ar.size(); i++)
			if (isIn(ar[i].x1, ar[i].y1, ar[i].x2, ar[i].y2, x, y))
				figure.push_back(i);
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