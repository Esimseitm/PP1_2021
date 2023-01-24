#include <iostream>

using namespace std;
int main () {
    int n;
    cin >> n;
    int a[100000];
    for (int i = 0; i < n; i++) {
        cin >> a[i] ;
    }

    int max = -1000000, min = 10000000;
    for (int i = 0; i < n; i++) {
        if ( a[i] > max ) {
            max = a[i];
        }
        if ( a[i] < min) {
            min = a[i];
        }
        
    }
    
    for (int i =0; i < n; i++) {
        if ( a[i] == max ) {
            cout << min << " ";
        } else {
            cout << a[i] << " ";
        }
    }
    return 0;
}