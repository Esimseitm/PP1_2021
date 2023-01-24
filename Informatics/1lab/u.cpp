#include <iostream>

using namespace std;

int main () {
    int a, b;
    cin >> a >> b;
    int m, n;
    m = a % b;
    n = b % a;
    cout << m * n + 1;
    return 0;
}