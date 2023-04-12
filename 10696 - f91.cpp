#include <iostream>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0); cin.tie(0);
    int n;
    while (cin >> n && n) {
        cout << "f91(" << n << ") = ";
        if (n >= 101) cout << n - 10 << '\n';
        else cout << "91\n";
    }
    return 0;
}