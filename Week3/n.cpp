// Учитывая массив, выведите квадратное значение каждого элемента.
#include <iostream>

using namespace std;

int main () {
    int n, a[100000];
    cin >>n;
    for (int i = 0; i < n; i++) {
    cin >> a[i];
    a[i]= a[i] * a[i] ;
    cout << a[i] << " ";
    }

    return 0;
}