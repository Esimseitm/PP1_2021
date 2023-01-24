//У вас есть два массива a и b. Вы должны написать функцию, которая создаст новый массив d, элементы которого
//будет di = | ai - bi |
#include <bits/stdc++.h>
using namespace std;
void read( int a[], int n) {
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
}
void f(int a[], int b[], int c[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
       c[i] = abs(a[i] - b[i]);
    }
}
void print (int a[], int n) {
    for (int i =0; i < n ; i++) {
        cout << a[i] << " ";
    }
}
int main () {
    int n;
    int a[n], b[n], c[n];
    cin >> n;
    read (a, n);
    read (b, n);
    f (a, b, c, n);
    print (c, n);
    return 0;
}