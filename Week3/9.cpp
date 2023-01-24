// нам нужно посчитать сумму всех веденных чисел до числа - 0
#include <iostream>

using namespace std;

int main () {
    int k, sum;
    do {
        cin >> k;
        sum += k;
    } while (k != 0) ;
    cout << sum;

    return 0;
}