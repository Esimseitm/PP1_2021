#include <iostream>

using namespace std;

int main () {
    int n, m;
    int max = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >>m;
        if ( m > max) {
            max = m;
        }
    }
    cout << max;
    
    return 0;
}