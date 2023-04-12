#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n;
    vector<int> ar = { 0 };
    for (int i = 1; i <= 4500; i++)
        ar.push_back(ar[i - 1] + i);
    while (cin >> n) {
        int x;
        for (x = 1; n > ar[x]; x++);
        if (x & 1)
            cout << "TERM " << n << " IS " << ar[x] - n + 1 << '/' << n - ar[x - 1];
        else
            cout << "TERM " << n << " IS " << n - ar[x - 1] << '/' << ar[x] - n + 1;
        cout << '\n';
    }
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    solve();
    return 0;
}