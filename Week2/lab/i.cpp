//Среди n чисел нужно посчитать количество чисел, заканчивающихся на 7.

#include <iostream>

using namespace std;

int main () {
    int n, j = 0, m;
    cin >> n;
    for ( int i = 0; i < n; i++) {
        cin>>m;
        if ( m % 10 == 7) {
            j += 1 ;
        } else {
            j += 0;
        }
    } 
    cout << j;
    return 0;
}