#include <iostream>
#include <cmath>
using namespace std;
int main () {
    int n, m;
    cin >> n >> m;
    int a[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
            for (int h=sqrt(a[i][j]) - 1; h*h <= a[i][j]; h++ ) {
                if ( h*h == a[i][j]) {
                    a[i][j] = h;
                    break;
                }
            }
        }
    }
    for (int i=0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << a[i][j] << " ";    
        }
        cout << endl;
    }
    return 0;
}