#include <stdio.h>
int main(){
	int T, score;
	scanf("%d", &T);
	while (T--) {
		char ans[100] = { 0 };
		scanf("%s", ans);
		score = 0;
		for (int i = 0, counter = 0; ans[i] != '0'; i++) {
			if (ans[i] == 'O') {
				score += counter + 1;
				counter += 1;
			}
			if (ans[i] == 'X') {
				counter = 0;
			}
		}
		printf("%d\n", score);
	}
	return 0;
}