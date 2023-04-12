#include <stdio.h>
#include <iostream>
using namespace std;
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    string real, test;
    bool flag;
    cin >> n;
    while (n--) {
        cin >> real >> test;
        flag = true;
        if (real.size() != test.size()) 
            flag = false;
        for (size_t i = 0; i < test.size(); i++) {
            if (flag == false)
                break;
            if (real.at(i) == 'a' || real.at(i) == 'e' || real.at(i) == 'i' || real.at(i) == 'o' || real.at(i) == 'u') {
                if (test.at(i) == 'a' || test.at(i) == 'e' || test.at(i) == 'i' || test.at(i) == 'o' || test.at(i) == 'u')
                    continue;
                else
                    flag = false;
            }
            else if (real.at(i) == test.at(i))
                continue;
            else
                flag = false;
        }
        if (flag)
            cout << "Yes\n";
        else
            cout << "No\n";
        real.clear(), test.clear();
    }
    return 0;
}