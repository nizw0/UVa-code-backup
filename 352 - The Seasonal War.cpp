#include <bits/stdc++.h>

using namespace std;

void dfs(vector<string> &ar, int x, int y) {
    ar[x][y] = '0';
    if (ar[x - 1][y - 1] == '1') dfs(ar, x - 1, y - 1);
    if (ar[x - 1][y] == '1') dfs(ar, x - 1, y);
    if (ar[x - 1][y + 1] == '1') dfs(ar, x - 1, y + 1);
    if (ar[x][y - 1] == '1') dfs(ar, x, y - 1);
    if (ar[x][y + 1] == '1') dfs(ar, x, y + 1);
    if (ar[x + 1][y - 1] == '1') dfs(ar, x + 1, y - 1);
    if (ar[x + 1][y] == '1') dfs(ar, x + 1, y);
    if (ar[x + 1][y + 1] == '1') dfs(ar, x + 1, y + 1);
}

void solve() {
    int n, cas = 1;
    while (cin >> n) {
        vector<string> ar(n + 2, string(n + 2, '0'));
        int res = 0;
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                cin >> ar[i][j];
            }
        }
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                if (ar[i][j] == '1') {
                    dfs(ar, i, j);
                    res++;
                }
            }
        }
        cout << "Image number " << cas++ << " contains " << res << " war eagles.\n";
    }
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
