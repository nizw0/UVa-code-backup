#include <iostream>
#include <vector>
using namespace std;

vector<int> ar(100001, 0);

void f(int n) {
    int total = n, x = n;
    while (x) {
        total += x % 10;
        x /= 10;
    }
    if (total > 1e5) return;
    ar[total] = n;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    for (int i = 100000; i >= 0; i--) f(i);
    int t, n;
    cin >> t;
    while (t-- && cin >> n) {
        cout << ar[n] << '\n';
    }
    return 0;
}