#include <iostream>

using namespace std;

int sum = 0;

int f(int a[], int n) {
     if ( n == 0 ) {
         return sum;
     }
     sum += a[n];
    f(a, n - 1);
     
}


int main () {
    int n;
    cin >> n;
    int a[n];
    for (int i =1; i <=n; i++) {
        cin >> a[i];
    }
    cout << f(a, n);
    return 0;
}