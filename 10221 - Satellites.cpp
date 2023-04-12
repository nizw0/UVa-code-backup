#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define PI acos(0.0)*2.0

void solve() {
    double r, s, a;
    string unit;
    double chord, arc;
    r = 6440.0;
    while (cin >> s >> a >> unit) {
        if (unit == "min") a /= 60.0;
        if (a > 180.0) a = 360.0 - a;
        chord = (r + s) * cos((90.0 - a / 2.0) / 180.0 * PI) * 2.0;
        arc = 2.0 * PI * (r + s) * a / 360.0;
        cout << fixed << setprecision(6) << arc << " " << chord << "\n";
    }
}

int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	solve();
	return 0;
}