#include <stdio.h>
int main() {
	char text[50];
	while (scanf("%s", text) != EOF) {
		for (int i = 0; text[i] != '\0'; ++i) {
			switch (text[i]) {
			case '1':
				printf("1"); break;
			case '2': case 'A': case 'B': case 'C':
				printf("2"); break;
			case '3': case 'D': case 'E': case 'F':
				printf("3"); break;
			case '4': case 'G': case 'H': case 'I':
				printf("4"); break;
			case '5': case 'J': case 'K': case 'L':
				printf("5"); break;
			case '6': case 'M': case 'N': case 'O':
				printf("6"); break;
			case '7': case 'P': case 'Q': case 'R': case 'S':
				printf("7"); break;
			case '8': case 'T': case 'U': case 'V':
				printf("8"); break;
			case '9': case 'W': case 'X': case 'Y': case 'Z':
				printf("9"); break;
			case '-':
				printf("-"); break;
			}
			if (text[i + 1] == '\0')
				printf("\n");
		}
	}
	return 0;
}