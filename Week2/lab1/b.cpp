#include <iostream>

using namespace std;

int main () {
    int a;
    cin >> a;
    if ( a % 2 != 0) {
      cout << "Super";
    }
    if ((a % 2 == 0) && (a > 2) && (a < 5)) {
        cout << "Not Super";
    }
    if ((a % 2 == 0) && (a > 6) && (a < 20)) {
        cout << "Super";
    }
    if (a % 2 == 0 && a > 20) {
        cout << "Not Super";
    }
    return 0;
}