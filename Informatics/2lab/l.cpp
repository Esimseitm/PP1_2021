#include <iostream>

using namespace std;

int main () {
    int a, b , c;
    cin >> a >> b >> c;
    if ( (a == b) && (c == 0) ) {
        cout << "NO";
    }
    if ( ((c <= a*b) && ( ( c % a == 0) || ( c % b == 0) )  ) ) {
        cout << "YES"; 
    } else {
        cout << "NO";
    }
    return 0;
}