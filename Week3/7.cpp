// сумма цифр какого то числа

#include <iostream>

using namespace std;

int main () {
    int n, m, sum;
    cin >> n;
    while ( n > 0) {
        m = n % 10;
        n = n / 10;
        sum += m;
    }
    cout << sum;
    return 0;
}