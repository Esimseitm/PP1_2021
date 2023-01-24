#include <iostream>
using namespace std;
int f(int a[], int b[], int n) {
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
             if ( a[i] == b[j]) {
                 b[j] = 'a';
                 cnt++;
             }
        }
    }
    return  cnt;
}
int main () {
    int n;
    cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
    cout << f( a, b, n);
}