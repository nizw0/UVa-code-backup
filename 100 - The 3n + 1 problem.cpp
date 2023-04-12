#include <iostream>
using namespace std;
long long int f(long long int);
void swap(int&, int&);
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	long long int i, j, Bnum, tmp;
	while (cin >> i >> j) {
		cout << i << ' ' << j << ' ';
		if (i > j)
			swap(i, j);
		Bnum = f(i);
		for (long long int k = i + 1; k <= j; k++) {
			tmp = f(k);
			if (tmp > Bnum)
				Bnum = tmp;
		}
		cout << Bnum << '\n';
	}
	return 0;
}
long long int f(long long int n) {
	int count = 0;
	while (n != 1) {	
		if (n % 2)
			n = 3 * n + 1;
		else
			n /= 2;
		count++;
	}
	return ++count;
}
void swap(int& a, int& b) {
	int tmp;
	tmp = a;
	a = b;
	b = tmp;
}