#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    string str;
    cin >> n;
    cin.ignore();
    while (n-- and getline(cin, str)) {
        bool flag = true;
        stack<char> stk;
        for (char& x : str) {
            if (!flag) break;
            switch (x) {
                case '(':
                    stk.push(x);
                    break;
                case ')':
                    if (stk.empty() or stk.top() != '(')
                        flag = false;
                    else
                        stk.pop();
                    break;
                case '[':
                    stk.push(x);
                    break;
                case ']':
                    if (stk.empty() or stk.top() != '[')
                        flag = false;
                    else
                        stk.pop();
                    break;
                default:
                    break;
            }
        }
        if (!stk.empty())
            flag = false;
        cout << (flag ? "Yes" : "No") << '\n';
    }
}


int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    solve();
    return 0;
}
