// что делать когла нам не говорится сколько нам дадут чисел, но дадут эти числа
// мы будем использовать следующий цикд
// и нам нужно найти сумму не известных скольки чисел
#include <iostream>

using namespace std;

int main () {
    freopen("input.txt", "r", stdin); // read
    freopen("output.txt", "w", stdout); // write
    int n = 0, k , sum = 0; 
    while (cin >> k) {
        n += 1;                     // n это число чисел
        sum += k;                   // k это числа которые будут
    }             
    cout << n << " " << sum;   // нам покажет сколько чисел было и их сумму
    return 0;
}