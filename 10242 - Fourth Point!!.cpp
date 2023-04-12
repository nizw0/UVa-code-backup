#include <iostream>
#include <vector>
#include <iomanip>
#include <utility>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0); cin.tie(0);
    double x, y, ax, ay;
    vector<pair<double, double>> p;
    while (cin >> x >> y) {
        p.resize(4);
        p[0].first = x, p[0].second = y;
        ax = x; ay = y;
        for (int i = 1; i < 4; i++) {
            cin >> x >> y;
            p[i].first = x; p[i].second = y;
            ax += x; ay += y;
        }
        for (int i = 0; i < 4; i++) {
            for (int j = i + 1; j < 4; j++) {
                if (p[i].first == p[j].first && p[i].second == p[j].second) {
                    cout << setprecision(3) << fixed << ax - 3 * p[i].first << ' ' << ay - 3 * p[i].second << '\n';
                }
            }
        }
        p.clear();
    }
    return 0;
}