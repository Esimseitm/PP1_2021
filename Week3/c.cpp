// Дан массив, состоящий из целых чисел. Напишите программу, которая выводит максимум в массиве.

#include <iostream>

using namespace std;

int main () {
    int n, a[100000] ;
    cin >> n;
    for (int i = 0; i < n; i++ ) {
        cin >> a[i];
    }

    int maxi = a[0];
    for (int i = 0; i < n; i++) {
        if ( a[i] > maxi) {
            maxi = a[i] ; 

        }
    }
    cout << maxi;
    return 0;
}