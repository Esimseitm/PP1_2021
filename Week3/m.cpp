// Вам дан массив, найдите сумму всех элементов. Но вы не знаете размер массива.
#include <iostream>

using namespace std;

int main () {
    int n = 0, k , sum = 0; 
    while (cin >> k) {                   // n это число чисел
        sum += k;                   // k это числа которые будут
    }             
    cout << sum;   // нам покажет сколько чисел было и их сумму
    return 0;
}