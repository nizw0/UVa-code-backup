#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int f(vector<int>& vec) {
    int count = 0, tmp;
    for (size_t i = 0; i < vec.size(); i++) {
        for (size_t j = 1; j < vec.size() - i; j++) {
            if (vec.at(j) < vec.at(j - 1)) {
                tmp = vec.at(j);
                vec.at(j) = vec.at(j - 1);
                vec.at(j - 1) = tmp;
                count++;
            }
        }
    }
    return count;
}
int main(void) {
    ios::sync_with_stdio(0); cin.tie(0);
    int N, tmp;
    vector<int>vec;
    while (cin >> N) {
        for (int i = 0; i < N; i++) {
            cin >> tmp;
            vec.push_back(tmp);
        }
        cout << "Minimum exchange operations : " << f(vec) << '\n';
        vec.clear();
    }
    return 0;
}