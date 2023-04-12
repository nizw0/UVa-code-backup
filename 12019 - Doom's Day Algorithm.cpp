#include <iostream>
using namespace std;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N, M, D, day;
	int month[] = { 0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334, 365 };
	string week[] = { "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday" };
	int const DayZero = 5 - 1;
	cin >> N;
	while (N-- && cin >> M >> D) {
		day = month[M - 1] + D;
		cout << week[(day + DayZero) % 7] << "\n";
	}
	return 0;
}