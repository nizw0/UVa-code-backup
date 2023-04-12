#include <iostream>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0); cin.tie(0);
    int n, age;
    bool flag;
    while (cin >> n && n) {
        int arr[101] = { 0 };
        for (int i = 0; i < n; i++) {
            cin >> age;
            arr[age]++;
        }
        flag = false;
        for (int i = 1; i < 101; i++) {
            if (arr[i]) {
                for (int j = 0; j < arr[i]; j++) {
                    if (flag) cout << ' ';
                    cout << i;
                    flag = true;
                }
            }
        }
        cout << '\n';
    }
    return 0;
}