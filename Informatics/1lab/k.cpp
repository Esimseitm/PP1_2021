#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    cin >>a;
    b = a / 60;
    b = b % 24;
    c = a % 60;
    cout << b << " " << c;
    return 0;
}