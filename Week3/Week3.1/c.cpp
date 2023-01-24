#include <iostream>

using namespace std;

int main () {
    int a[10000];
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    int max = -100000;
    for (int i = 0; i < n; i++) {
        if ( a[i] > max) {
            max = a[i];
        }
    }
    cout << max;
    return 0;
}