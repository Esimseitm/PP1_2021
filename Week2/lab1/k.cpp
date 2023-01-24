#include <iostream>

using namespace std;

int main () {
    int n;
    cin >> n;
    int i = 1;
    int b = 0;
    while (b < n) {
        b = i * i;
        i++;
        if ( b <= n) {
        cout << b << endl;
        }
    }
    return 0;
}