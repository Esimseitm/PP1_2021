// Вам дан отсортированный массив. Попробуйте найти в этом массиве число x.

#include <iostream>

using namespace std;

string f( int n, int a[], int m ) {
    if ( a[n] != m) {
        if ( n >= 0) {
           return f( n-1, a, m) ;
        }
        else {
            return "No";
        }
    }
    else {
        return "Yes";
    }
}


int main () {
    int n;
    cin >>  n;
    int a[n];
    for (int i = 0; i < n;i++) {
        cin>> a[i];
    }
    int m;
    cin >> m;
    cout << f(n, a, m);
    return 0;
}