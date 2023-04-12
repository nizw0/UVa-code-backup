#include <iostream>
using namespace std;
int main(void) {
	int a, b, i, counter;
	while (scanf("%d %d", &a, &b) != EOF) {
		if (a == 0 && b == 0) return 0;
		for (i = 1, counter = 0; i * i <= b; i++)
			if (i * i >= a && i * i <= b)
				counter++;
		printf("%d\n", counter);
	}
	return 0;
}