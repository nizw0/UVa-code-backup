#include <stdio.h>
#include <iostream>
#include <string>
#include <string.h>
#include <sstream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
using namespace std;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	long long int n, arr[5000] = { 0 }, sum;
	while (cin >> n) {
		if (!n) break;
		sum = 0;
		for (long long int i = 0; i < n; i++)
			cin >> arr[i];
		sort(arr, arr + n);
		for (long long int i = 0; i < n - 1; i++) {
			sum += arr[i] + arr[i + 1];
			arr[i + 1] += arr[i];
                        sort(arr, arr + n);
		}
		cout << sum << endl;
		memset(arr, 0, sizeof(arr));
	}
	return 0;
}