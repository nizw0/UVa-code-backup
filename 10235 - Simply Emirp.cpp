#include <iostream>
#include <vector>
using namespace std;
void BuildPrime(vector<bool>& Prime) {
	Prime[0] = false, Prime[1] = false;
	for (int i = 2; i < 1000000; i++) {
		if (Prime[i])
			for (int j = i + i; j < 1000000; j += i)
				Prime[j] = false;
	}
}
int main(void) {
	ios::sync_with_stdio(0); cin.tie(0);
	
	vector<bool>Prime(1000000);
	Prime.assign(Prime.size(), true);
	BuildPrime(Prime);

	int n, re;
	while (cin >> n) {
		 if (!Prime.at(n)) {
			 cout << n << " is not prime.\n";
			 continue;
		 }
		 else {
			 re = 0;
			 for (int i = n; i;) {
				 re = re * 10 + i % 10;
				 i /= 10;
			 }
			 if (Prime.at(re) && n != re)
				 cout << n << " is emirp.\n";
			 else
				 cout << n << " is prime.\n";
		 }
	}
	return 0;
}