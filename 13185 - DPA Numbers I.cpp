#include <stdio.h>
int f(int n) {
	int sum = 0;
	for (int i = 1; i < n; ++i)
		if (n % i == 0)
			sum += i;
	return sum;
}
int main() {
	int t, n;
	scanf("%d", &t);
	while (t--) {
		scanf("%d", &n);
		if (f(n) == n)
			printf("perfect\n");
		else if (f(n) < n)
			printf("deficient\n");
		else if (f(n) > n)
			printf("abundant\n");
	}
	return 0;
}