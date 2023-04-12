#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, count = 0, arr[100] = { 0 };
	bool ans, flag[20001] = { false };
	while (cin >> n) {
		ans = true;
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
			if (!arr[i])
				ans = false;
		}
		for (int i = 0; i < n; i++) {
			for (int j = i; j < n; j++) {
				if (flag[arr[i] + arr[j]] || arr[j] < arr[i])
					ans = false;
				else
					flag[arr[i] + arr[j]] = true;
			}
		}
		if (ans)
			printf("Case #%d: It is a B2-Sequence.\n\n", ++count);
		else
			printf("Case #%d: It is not a B2-Sequence.\n\n", ++count);
		memset(arr, 0, 100);
		memset(flag, false, 20001);
	}
	return 0;
}