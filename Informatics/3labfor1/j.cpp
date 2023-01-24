#include <iostream>

using namespace std;

int main () {
    int a;
    int sum = 0;
    for (int i = 1; i <=100; i++) {
        cin >> a;
        sum += a;
    }
    cout << sum;
    return 0;
}