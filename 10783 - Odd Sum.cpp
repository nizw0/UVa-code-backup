#include <stdio.h>
int main() {
	int T, t, a, b, sum;
	scanf("%d", &T);
	t = T;
	while (T--) {
		sum = 0;
		scanf("%d %d", &a, &b);
		for (int i = a; i <= b; ++i)
			if (i % 2)
				sum += i;
		printf("Case %d: %d\n", t - T, sum);
	}
	return 0;
}