// Проверка данного номера 2-й степени.

#include <iostream>

using namespace std;

int f(int n) {
    if ( n % 2 == 0 || n == 1) {
        if (n == 0) {
            cout <<  "Yes";
        }
        else {
            return f(n / 2);
        }
    }
    else {
        cout << "No";
    }
}


int main () {
    int n;
    cin >> n;
    f(n);
    return 0;
}