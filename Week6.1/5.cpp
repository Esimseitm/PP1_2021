// combinatorics
// C(n,k) = n! / ((n-k)! * k!)

#include <iostream>

int f(int n) {  // napisali function factorial
    int p = 1;
    for (int i = 2; i <= n; i++) {
        p *= i;
    }
    return p;
}

int c(int n, int k) {
    return f(n) / ( f(n - k) * f(k));
}

using namespace std;
int main () {
    int n, k;
    cin >> n >> k;
    cout << c(n,k);
    return 0;
}