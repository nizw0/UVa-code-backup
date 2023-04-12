#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void fi(vector<int>& vec) {
    vec.push_back(1); vec.push_back(2);
    for (int i = 2; vec.back() < 1e8; i++) 
        vec.push_back(vec.at(i - 1) + vec.at(i - 2));
}

int main(void) {
    ios::sync_with_stdio(0); cin.tie(0);
    int n, num;
    bool flag;
    vector<int>fib;
    string ans;
    vector<int>::reverse_iterator iter;
    fi(fib);
    cin >> n;
    while (n-- && cin >> num) {
        flag = false;
        cout << num;
        for (iter = fib.rbegin(); iter != fib.rend(); iter++) {
            if (!flag && num >= *iter) flag = true;
            if (flag) {
                if (num >= *iter) {
                    num -= *iter;
                    ans.push_back('1');
                }
                else {
                    ans.push_back('0');
                }
            }
        }
        cout << " = " << ans << " (fib)\n";
        ans.clear();
    }
    return 0;
}