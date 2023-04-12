#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0); cin.tie(0);
    int n;
    vector<int>discard;
    deque<int>q;
    while(cin >> n && n){
        for(int i = 1; i <= n; i++) q.push_back(i);
        while(q.size() > 1){
            discard.push_back(q.front());
            q.pop_front();
            q.push_back(q.front());
            q.pop_front();
        }
        cout << "Discarded cards:";
        for(size_t i = 0; i < discard.size(); i++){
            cout << ' ' << discard.at(i);
            if(i + 1 != discard.size()) cout << ",";
        }
        cout << '\n';
        cout << "Remaining card: " << q.front() << '\n';
        q.clear(); discard.clear();
    }
    return 0;
}