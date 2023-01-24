#include <iostream>

using namespace std;

int main () {
    long a, b;
    long c = 0;
    long m = 1;
    long n = 1;
    cin >> a>> b;
    for (int i = 1; i <= a; i++) {
        m = m * i;
    }
    c = a - b;
    for ( int j = 1; j <= b; j++) {
        n = n * j;
    }
    long v = 1;
    for ( int l = 1; l <= c; l++) {
        v = v * l;
    }
    cout << m / ( n * v);
    return 0;
}