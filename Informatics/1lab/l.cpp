#include <iostream>

using namespace std;

int main() {
    int a, b, c, d;
    cin >> a;
    b = a / 3600;
    b = b % 24;
    c = a / 60;
    c = c % 60;
    d = a % 60;
    cout << b << ":";
    cout << c/10 << c%10 << ":";
    cout << d/10 << d%10;
    return 0;
}