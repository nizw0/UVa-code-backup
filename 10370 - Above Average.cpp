#include <bits/stdc++.h>

using namespace std;

void solve() {
    int t, n;
    cin >> t;
    vector<int> ar;
    while (t-- and cin >> n) {
        int tmp;
        double sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> tmp;
            sum += tmp;
            ar.push_back(tmp);
        }
        sum /= n;
        tmp = 0;
        for (auto &x: ar) {
            if (x > sum)
                tmp++;
        }
        cout << fixed << setprecision(3) << double((double) tmp / (double) n) * 100 << "%\n";
        ar.clear();
    }
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
