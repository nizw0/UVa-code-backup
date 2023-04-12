#include <stdio.h>
int main() {
	int N, e, f, c, Soda, ans;
	scanf("%d", &N);
	while (N--) {
		scanf("%d %d %d", &e, &f, &c);
		ans = 0;
		Soda = e + f;
		while (Soda / c) {
			ans += Soda / c;
			Soda = Soda / c + Soda % c;
		}
		printf("%d\n", ans);
	}
	return 0;
}