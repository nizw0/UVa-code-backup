#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int n, sum, count, cas = 1;
    while (cin >> n && n > 0) {
        sum = 1; count = 0;
        for (int i = 1; sum < n; i *= 2) {
            sum += i;
            count++;
        }
        cout << "Case " << cas++ << ": " << count << '\n';
    }
    return 0;
}