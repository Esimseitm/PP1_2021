#include <iostream>
using namespace std;
int main () {
    int n, l, r;
    int a[100000];
    cin >> n >> l >> r;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    int sum = 0;
    for (int i = l; i <= r; i++) {
        sum += a[i];
    }
    cout << sum;
    return 0;
}