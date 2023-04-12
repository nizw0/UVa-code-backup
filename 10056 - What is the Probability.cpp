#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0), cin.tie(0);
	int s, n, i_th;
	double p, ans;
	cin >> s;
	while (s-- && cin >> n >> p >> i_th) {
		if (p == 0)
			cout << "0.0000\n";
		else {
			ans = pow(1 - p, i_th - 1) * p / (1 - pow(1 - p, n));
			cout << setprecision(4) << fixed << ans << '\n';
		}
	}
	return 0;
}