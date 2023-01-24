#include <iostream>

using namespace std;

int main () {
    int n, m;
    cin >> n;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> m;
        if ( m % 10 == 7) {
            sum++;
        }
    }
    cout << sum;
    return 0;
}