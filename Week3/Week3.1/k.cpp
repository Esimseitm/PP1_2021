/* Учитывая отсортированный массив, напишите программу, которая удалит все дубликаты элементов и просто сохранит один из
них. */

#include <iostream>

using namespace std;

int main () {
    int a[100000];
    int n;
    cin >>n;
    for(int i = 0; i < n; i++) {
        cin >> a[i];   
    }
    for (int i = 0; i < n; i++) {
        if (a[i] != a[i-1] ) {
            cout << a[i] << " ";
        }
    }
    return 0;
}