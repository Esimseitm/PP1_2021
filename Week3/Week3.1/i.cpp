#include <iostream>
using namespace std;
int main () {
    int n, l, r;
    int a[100000];
    cin >> n >> l >> r;
    for (int i = 1; i <= n; i++) {
        cin >> a[i] ;
    }
    for (int i = 1; i < l ; i++) {
        cout << a[i] << " ";
    }
     for (int i = r; i >= l; i--) {
        cout << a[i] << " ";
    } 
    int m = r + 1;
    
     for (int i = m; i <= n; i++ ) {
        cout << a[i] << " ";
    }
       
    return 0;
}