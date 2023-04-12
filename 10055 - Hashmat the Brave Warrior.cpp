#include <iostream>
#include <cstdlib>
using namespace std;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	long long int m, n, ans;
	while (cin >> m >> n) {
		ans = llabs(m - n);
		cout << ans << "\n";
	}
	return 0;
}