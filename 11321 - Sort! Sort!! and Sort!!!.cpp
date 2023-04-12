#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct numtype {
    int num, MOD_m;
    bool isOdd;
};
bool cmp(numtype& a, numtype& b) {
    if (a.MOD_m == b.MOD_m) {
        if (a.isOdd && !b.isOdd) return true;
        if (!a.isOdd && b.isOdd) return false;
        if (a.isOdd && b.isOdd) return a.num > b.num;
        if (!a.isOdd && !b.isOdd) return a.num < b.num;
    }
    return a.MOD_m < b.MOD_m;
}
int main(void) {
    ios::sync_with_stdio(0); cin.tie(0);
    int n, m, tmp;
    numtype stru;
    vector<numtype>vec;
    while (cin >> n >> m && n && m) {
        for (int i = 0; i < n; i++) {
            cin >> tmp;
            stru.num = tmp;
            if (tmp % 2) stru.isOdd = true;
            else stru.isOdd = false;
            stru.MOD_m = tmp % m;
            vec.push_back(stru);
        }
        sort(vec.begin(), vec.end(), cmp);
        cout << n << ' ' << m << '\n';
        for (size_t i = 0; i < vec.size(); i++)
            cout << vec.at(i).num << '\n';
        vec.clear();
    }
    cout << "0 0\n";
    return 0;
}