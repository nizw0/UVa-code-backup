#include <bits/stdc++.h>
using namespace std;

void solve() {
    int x;
    string str, num;
    stringstream ss;
    vector<int> index;
    vector<string> ar;
    getline(cin, str); getline(cin, str);
    ss << str;
    while (ss >> x) {
        index.push_back(x);
    }
    ar.resize(index.size());
    for (auto& y : index) {
        cin >> num;
        ar[y - 1] = num;
    }
    cin.ignore();
    for (auto& y : ar) cout << y << '\n';
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int n;
    cin >> n;
    cin.ignore();
    for (int i = 0; i < n; i++) {
        if (i) cout << '\n';
        solve();
    }
    return 0;
}