#include <iostream>

using namespace std;

int main () {
    int a;
    cin >> a;
    int b;
    b = a % 10;
    if ( b >= 2 && b <= 4 ) {
        cout << a << " " << "korovy";
    } else if ( ( b >= 5 && b <= 20) ) {
        cout << a << " " << "korov";
    } else if (b == 1) {
        cout << a << " " << "korova";
    } else if ( b == 0) {
        cout << a << " " << "korov";
    }
    return 0;
}