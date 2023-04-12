#include <iostream>
using namespace std;
long long int f(long long int, long long int);
int counter;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long int A, L, Case = 0;
    while (cin >> A >> L) {
        if (A < 0 && L < 0) break;
        counter = 0;
        printf("Case %d: A = %d, limit = %d, number of terms = %d\n", ++Case, A, L, f(A, L));
    }
    return 0;
}
long long int f(long long int A, long long int limit) {
    if (A == 1) {
        counter++;
        return counter;
    }
    else if (A > limit)
        return counter;
    counter++;
    if (A % 2 == 0)
        return f(A / 2, limit);
    else
        return f((3 * A) + 1, limit);
}