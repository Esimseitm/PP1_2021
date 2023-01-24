#include <iostream>

using namespace std;

int main () {
    int n, m;
    cin  >> n;
    int a = 0, b = 0;
    for (int i = 0; i < n; i++) {
        cin >> m;
        if (m % 2 != 0) {
            b++;
        } else if (m % 2 == 0) {
            a++;
        }
    }
    cout << a << " " << b;
    return 0;
}