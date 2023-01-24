#include <iostream>

using namespace std;

int main () {
    int a, b;
    cin >> a >> b ;
    switch ( b % a) {
        case 0: cout << "0"; break;
        default: cout << (a - b%a) % a;
    }
    return 0;
}