#include <iostream>

using namespace std;

int main () {
    int a[100000];
    int n;
    cin >>n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cout << a[i] * a[i] <<  " " ;
    }
    return 0;
}