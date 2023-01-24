#include <iostream>

using namespace std;

void manek(long n) {
    long sum = 0;
    long k = 0;
    k = n % 10;
    for (long i = n; i > 0; i= i/ 10) {
        sum += i % 10;
    }
    if ( sum % k == 0) {
        cout << "Yes";
    } else {
        cout << "No";
    }
}

int main () {
    long n;
    cin >> n;
    manek(n);
    return 0;
}