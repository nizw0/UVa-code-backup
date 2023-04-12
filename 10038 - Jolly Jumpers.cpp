#include <iostream>
#include <string.h>
using namespace std;
int main(void) {
	int n, arr[3000] = { 0 };
	bool set[3000] = {false}, ans;
	while (scanf("%d", &n) != EOF) {
		ans=true;
		for (int i = 0; i < n; i++)
			scanf("%d", &arr[i]);
		for (int i = 1; i < n; i++)
			set[abs(arr[i] - arr[i - 1])] = true;
		for (int i = 1; i < n; i++)
			if (set[i] != true) {
				ans = false;
				break;
			}
		if (ans)
			printf("Jolly\n");
		else
			printf("Not jolly\n");
		memset(arr, 0, 3000);
		memset(set, false, 3000);
	}
	return 0;
}