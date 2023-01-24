#include <iostream>

using namespace std;
int main () {
    int sum=0;
    int a[100000];
    for (int i = 0; i < 100000; i++) {
        cin >> a[i];
        sum += a[i];
        if ( a[i] == a[i+1]) break;
    }
    cout << sum;
    return 0;
}