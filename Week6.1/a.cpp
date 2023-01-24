// Вам даны два целых числа a и b. Напишите функцию, которая вернет одно целое число, сумму a, b.

#include <iostream>

using namespace std;

int calc(int n, int m) {
    int sum = 0;
    sum = n + m;
    return sum;
}
int main () {
    int sum = 0;
    int n, m;
    cin >> n >> m;
    sum = calc(n, m);
    cout << sum;
    return 0;
}