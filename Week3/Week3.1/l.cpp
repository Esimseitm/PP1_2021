#include <iostream>
using namespace std;
int main () {
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i=0; i<n; i++) {
        cin >> b[i];
    }
    int k = 0;
    if (n > m) {
        k = n;
    } else 
     k = m;
    for (int i = 0; i<k; i++) {
        if (a[i] < b[i]) {
            cout << a[i] << " " << b[i] << " ";
        } else if ( b[i] < a[i]) {
            cout << b[i] << " " << a[i] << " ";
        } else if ( a[i] == b[i]) {
            cout << a[i] << " " << b[i] << " ";
        }
    }
    return 0;
}