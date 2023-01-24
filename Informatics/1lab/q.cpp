#include <iostream>

using namespace std;

int main () {
    int a, b;
    cin >> a >> b;
    int m;
    switch ( b % a) {
        case 0: cout << b / a; break;
        default: cout << (b / a) + 1 ;
    }
    return 0;
}