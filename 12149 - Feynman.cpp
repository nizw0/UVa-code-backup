#include <iostream>
using namespace std;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, ans;
	while (cin >> n && n) {
		ans = 0;
		for (int i = 1; i <= n; ++i)
			ans += i * i;
		cout << ans << "\n";
	}
	return 0;
}