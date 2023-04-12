#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;
bool cmp(int &a, int &b){
	return a > b;
}
int main() {
    ios::sync_with_stdio (0); cin.tie(0);
	string a, b, ans;
	vector<pair<int, int>>sum;
	int pick;
	while (getline(cin, a)){
		getline(cin, b);
		sum.resize(26);
		for (size_t i = 0; i < a.size(); i++)
			sum.at(a.at(i) - 'a').first++;
		for (size_t i = 0; i < b.size(); i++)
			sum.at(b.at(i) - 'a').second++;
		for (size_t i = 0; i < sum.size(); i++){
			if (sum.at(i).first > 0 && sum.at(i).second > 0){
				pick = min(sum.at(i).first, sum.at(i).second);
				while (pick--)
					ans.push_back(i + 'a');
			}
		}
		sort(ans.begin(), ans.end());
		cout << ans << '\n';
		a.clear(); b.clear(); sum.clear(); ans.clear();
	}
	return 0;
}