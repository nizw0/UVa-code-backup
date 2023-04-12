#include <stdio.h>
#include <iostream>
using namespace std;
void swap(int& a, int& b);
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, s, d, ans1, ans2;
	cin >> n;
	while (n--) {
		cin >> s >> d;
		ans2 = (s - d) / 2;
		ans1 = s - ans2;
		if (ans2 > ans1)
			swap(ans1, ans2);
		if (ans1 + ans2 != s || ans1 - ans2 != d || ans1 < 0 || ans2 < 0)
			cout << "impossible" << "\n";
		else
			cout << ans1 << " " << ans2 << "\n";
	}
	return 0;
}
void swap(int& a, int& b) {
	int tmp;
	tmp = a;
	a = b;
	b = tmp;
}