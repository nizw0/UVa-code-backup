#include <iostream>
#include <set>
#include <string.h>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	set<char>st;
	int n, counter;
	bool table[26] = { false };
	string ans, guess;
	while (cin >> n && (n != -1)) {
		cin >> ans >> guess;
		counter = 0;
		for (size_t i = 0; i < ans.size(); i++)
			st.insert(ans.at(i));
		for (size_t i = 0; i < guess.size(); i++) {
			if (counter == 7) {
				break;
			}
			if (st.count(guess.at(i))) {
				st.erase(guess.at(i));
				table[guess.at(i) - 'a'] = true;
			}
			else {
				if (!table[guess.at(i) - 'a']) {
					counter++;
					table[guess.at(i) - 'a'] = true;
				}
			}
		}
		cout << "Round " << n << "\n";
		if (st.empty())
			cout << "You win.\n";
		else if (counter != 7)
			cout << "You chickened out.\n";
		else
			cout << "You lose.\n";		
		st.clear(), ans.clear(), guess.clear();
		memset(table, false, sizeof(table));
	}
	return 0;
}