#include <stdio.h>
#include <algorithm>
using namespace std;
int main() {
	int T, t, A[3];
	scanf("%d", &T);
	t = T;
	while (T--) {
		scanf("%d %d %d", &A[0], &A[1], &A[2]);
		sort(A, A + 3);
		printf("Case %d: %d\n", t - T, A[1]);
	}
	return 0;
}