#include <bits/stdc++.h>
using namespace std;
#define ll long long

void f(vector<string>& ar, vector<vector<int>>& ans, int x, int y) {
	if (ar[x - 1][y - 1] == '.') ans[x - 1][y - 1]++;
	if (ar[x - 1][y] == '.') ans[x - 1][y]++;
	if (ar[x - 1][y + 1] == '.') ans[x - 1][y + 1]++;
	if (ar[x][y - 1] == '.') ans[x][y - 1]++;
	if (ar[x][y + 1] == '.') ans[x][y + 1]++;
	if (ar[x + 1][y - 1] == '.') ans[x + 1][y - 1]++;
	if (ar[x + 1][y] == '.') ans[x + 1][y]++;
	if (ar[x + 1][y + 1] == '.') ans[x + 1][y + 1]++;
}

void solve() {
	int x, y, cas = 1;
	bool flag = false;
	char c;
	vector<string> ar;
	while (cin >> x >> y and x and y) {
		if (flag) cout << '\n';
		ar.resize(x + 2, string(y + 2, '\0'));
		for (int i = 1; i <= x; i++) {
			for (int j = 1; j <= y; j++) {
				cin >> c;
				ar[i][j] = c;
			}
		}
		vector<vector<int>> vt(x + 2, vector<int>(y + 2, 0));
		for (int i = 1; i <= x; i++)
			for (int j = 1; j <= y; j++)
				if (ar[i][j] == '*')
					f(ar, vt, i, j);
		cout << "Field #" << cas++ << ":\n";
		for (int i = 1; i <= x; i++) {
			for (int j = 1; j <= y; j++) {
				if (ar[i][j] == '*')
					cout << '*';
				else
					cout << vt[i][j];
			}
			cout << '\n';
		}
		flag = true;
		ar.clear();
	}
}

int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	solve();
	return 0;
}