#include <iostream>
#include <string>
using namespace std;
int main() {
	int counter, i;
	string text;
	while (getline(cin, text)) {
		counter = 1;
		for (i = 0; i < text.size(); i++)
			if (isalpha(text[i]) != 0)
				break;
		for (i++; i < text.size(); i++)
			if (isalpha(text[i]) != 0 && isalpha(text[i - 1]) == 0)
				counter++;
		printf("%d\n", counter);
	}
	return 0;
}