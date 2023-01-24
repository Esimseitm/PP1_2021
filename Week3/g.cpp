// Дан массив, состоящий из целых чисел. Напишите программу, которая заменит все максимальные элементы на минимальные.
// элементы массива. Взгляните на образец, чтобы лучше понять условия.

#include <iostream> 

using namespace std;

int main () {
    int n, a[100000] ;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i] ;
    }
    int maxi = a[0], mini = a[0];
    for (int i = 0; i < n; i++) {
        if ( a[i] > maxi) {
            maxi = a[i];
        }
        if (a[i] < mini) {
            mini = a[i];
        }
    }
    for (int i =0; i < n; i++) {
        if (a[i] == maxi) {
            cout << mini << " ";
        } else {
            cout << a[i] << " ";
        }
    }
    return 0;
}