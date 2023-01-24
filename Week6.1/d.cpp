#include <iostream>
using namespace std;

void manek(int a[], int n,  int m) {
    int k = 0;
    for (int i = 0; i < n; i++) {
        if ( a[i] == m) {
            cout << "Yes";
            k = 1;
            break;
        }
    }
    if ( k==0) cout<< "No"; 

} 

int main () {
    int n, m;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cin >> m;
    manek(a, n, m);
    return 0;
}