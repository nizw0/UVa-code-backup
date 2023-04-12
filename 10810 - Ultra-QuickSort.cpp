#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll ans;

void merge(vector<int>& ar, int left, int mid, int right) {
	vector<int> l(ar.begin() + left, ar.begin() + mid + 1); 
	vector<int> r(ar.begin() + mid + 1, ar.begin() + right + 1);
	l.push_back(INT_MAX);
	r.push_back(INT_MAX);
	int indexleft = 0, indexright = 0;
	for (int i = left; i <= right; i++) {
		if (l[indexleft] <= r[indexright])
			ar[i] = l[indexleft++];
		else {
			ar[i] = r[indexright++];
			ans += mid - indexleft - left + 1;
		}
	}
}

void mergeSort(vector<int>& ar, int left, int right) {
	int count = 0;
	if (left < right) {
		int mid = left + (right - left) / 2;
		mergeSort(ar, left, mid);
		mergeSort(ar, mid + 1, right);
		merge(ar, left, mid, right);
	}
}

void solve() {
	int n, tmp;
	vector<int> ar;
	while (cin >> n and n) {
		while (n--) {
			cin >> tmp; ar.push_back(tmp);
		}
		ans = 0;
		mergeSort(ar, 0, ar.size() - 1);
		cout << ans << '\n';
		ar.clear();
	}
}

int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	solve();
	return 0;
}