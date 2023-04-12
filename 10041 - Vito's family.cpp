#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, r, mid, sum, arr[500] = { 0 };
	cin >> n;
	while (n--) {
		sum = 0;
		cin >> r;
		for (int i = 0; i < r; i++)
			cin >> arr[i];
		sort(arr, arr + r);
		mid = arr[r / 2];
		for (int i = 0; i < r; i++)
			sum += abs(mid - arr[i]);
		cout << sum << endl;
		memset(arr, 0, sizeof(arr));
	}
	return 0;
}