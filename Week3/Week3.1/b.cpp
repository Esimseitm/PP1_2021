#include <iostream>

using namespace std;

int main () {
    int a[100000];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if ( a[i] > 0 ) {
            sum += 1;
        }
    }
    cout << sum;
    return 0;
}