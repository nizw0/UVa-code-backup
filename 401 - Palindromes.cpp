#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool isPalindrome(string str) {
	int const s = str.size();
	for (int i = 0; i < s / 2; i++)
		if (str[i] != str[s - i - 1])
			return false;
	return true;
}

void solve() {
	map<char, char> table = {
		{'A', 'A'}, {'B', 0}, {'C', 0}, {'D', 0}, {'E', '3'}, {'F', 0}, {'G', 0},
		{'H', 'H'}, {'I', 'I'}, {'J', 'L'}, {'K', 0}, {'L', 'J'}, {'M', 'M'}, {'N', 0},
		{'O', 'O'}, {'P', 0}, {'Q', 0}, {'R', 0}, {'S', '2'}, {'T', 'T'}, {'U', 'U'},
		{'V', 'V'}, {'W', 'W'}, {'X', 'X'}, {'Y', 'Y'}, {'Z', '5'},
		{'0', '0'}, {'1', '1'}, {'2', 'S'}, {'3', 'E'}, {'4', 0},
		{'5', 'Z'}, {'6', 0}, {'7', 0}, {'8', '8'}, {'9', 0}
	};
	string str;
	while (cin >> str) {
		string mi(str);
		for (auto& x : mi)
			x = table[x];
		reverse(mi.begin(), mi.end());
		bool mir = mi == str, p = isPalindrome(str);

		cout << str << " -- ";
		if (mir and p)
			cout << "is a mirrored palindrome.";
		else if (mir)
			cout << "is a mirrored string.";
		else if (p)
			cout << "is a regular palindrome.";
		else
			cout << "is not a palindrome.";
		cout << "\n\n";
	}
}

int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	solve();
	return 0;
}