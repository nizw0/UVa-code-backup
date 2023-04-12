#include <stdio.h>
int main() {
	int I;
	while (scanf("%d", &I) != EOF) {
		if (I == 0) return 0;
		int i, ans = 0, A[50] = { 0 };
		printf("The parity of ");
		for (i = 0; I != 0; ++i) {
			A[i] = I & 1;
			I /= 2;
			if (A[i])
				++ans;
		}
		for (--i; i >= 0; --i)
			printf("%d", A[i]);
		printf(" is %d (mod 2).\n", ans);
	}
}