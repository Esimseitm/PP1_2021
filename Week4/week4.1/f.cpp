#include <iostream>
using namespace std;
int main () {
    int n;
    cin >> n;
    int a[n][n];
    int c = 0, v = 0;
    int max = -100000;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> a[i][j];
            if ( a[i][j] > max ) {
                max = a[i][j];
                c = i;
                v = j;
            }

        }
    }
    cout << c << " " << v;
    return 0;
}