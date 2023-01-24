#include <iostream>

using namespace std;
int main () {
    int a;
    cin >> a;
    int m = 0;
    for (int i = 0; i*i <= a; i++) {
        if ( i * i == a) {
           m = 1;
        }
    }
    if (m==1) cout << "YES";
    else cout << "NO";
    return 0;
}