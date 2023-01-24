// Дан массив, состоящий из целых чисел. Напишите программу, которая находит сумму всех элементов

#include <iostream>

using namespace std;

int main () {
    int n;
    long arr[100000] ;
    long sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i] ;
        sum += arr[i];
    }
    cout << sum;
    return 0;
}