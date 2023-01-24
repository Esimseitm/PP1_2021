#include <iostream>

using namespace std;
int main () {
    int a, b, c;
    cin >> a >> b >> c;
    if ( a == b && a == c) {
        cout << 3;
    }  else if ( ( a == b && a != c) || ( a == c && a != b ) || ( b == a && b != c) || ( b == c && b != a)) {
        cout << 2;
    } else {
        cout << 0;
    }
    return 0;
}