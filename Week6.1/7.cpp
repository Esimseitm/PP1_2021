// пробегает по массиву и ищет элемент в массиве и говорит есть ли он в массивк или нет

#include <iostream>
using namespace std;

int f( int a[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (a[i] == x) {
            return i;
        }
    }
    return -1;
}

int main () {
    int a[5] = {1, 2, 3, 4 ,5} ;
    int x = 5;

    int index = f(a, 5, x);
    if (index == -1) {
        cout << "NO";
    } else {
        cout << "YES";
    }
    return 0;
}