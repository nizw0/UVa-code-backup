#include <bits/stdc++.h>
using namespace std;
#define ll long long

void SET(vector<int>& ar) {
    for (int i = 1; i <= 14; ++i) {
        int m = i + 1;
        while (true) {
            int k = i * 2;

            int killPerson = -1;
            while (k > i) {
                killPerson += m;
                killPerson %= k;
                if (killPerson < i) {
                    break;
                }
                --k;
                --killPerson;
            }

            if (k <= i) {
                ar[i] = m;
                break;
            }

            ++m;
        }
    }
}

void solve() {
    vector<int> mem(15, 0);
    SET(mem);
    int k;
    while (cin >> k and k)
        printf("%d\n", mem[k]);

}

int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	solve();
	return 0;
}