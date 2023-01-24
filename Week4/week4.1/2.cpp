#include <iostream>

using namespace std;

int main () {
    int n, m;
    cin >> n >> m;
    int a[n][m];
    int max, min;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
            if( i == 0 && j == 0) {
                max = a[i][j];
                min = a[i][j];
            }
            else {
                if ( a[i][j] > max) {
                    max = a[i][j];
                }
                if ( a[i][j] < min) {
                    min = a[i][j];
                }
            }
        }
    }
    cout << max << " " << min;
    
    return 0;
}