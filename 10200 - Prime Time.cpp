#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;
bool prime(int n) {
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}
int main(void) {
    ios::sync_with_stdio(0); cin.tie(0);
    vector<bool>Prime(10010);
    Prime.assign(10010, true);
    for (int i = 0; i < 10010; i++) {
        Prime.at(i) = prime(i * i + i + 41);
    }
    int n, m, count;
    while (cin >> n >> m) {
        count = 0;
        for (int i = n; i <= m; i++) {
            if (Prime.at(i))
                count++;
        }
        cout << setprecision(2) << fixed << count * 1.0 / (m - n + 1) * 100 + 1e-8 << '\n';
    }
    return 0;
}