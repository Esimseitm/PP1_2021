#include <iostream>
using namespace std;
int main () {
    int n;
    cin >>n;
    int a[n][n];
    int k = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if ( i + j == n - 1) {
                cout << k;
            } else {
                cout << ".";
            }
        }
        ++k;
        cout << endl;
    }
    return 0;
}