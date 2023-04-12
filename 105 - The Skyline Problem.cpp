#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int l, h, r, mx = INT_MIN, mn = INT_MAX;
    vector<int> ar(10001, 0);
    while (cin >> l >> h >> r) {
        for (int i = l; i < r; i++)
            if (h > ar[i]) ar[i] = h;
        mx = max(mx, r);
        mn = min(mn, l);
    }
    int current = -1;
    for (int i = mn, flag = false; i <= mx; i++) {
        if (ar[i] != current) {
            current = ar[i];
            cout << (flag ? " " : "") << i << ' ' << current;
            flag = true;
        }
    }
    cout << '\n';
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    solve();
    return 0;
}