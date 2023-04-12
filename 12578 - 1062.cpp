#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    double const PI = acos(-1);
    int t;
    double l, r, w, red;
    cin >> t;
    while (t-- and cin >> l) {
        r = l / 5.0;
        w = r * 3.0;
        red = r * r * PI;
        cout << setprecision(2) << fixed << red << ' ' << l * w - red << '\n';

    }
}

int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	solve();
	return 0;
}