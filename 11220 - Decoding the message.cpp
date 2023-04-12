#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int cas = 1, n;
    string str, res;
    stringstream ss;
    vector<string> ar, ans;
    cin >> n; cin.ignore(); getline(cin, str);
    while (n--) {
        cout << "Case #" << cas++ << ":\n";

        while (getline(cin, str) && str != "") {
            ss << str;
            while (ss >> str) ar.push_back(str);
            for (int i = 0, count = 0; i < ar.size(); i++) {
                if (ar[i].size() > count) {
                    res.push_back(ar[i][count]);
                    count++;
                }
            }
            ans.push_back(res);
            ss.str(""); ss.clear(); str.clear(); res.clear(); ar.clear();
        }

        for (auto& x : ans) cout << x << '\n'; // print answer
        cout << '\n';
        ans.clear();
    }
    return 0;
}
