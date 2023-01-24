// задача: нам нужно вывести максимальное и минимальное число в массиве

#include <iostream>

using namespace std;

int main () {
    int n, a[1000];
    cin >> n;
    for ( int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int maxi = a[0], mini = a[0];
    for ( int i = 0; i < n; i++) {
        if ( a[i] > maxi ) {
           maxi = a[i];
        } 

        if ( a[i] < mini) {
            mini = a[i];
        }
    }

    cout << mini << " " << maxi;
    return 0;
}