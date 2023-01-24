#include <iostream>

using namespace std;
int main () {
    int n;
    cin >> n;
    int a[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) {
                a[i][j] = 1;
            } else {
                a[i][j] = 0;
            }
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}