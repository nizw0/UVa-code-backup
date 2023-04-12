#include <bits/stdc++.h>
using namespace std;
#define ll long long


void solve() {
	ll n = 1, count = 0, x, y;
	ll m[3] = { 2, 3, 5 };
	set<ll> st;
	priority_queue<ll, vector<ll>, greater<ll>> pq;
	st.insert(1);
	pq.push(1);
	while (count < 1500) {
		x = pq.top();
		pq.pop();
		count++;
		if (count == 1500) {
			cout << "The 1500'th ugly number is " << x << ".\n";
			break;
		}
		for (int i = 0; i < 3; i++) {
			y = x * m[i];
			if (!st.count(y)) {
				st.insert(y);
				pq.push(y);
			}
		}
	}
}

int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	solve();
	return 0;
}