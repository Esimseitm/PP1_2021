#include <iostream>
using namespace std;
int main () {
    int n, m;
    cin >> n;
    int a[n];
    for (int i=0; i < n; i++) {
        cin >> a[i];
    }
    for (int i=0; i < n; i++) {
        for (int j=0; j < n-i-1; j++) {
            if (a[j] > a[j+1]) {
                m = a[j];
                a[j] = a[j+1];
                a[j+1] = m;
            }

        }
    }
    for (int i=0; i<n; i++) {
        cout << a[i]<< " ";
    }
    cout << endl;
    for (int i=n-1; i>=0; i--) {
        cout << a[i]<< " ";
    }
    return 0;
}