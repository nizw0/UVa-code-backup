#include <stdio.h>
int PrimeNum(int n) {
	if (n == 0 || n == 1) return 0;
	for (int i = 2; i < n; ++i) {
		if (n % i == 0)
			return 0;
	}
	return 1;
}
int main() {
	int T, t, count;
	scanf("%d", &T);
	t = T;
	while (T--) {
		int ans[123] = { 0 };
		char Tmp[2000];
		count = 0;
		scanf("%s", Tmp);
		for (int i = 0; Tmp[i] != 0; ++i)
			++ans[Tmp[i]];
		printf("Case %d: ", t - T);
		for (int i = 0; i < 123; ++i) {
			if (PrimeNum(ans[i])) {
				printf("%c", i);
				count = 1;
			}
		}
		if (count == 1)
			printf("\n");
		else if (count == 0)
			printf("empty\n");
	}
	return 0;
}