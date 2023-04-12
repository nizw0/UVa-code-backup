#include <stdio.h>
int main() {
	int v, t, x;
	while (scanf("%d %d", &v, &t) != EOF) {
		x = 2 * v * t;
		printf("%d\n", x);
	}
	return 0;
}