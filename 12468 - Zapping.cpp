#include <stdio.h>
#include <stdlib.h>
int main() {
	int a, b, x, ans;
	while (scanf("%d %d", &a, &b) != EOF) {
		if (a == -1 && b == -1) return 0;
		if (a > b) {
			x = a;
			a = b;
			b = x;
		}
		if (abs(a - b) <= 50)
			ans = abs(a - b);
		else
			ans = a - b + 100;
		printf("%d\n", ans);
	}
	return 0;
}