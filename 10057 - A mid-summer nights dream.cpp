#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0), cin.tie(0);
	int n, num, ans1, ans1_2, ans2, ans3;
	vector<int>vec;
	while (cin >> n) {
		for (int i = 0; i < n; i++) {
			cin >> num;
			vec.push_back(num);
		}
		sort(vec.begin(), vec.end());
		ans1 = vec.at((vec.size() - 1) / 2);
		ans1_2 = vec.at(vec.size() / 2);
		ans2 = 0;
		for (size_t i = 0; i < vec.size(); i++) {
			if (vec.at(i) == ans1)
				ans2++;
			else if (vec.size() % 2 == 0 && vec.at(i) == ans1_2)
				ans2++;
		}
		ans3 = ans1_2 - ans1 + 1;
		cout << ans1 << ' ' << ans2 << ' ' << ans3 << '\n';
		vec.clear();
	}
	return 0;
}