#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int n, d, m, tmp, count;
    vector<bool> day;
    cin >> n;
    while (n-- && cin >> d >> m) {
        day.assign(d + 1, true);
        for (int i = 0; i < m; i++) {
            cin >> tmp;
            for (int j = tmp; j <= d; j += tmp)
                day[j] = false;
        }
        count = 0;
        for (int i = 1; i <= d; i++) {
            if (i % 7 != 6 && i % 7 != 0 && !day[i]) count++;
        }
        cout << count << '\n';
        day.clear();
    }
    return 0;
}