#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int t, cas = 1;
    string month;
    int day, year;
    int t1, t2;
    char c;
    cin >> t;
    while (t-- and cin >> month >> day >> c >> year) {
        if ((month[0] == 'J' && month[1] == 'a') || month[0] == 'F') year--;
        t1 = year / 4 - year / 100 + year / 400;

        cin >> month >> day >> c >> year;
        if ((month[0] == 'J' && month[1] == 'a') || month[0] == 'F') year--;
        if (month[0] == 'F' && day == 29) year++;
        t2 = year / 4 - year / 100 + year / 400;

        cout << "Case " << cas++ << ": " << t2 - t1 << '\n';
    }
}

int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	solve();
	return 0;
}