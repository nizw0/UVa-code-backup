#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t, m, n, q, r, c, count;
    char chr;
    bool flag;
    vector<vector<char>> table;
    cin >> t;
    while (t-- && cin >> m >> n >> q) {
        table.resize(m);
        for (int i = 0; i < m; i++) {
            table[i].resize(n);
            for (int j = 0; j < n; j++) {
                cin >> chr;
                table[i][j] = chr;
            }
        }
        cout << m << ' ' << n << ' ' << q << '\n';
        for (int i = 0; i < q; i++) {
            cin >> r >> c;
            chr = table[r][c];
            count = 1; flag = false;
            for (int j = 1;; j++) {
                if (r - j < 0 || r + j >= m || c - j < 0 || c + j >= n) break;
                for (int k = 0; c - j + k != c + j && !flag; k++) {
                    if (table[r - j][c - j + k] != chr) {
                        flag = true;
                        break;
                    }
                }
                for (int k = 0; r - j + k != r + j && !flag; k++) {
                    if (table[r - j + k][c + j] != chr) {
                        flag = true;
                        break;
                    }
                }
                for (int k = 0; c + j - k != c - j && !flag; k++) {
                    if (table[r + j][c + j - k] != chr) {
                        flag = true;
                        break;
                    }
                }
                for (int k = 0; r + j - k != r - j && !flag; k++) {
                    if (table[r + j - k][c - j] != chr) {
                        flag = true;
                        break;
                    }
                }
                if (flag) break;
                count += 2;
            }
            cout << count << '\n';
        }
        table.clear();
    }
    return 0;
}