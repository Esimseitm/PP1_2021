//Учитывая n чисел, вам нужно вывести количество нулей среди этих чисел.

#include <iostream>

using namespace std;

int main () {
    int n, j = 0, m;
    cin >>n;
    for ( int i = 0; i < n; i++) {
        cin >>m;
        while(m > 0) {
            if (m % 10 == 0) {
                j++;
            }
            m = m / 10;
        }
    } 
    cout << j;
    return 0;
} //zakonchil 