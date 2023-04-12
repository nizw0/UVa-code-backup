#include <stdio.h>
int main() {
	int t, One, Two;
	scanf("%d", &t);
	while (t--) {
		char num[10];
		One = 0, Two = 0;
		scanf("%s", num);
		if (num[3] && num[4])
			printf("3\n");
		else if ((num[0] == 'o' && num[1] == 'n') || (num[0] == 'o' && num[2] == 'e') 
												  || (num[1] == 'n' && num[2] == 'e'))
			printf("1\n");
		else
			printf("2\n");
	}
	return 0;
}