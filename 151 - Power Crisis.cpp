#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n, m, turnoff;

    while (cin >> n and n) {
        n--;
        for (m = 1; m < n; m++) {
            turnoff = 0;
            for (int i = 1; i <= n; i++)
                turnoff = (turnoff + m) % i;
            if (turnoff == 11) break;
        }
        cout << m << '\n';
    }
}

int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	solve();
	return 0;
}