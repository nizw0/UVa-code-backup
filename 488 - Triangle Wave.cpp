#include <iostream>
using namespace std;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, A, F, i, j, tmp_n, tmp_F;
	cin >> n;
	tmp_n = n - 1;
	while (n--) {
		cin >> A >> F;
		tmp_F = F - 1;
		while (F--) {
			if (tmp_n == n && tmp_F == F);
			else
				printf("\n");
			for (i = 1; i <= A; ++i) {
				for (j = i; j; --j)
					cout << i;
				cout << "\n";
			}
			for (i -= 2; i; --i) {
				for (j = i; j; --j)
					cout << i;
				cout << "\n";
			}
		}
	}
	return 0;
}