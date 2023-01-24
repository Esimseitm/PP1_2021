#include <iostream>

using namespace std;

int main () {
    long a;
    cin >> a;
    for (int i = a; a > 0;) {
        if ( i + 1 != 1) 
             cout << i % 10;
        if ( i / 10 == 0) {
            break;
        }
        i = i / 10;

    }
    return 0;
}