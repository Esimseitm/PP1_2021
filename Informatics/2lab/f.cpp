#include <iostream>

using namespace std;

int main () {
    int a , b, c, max = 0;
    int ma = 0;
    cin >> a >> b >> c;
    if ( a < b) {
        a = b;
    } 
    if ( a < c) {
        a = c;
    }
    cout << a;
    return 0;
}