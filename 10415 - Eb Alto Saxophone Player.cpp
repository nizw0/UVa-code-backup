#include <iostream>
#include <string>
#include <cstring>
#include <vector>
using namespace std;
int main(void) {
	ios::sync_with_stdio(0), cin.tie(0);
	vector<string>vec;
	string
		str, current, cmp,
		c = "00111001111", d = "00111001110", e = "00111001100", f = "00111001000", g = "00111000000", a = "00110000000", b = "00100000000", C = "00010000000", D = "01111001110", E = "01111001100", F = "01111001000", G = "01111000000", A = "01110000000", B = "01100000000";
	vec.resize('g' + 1);
	vec.at('c') = c, vec.at('d') = d, vec.at('e') = e, vec.at('f') = f, vec.at('g') = g, vec.at('a') = a, vec.at('b') = b, vec.at('C') = C, vec.at('D') = D, vec.at('E') = E, vec.at('F') = F, vec.at('G') = G, vec.at('A') = A, vec.at('B') = B;
	int t, counter[11] = { 0 };
	cin >> t;
	cin.ignore();
	while (t--) {
		getline(cin, str);
		if (str == "") {
			for (int i = 0; i < 10; i++) {
				cout << '0';
				if (i != 9) cout << ' ';
				else cout << '\n';
			}
			continue;
		}
		current = vec.at(str.at(0));
		for (int i = 1; i < 11; i++)
			if (current.at(i) == '1')
				counter[i]++;
		for (size_t i = 1; i < str.size(); i++) {
			cmp = vec.at(str.at(i));
			for (int j = 1; j < 11; j++)
				if (current.at(j) == '0' && cmp.at(j) == '1')
					counter[j]++;
			current = vec.at(str.at(i));
		}
		for (int i = 1; i < 11; i++) {
			cout << counter[i];
			if (i != 10) cout << ' ';
			else cout << '\n';
		}
		str.clear(), memset(counter, 0, sizeof(counter));
	}
	return 0;
}