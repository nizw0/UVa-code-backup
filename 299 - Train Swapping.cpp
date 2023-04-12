#include <iostream>
#include <vector>
using namespace std;
int BubbleSort(vector<int>vec);
void swap(int&, int&);
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N, L, tmp; 
	vector<int>vec;
	cin >> N;
	while (N--) {
		cin >> L;
		for (int i = 0; i < L; i++) {
			cin >> tmp;
			vec.push_back(tmp);
		}
		cout << "Optimal train swapping takes " << BubbleSort(vec) << " swaps.\n";
		vec.clear();
	}
	return 0;
}
int BubbleSort(vector<int>vec) {
	if (vec.empty()) return 0;
	int count = 0;
	for (size_t i = 0; i < vec.size() - 1; i++)
		for (size_t j = 0; j < vec.size() - i - 1; j++)
			if (vec.at(j) > vec.at(j + 1)) {
				swap(vec.at(j), vec.at(j + 1));
				count++;
			}
	return count;
}
void swap(int& a, int& b) {
	int tmp;
	tmp = a;
	a = b;
	b = tmp;
}