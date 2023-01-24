//Дан массив, состоящий из целых чисел. Напишите программу, которая выводит количество положительных чисел в массив.

#include <iostream>

using namespace std;

int main () {
    int j = 0;
    int a[100000];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] > 0) 
            j++;
    }
    cout << j;
    return 0;
}