#include <stdio.h>
#include <iostream>
using namespace std;
int GCD(int i, int j);
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N, i, j, G;
	while (cin >> N) {
		if (N == 0) return 0;
		G = 0;
		for (i = 1; i < N; i++)
			for (j = i + 1; j <= N; j++) {
				G += GCD(i, j);
			}
		cout << G << endl;
	}
	return 0;
}
int GCD(int i, int j) {
	if (i % j == 0)
		return j;
	else
		return GCD(j, i % j);
}