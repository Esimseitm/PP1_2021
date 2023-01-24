#include <iostream>
using namespace std;
int main () {
    int a;
    cin >> a;
    int b;
    int sum = 0;
    for (int i = 1; i <= a; i++) {
        cin >> b;
        sum += b;
    }
    cout << sum;
    return 0;
}