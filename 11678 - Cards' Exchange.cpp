#include <iostream>
#include <algorithm>
#include <set>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int a, b, sumA, sumB, tmp;
    set<int> A, B;
    set<int>::iterator iter;
    while (cin >> a >> b && a && b) {
        for (int i = 0; i < a; i++) {
            cin >> tmp;
            A.insert(tmp);
        }
        for (int i = 0; i < b; i++) {
            cin >> tmp;
            B.insert(tmp);
        }
        sumA = 0; sumB = 0;
        for (iter = A.begin(); iter != A.end(); iter++) {
            if (!B.count(*iter)) sumB++;
        }
        for (iter = B.begin(); iter != B.end(); iter++) {
            if (!A.count(*iter)) sumA++;
        }
        cout << min(sumA, sumB) << '\n';
        A.clear(); B.clear();
    }
    return 0;
}