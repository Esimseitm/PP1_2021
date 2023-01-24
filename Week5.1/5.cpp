// сортировка массива 
#include <iostream>
#include <algorithm>
using namespace std;
int main () {
    int a[5] = {3, -1, 2, 6, 7};
    sort(a, a+5);
    for (int i=0; i < 5; i++) {
        cout << a[i] << " " ;
    }
    return 0;
}